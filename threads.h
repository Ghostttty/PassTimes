#ifndef THREADS_H
#define THREADS_H

#include <QThread>
#include <QString>
#include <QVector>


class Threads:public QThread
{
    Q_OBJECT
public:
    explicit Threads(int start,int stop,QVector<int>& p);
    void run();
    int getSum();
//private:
//    QString name;
    int startValue=0,stopValue=100000,sum=1;
    QVector<int> copyArray;
};

#endif // THREADS_H
