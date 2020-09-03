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
    int vectorSize=1600000;
    if(ar.Init(vectorSize)){
        toc.VectorInit(vectorSize);
        ui->labelArrayIsReady->setText("True");
        ui->label_3->setText("True");
    }
}

void MainWindow::on_buttonSeqMulty_clicked()
{
    ui->labelSeqMultyResult->setText(ar.Times());
    ui->labelSeqSumOldC->setText(toc.MultyTimes());

//    Threads tFirst("One");
//    tFirst.wait();
//    delete(&tFirst);
//    deleteLater

    qDebug()<<"I't ok";
}

void MainWindow::on_pushButtonTwoThreed_clicked()
{
    ui->TwoThreedLabel->setText(ar.ParrTime()+" "+toc.TwentyThreadMulty());
}

void MainWindow::on_pushButtonFourThreed_clicked()
{
    ui->FourThreedLabel->setText(ar.QuadroThreed());
}

void MainWindow::on_pushButton_clicked()
{
    ui->label_EightQt->setText(ar.EightThreadTime());
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label_4->setText(ar.SixteenThreadTime());
}

void MainWindow::on_buttonConcurrent_clicked()
{
ar.TestConcurrent();
ui->labelConcurrent->setText(ar.TestConcurrent());
}
