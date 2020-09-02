#ifndef ARRAY_H
#define ARRAY_H

#include <qvector.h>
#include <QString>
#include <QThread>
#include <vector>



class Array
{
//private:
public:
    QVector<int> array,arrayMulty;
    double Times();
//    QVector<thread> threads;
    QString ParrTime();
    double TwoThreed();
    QString QuadroThreed();
    int Multi(int start,int stop,int indexThread);
//public:
    Array();
    bool Init();
    QString ParrTimes();
};

#endif // ARRAY_H
