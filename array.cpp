#include "array.h"
#include <vector>
#include <time.h>
#include <QString>
#include <QThread>
#include <thread>
#include "threads.h"
#include <QCoreApplication>
#include <QDebug>
#include <cmath>
#include <QtConcurrent/QtConcurrent>
#include <QThreadPool>

QString Array::Times()
{
    clock_t timeStart1,timeStop1;
    int sum=1;
    timeStart1=clock();
    for(int i=0;i<array.size();i++){
            sum*=pow(array[i],array[i]);
//            qDebug()<<i+" "+j;

    }
    timeStop1=clock();
    qDebug()<<sum;
    return QString::number(timeStop1-timeStart1);
}

QString Array::ParrTime()
{
    clock_t timeStart,timeStop;
    Threads tFirst(0,(int)arrayMulty.size()/2,arrayMulty);
    Threads tSecond((int)arrayMulty.size()/2,(int)arrayMulty.size(),arrayMulty);
    timeStart=clock();
    tFirst.start();
    tSecond.start();
    tFirst.wait();
    tSecond.wait();
    timeStop=clock();
    return QString::number(timeStop-timeStart);
}

QString Array::EightThreadTime()
{
    clock_t timeStart,timeStop;
    Threads t11(0,(int)arrayMulty.size()*1/8,arrayMulty);
    Threads t12((int)arrayMulty.size()*1/8,(int)arrayMulty.size()*2/8,arrayMulty);
    Threads t13((int)arrayMulty.size()*2/8,(int)arrayMulty.size()*3/8,arrayMulty);
    Threads t14((int)arrayMulty.size()*3/8,(int)arrayMulty.size()*4/8,arrayMulty);
    Threads t15((int)arrayMulty.size()*4/8,(int)arrayMulty.size()*5/8,arrayMulty);
    Threads t16((int)arrayMulty.size()*5/8,(int)arrayMulty.size()*6/8,arrayMulty);
    Threads t17((int)arrayMulty.size()*6/8,(int)arrayMulty.size()*7/8,arrayMulty);
    Threads t18((int)arrayMulty.size()*7/8,(int)arrayMulty.size(),arrayMulty);
//    &tOne;
    timeStart=clock();
    t11.start();
    t12.start();
    t13.start();
    t14.start();
    t15.start();
    t16.start();
    t17.start();
    t18.start();
//    tOne.wait();
//    tTwo.wait();
//    tThree.wait();
    t18.wait();
    timeStop=clock();
    return QString::number(timeStop-timeStart);
}

QString Array::SixteenThreadTime()
{clock_t timeStart,timeStop;
    Threads t31(0,(int)arrayMulty.size()*(1/16),arrayMulty);
    Threads t32((int)arrayMulty.size()*(1/16),(int)arrayMulty.size()*(2/16),arrayMulty);
    Threads t33((int)arrayMulty.size()*(2/16),(int)arrayMulty.size()*(3/16),arrayMulty);
    Threads t34((int)arrayMulty.size()*(3/16),(int)arrayMulty.size()*(4/16),arrayMulty);
    Threads t35((int)arrayMulty.size()*(4/16),(int)arrayMulty.size()*(5/16),arrayMulty);
    Threads t36((int)arrayMulty.size()*(5/16),(int)arrayMulty.size()*(6/16),arrayMulty);
    Threads t37((int)arrayMulty.size()*(6/16),(int)arrayMulty.size()*(7/16),arrayMulty);
    Threads t38((int)arrayMulty.size()*(7/16),(int)arrayMulty.size()*(8/16),arrayMulty);
    Threads t39((int)arrayMulty.size()*(8/16),(int)arrayMulty.size()*(9/16),arrayMulty);
    Threads t310((int)arrayMulty.size()*(9/16),(int)arrayMulty.size()*(10/16),arrayMulty);
    Threads t311((int)arrayMulty.size()*(10/16),(int)arrayMulty.size()*(11/16),arrayMulty);
    Threads t312((int)arrayMulty.size()*(11/16),(int)arrayMulty.size()*(12/16),arrayMulty);
    Threads t313((int)arrayMulty.size()*(12/16),(int)arrayMulty.size()*(13/16),arrayMulty);
    Threads t314((int)arrayMulty.size()*(13/16),(int)arrayMulty.size()*(14/16),arrayMulty);
    Threads t315((int)arrayMulty.size()*(14/16),(int)arrayMulty.size()*(15/16),arrayMulty);
    Threads t316((int)arrayMulty.size()*(15/16),(int)arrayMulty.size(),arrayMulty);
//    &tOne;
    timeStart=clock();
    t31.start();
    t32.start();
    t33.start();
    t34.start();
    t35.start();
    t36.start();
    t37.start();
    t38.start();
    t39.start();
    t310.start();
    t311.start();
    t312.start();
    t313.start();
    t314.start();
    t315.start();
    t316.start();
//    tOne.wait();
//    tTwo.wait();
//    tThree.wait();
    t316.wait();
    timeStop=clock();
    return QString::number(timeStop-timeStart);

}

