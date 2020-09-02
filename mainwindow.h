#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "array.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_InitArrrayButton_clicked();

    void on_buttonSeqMulty_clicked();

    void on_pushButtonTwoThreed_clicked();

    void on_pushButtonFourThreed_clicked();

private:
    Ui::MainWindow *ui;
    Array ar;
};

#endif // MAINWINDOW_H
