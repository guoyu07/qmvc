#include "app.h"
#include <QApplication>
#include <iostream>

App::~App()
{
    delete mCounterController;
}

void App::createObjects()
{
    mCounterController = new Counter();
    mMainWindowView = new MainWindow();
    mModel = QSharedPointer<Count>(new Count());
}

int App::main(int argc, char *argv[])
{
    App app;
    return app.run(argc, argv);
}

int App::run(int argc, char *argv[])
{
    QApplication qapp(argc, argv);
	// NB: Parse cli here with QCommandLineParser.
    createObjects();
    setupConnections();
    mMainWindowView->show();

    return qapp.exec();
}

void App::setupConnections()
{
    mCounterController->setModel(mModel);
    QObject::connect(mCounterController, SIGNAL(valueChanged(int)),
                     mMainWindowView, SLOT(setValueLabel(int)));
    QObject::connect(mMainWindowView->startButton, SIGNAL(clicked(bool)),
                     mCounterController, SLOT(onStart()));
    QObject::connect(mMainWindowView->stopButton, SIGNAL(clicked(bool)),
                     mCounterController, SLOT(onStop()));
}