QString Array::QuadroThreed()
{
    clock_t timeStart,timeStop;
    Threads t21(0,(int)arrayMulty.size()*1/4,arrayMulty);
    Threads t22((int)arrayMulty.size()*1/4,(int)arrayMulty.size()/2,arrayMulty);
    Threads t23((int)arrayMulty.size()/2,(int)arrayMulty.size()*(3/4),arrayMulty);
    Threads t24((int)arrayMulty.size()*(3/4),(int)arrayMulty.size(),arrayMulty);
//    &tOne;
    timeStart=clock();
    t21.start();
    t22.start();
    t23.start();
    t24.start();
//    tOne.wait();
//    tTwo.wait();
//    tThree.wait();
    t24.wait();
    timeStop=clock();
    return QString::number(timeStop-timeStart);
}



Array::Array()
{
//    array.fill(0,valueOfLenghtVector);
//    arrayMulty.fill(0,valueOfLenghtVector);
//    for(int i=0;i<array.size();i++){
//        array[i]=rand()+1;
//        arrayMulty[i]=rand()+1;
//    }
}

bool Array::Init(int lenghtVector)
{
    array.fill(0,lenghtVector);
    arrayMulty.fill(0,lenghtVector);
    for(int i=0;i<array.size();i++){
        array[i]=rand()+1;
        arrayMulty[i]=array[i];
    }
    return true;
}

QString Array::ParrTimes()
{

//    QString resultOne=QString::number(Times());
//    QString resultFour=QString::number(QuadroThreed());
//    QString resultTwo=QString::number(ParrTime());

    return 1;//+" "+resultTwo+" "+resultFour;
}

int Array::test1()
{
    int sum=1;
    for(int i=0;i<array.size()/4;i++){
            sum*=pow(array[i],array[i]);
//            qDebug()<<i+" "+j;

    };
    return sum;
}
int Array::test2()
{
    int sum=1;
    for(int i=array.size()/4;i<array.size()/2;i++){
            sum*=pow(array[i],array[i]);
//            qDebug()<<i+" "+j;

    };
    return sum;
}
int Array::test3()
{
    int sum=1;
    for(int i=array.size()/2;i<array.size()*3/4;i++){
            sum*=pow(array[i],array[i]);
//            qDebug()<<i+" "+j;

    };
    return sum;
}
int Array::test4()
{
    int sum=1;
    for(int i=array.size()*3/4;i<array.size();i++){
            sum*=pow(array[i],array[i]);
//            qDebug()<<i+" "+j;

    };
    return sum;
}





QString Array::TestConcurrent()
{
    clock_t timeStart1,timeStop1;
    timeStart1=clock();
    QFuture<int> a =QtConcurrent::run(this,&Array::test1);
    QFuture<int> b =QtConcurrent::run(this,&Array::test2);
    QFuture<int> c =QtConcurrent::run(this,&Array::test3);
    QFuture<int> d =QtConcurrent::run(this,&Array::test4);
    int result=a.result()+b.result()+c.result()+d.result();
    timeStop1=clock();
    return QString::number(timeStop1-timeStart1);
}


