#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "threads.h"
#include <QDebug>
#include <QThread>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_InitArrrayButton_clicked()
{
    if(ar.Init())
        ui->labelArrayIsReady->setText("True");
}

void MainWindow::on_buttonSeqMulty_clicked()
{
    ui->labelSeqMultyResult->setText(ar.ParrTimes());
    Threads* tFirst=new Threads("One");
    tFirst->wait();
    delete(tFirst);
    qDebug()<<"I't ok";
}
