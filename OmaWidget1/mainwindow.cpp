#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnPlus, &QPushButton::clicked, this, &MainWindow::btnPlus);
    connect(ui->btnMinus, &QPushButton::clicked, this, &MainWindow::btnMinus);
    connect(ui->btnMultiply, &QPushButton::clicked, this, &MainWindow::btnMultiply);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnPlus()
{
    int a = ui->textNumber1->text().toInt();
    int b = ui->textNumber2->text().toInt();
    int result = a + b;
    QString s = QString::number(result);
    ui->labelResult->setText("Tulos on " + s);
}

void MainWindow::btnMinus()
{
    int a = ui->textNumber1->text().toInt();
    int b = ui->textNumber2->text().toInt();
    int result = a - b;
    QString s = QString::number(result);
    ui->labelResult->setText("Tulos on " + s);
}

void MainWindow::btnMultiply()
{
    int a = ui->textNumber1->text().toInt();
    int b = ui->textNumber2->text().toInt();
    int result = a * b;
    QString s = QString::number(result);
    ui->labelResult->setText("Tulos on " + s);
}
