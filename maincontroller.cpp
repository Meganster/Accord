#include "maincontroller.h"

MainController::MainController()
{

}

void MainController::openMainWin(){
    mainWin.show();
}

void MainController::start(){
    openMainWin();
}

MainWindow& MainController::getMainWin(){
    return mainWin;
}
