#include "mainwindow.h"
#include <QFrame>
#include <QHBoxLayout>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QFrame *frame = new QFrame(this);
    setCentralWidget(frame);

    QHBoxLayout *hbox = new QHBoxLayout(frame);

    startButton = new QPushButton("Start", frame);
    hbox->addWidget(startButton, 0, Qt::AlignLeft | Qt::AlignTop);

    stopButton= new QPushButton("Stop", frame);
    hbox->addWidget(stopButton, 1, Qt::AlignLeft | Qt::AlignTop);

    label = new QLabel("None", frame);
    hbox->addWidget(label, 0, Qt::AlignLeft | Qt::AlignTop);

    setWindowTitle("Qt MVC Demo");
    resize(400, 300);
}

void MainWindow::setValueLabel(int value)
{
    QString s("%1");
    label->setText(s.arg(value));
}
