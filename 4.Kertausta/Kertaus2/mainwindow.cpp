#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnGetPersons, &QPushButton::clicked, this, &MainWindow::getPersonsSlot);
    connect(ui->btnShowPersons, &QPushButton::clicked, this, &MainWindow::personsToListSlot);
    ui->btnShowPersons->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getPersonsSlot()
{
    QString site_url="http://peatutor.com/json_example/index.php";
    QNetworkRequest request(site_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //luo manager konstruktorissa, jos sinulla on monta requestia sovelluksessa
    manager = new QNetworkAccessManager(this);

    reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &MainWindow::showPersonSlot);
}

void MainWindow::showPersonSlot()
{
    // Tarkistetaan verkkovirheet
    if (reply->error() != QNetworkReply::NoError) {
        qWarning() << "Network error:" << reply->errorString();
        reply->deleteLater();
        manager->deleteLater();
        return;
    }

    QByteArray response_data=reply->readAll();
    // Muunnetaan vastaus QByteArray-tyyppisestä JSON-dokumentiksi
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    // Muunnetaan JSON-dokumentti JSON-arrayksi
    QJsonArray json_array = json_doc.array();

    for (const QJsonValue &value : json_array) {
        if (value.isObject()) {
            Person person = Person::mapJson(value.toObject());
            qDebug() << "Test1:" << person.firstname;
            personList.append(person);
        }
    }

    //personsToListSlot();
    ui->btnShowPersons->setEnabled(true);
    reply->deleteLater();
    manager->deleteLater();
}

void MainWindow::personsToListSlot()
{
    auto *tableModel = new QStandardItemModel(personList.size(), 3, this);

    tableModel->setHorizontalHeaderLabels({ tr("ID"), tr("Etunimi"), tr("Sukunimi") });

    for (int row = 0; row < personList.size(); ++row) {
        const Person &book = personList[row];
        tableModel->setItem(row, 0, new QStandardItem(QString::number(book.id)));
        tableModel->setItem(row, 1, new QStandardItem(book.firstname));
        tableModel->setItem(row, 2, new QStandardItem(book.lastname));
        qDebug() << "Test2:" << book.firstname;
    }


    ui->tablePersons->setModel(tableModel);
    ui->tablePersons->verticalHeader()->setVisible(false);
    ui->tablePersons->resizeColumnsToContents();
}
