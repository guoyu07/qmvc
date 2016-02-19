#ifndef COUNTER_H
#define COUNTER_H

#include <QSharedPointer>
#include <QObject>
#include <QTimer>
#include "model/count.h"

/**
 * @brief The Counter controller class
 */
class Counter: public QObject
{
    Q_OBJECT
public:
    Counter();
    void setModel(QSharedPointer<Count> model);

public slots:
    void onStart();
    void onStop();
    void onTimer();

signals:
    void valueChanged(int newValue);

private:
    QSharedPointer<Count> mModel;
    QTimer *mTimer;
};

#endif
