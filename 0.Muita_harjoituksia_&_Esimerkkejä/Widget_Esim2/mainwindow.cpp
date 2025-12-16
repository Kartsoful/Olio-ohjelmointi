#include "form1.h"
#include "form2.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnOpenForm1, &QPushButton::clicked, this, &MainWindow::openForm1);
    connect(ui->btnOpenForm2, &QPushButton::clicked, this, &MainWindow::openForm2);
    connect(ui->btnSetName, &QPushButton::clicked, this, &MainWindow::setName);
    objectSingleton = Person::getInstance();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectSingleton;
    objectSingleton = nullptr;
}

void MainWindow::openForm1()
{
    //qDebug()<< "Button 1 painettu";
    Form1 *objectForm1 = new Form1(this);
    objectForm1->show();
}

void MainWindow::openForm2()
{
    //qDebug()<< "Button 2 painettu";
    Form2 *objectForm2 = new Form2(this);
    objectForm2->show();
}

void MainWindow::setName()
{
    Person *objectSingleton = Person::getInstance();
    objectSingleton->setName(ui->textName->text());
}
