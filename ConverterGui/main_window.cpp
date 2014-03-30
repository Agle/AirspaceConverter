#include "main_window.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    centralWgt = new AirspaceConverterInterface;
    this->setCentralWidget(centralWgt);

}

MainWindow::~MainWindow(){

}



