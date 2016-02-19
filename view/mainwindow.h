#pragma once

#include <QLabel>
#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    QLabel *label;
    QPushButton *startButton;
    QPushButton *stopButton;

public slots:
    void setValueLabel(int);
};
