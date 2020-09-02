#include "array.h"
#include <vector>
#include <time.h>
#include <QString>
#include <QThread>
#include <thread>
#include "threads.h"
#include <QCoreApplication>
#include <QDebug>

double Array::Times()
{
//    time_t timeStart,timeEnd;
    clock_t timeStart,timeStop;
    int sum=1;
    timeStart=clock();
    for(int i:array)
        sum*=i;
    timeStop=clock();
    return (timeStart-timeStop);
}

//double Array::ParrTime()
//{
//    clock_t timeStart,timeStop;
//    Threads* tA=new Threads("One");
//    timeStart=clock();
//    qDebug()<<"Done";
//    tA->start();
//    timeStop=clock();
//    return (timeStart-timeStop);
//}



Array::Array()
{
    array.fill(0,100000);
    arrayMulty.fill(0,100000);
    for(int i=0;i<array.size();i++){
        array[i]=rand()+1;
        arrayMulty[i]=rand()+1;
    }
}

bool Array::Init()
{
    Array();
    return true;
}

QString Array::ParrTimes()
{

    QString resultOne=QString::number(Times());
    return resultOne;
}

