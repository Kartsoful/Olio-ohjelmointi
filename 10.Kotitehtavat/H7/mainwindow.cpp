#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::btnCount);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::btnReset);
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnCount()
{
    counter += 1;
    // qDebug() << counter;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta Count painettu " + s + " kertaa");
    ui->txtResult->setText(s);
}

void MainWindow::btnReset()
{
    counter = 0;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta Count painettu " + s + " kertaa");
    ui->txtResult->setText(s);
}

