#ifndef THREADS_H
#define THREADS_H

#include <QThread>


class Threads:public QThread

{
    Q_OBJECT
public:
    explicit Threads(QString s);
    void run();
private:
    QString name;
};

#endif // THREADS_H
