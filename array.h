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
    QString Times();
    int valueOfLenghtVector=0;
//    QVector<thread> threads;
    QString ParrTime();
    QString EightThreadTime();
    QString SixteenThreadTime();
    double TwoThreed();
    QString QuadroThreed();
    int Multi(int start,int stop,int indexThread);
//public:
    Array();
    bool Init(int lenghtVector);
    QString ParrTimes();
    int test1();
    int test2();
    int test3();
    int test4();
    QString TestConcurrent();
};

#endif // ARRAY_H
