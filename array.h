#ifndef ARRAY_H
#define ARRAY_H

#include <qvector.h>
#include <QString>
#include <QThread>
#include <thread>
#include <chrono>



class Array
{
private:
    QVector<int> array,arrayMulty;
    double Times();
//    QVector<thread> threads;
    double ParrTime();
    int Multi(int start,int stop,int indexThread);
public:
    Array();
    bool Init();
    QString ParrTimes();
};

#endif // ARRAY_H
