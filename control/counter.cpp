#include "counter.h"
#include <iostream>

Counter::Counter()
{
    mTimer = new QTimer(this);
    connect(mTimer, SIGNAL(timeout()), this, SLOT(onTimer()));
}

void Counter::setModel(QSharedPointer<Count> model)
{
    mModel = model;
}

void Counter::onStart()
{
    if (!mTimer->isActive()) {
        mTimer->start(1000);
    }
}

void Counter::onStop()
{
    mTimer->stop();
}

void Counter::onTimer()
{
    int newValue = mModel->value() + 1;
    mModel->setValue(newValue);
    emit valueChanged(newValue);
}

