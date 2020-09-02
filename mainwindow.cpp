#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "threads.h"
#include <QDebug>

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

//    Threads tFirst("One");
//    tFirst.wait();
//    delete(&tFirst);
//    deleteLater

    qDebug()<<"I't ok";
}

void MainWindow::on_pushButtonTwoThreed_clicked()
{
    ui->TwoThreedLabel->setText(ar.ParrTime());
}

void MainWindow::on_pushButtonFourThreed_clicked()
{
    ui->FourThreedLabel->setText(ar.QuadroThreed());
}
