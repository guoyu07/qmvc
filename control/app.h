#ifndef APP_H
#define APP_H

#include "counter.h"
#include "model/count.h"
#include "view/mainwindow.h"

class App {
public:
    ~App();
    void createObjects();
    static int main(int argc, char *argv[]);
    int run(int argc, char *argv[]);
    void connectObjects();

    QSharedPointer<Count> mModel;
    MainWindow *mMainWindowView;
    Counter *mCounterController;
};

#endif
