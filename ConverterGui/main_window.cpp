#include "main_window.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    this->createGui();
    QObject::connect(vib_btn, SIGNAL(clicked()), this, SLOT(FilePath_clicked()));
    QObject::connect(ok_btn, SIGNAL(clicked()), this, SLOT(Save_clicked()));
  QObject::connect(spisok_btn, SIGNAL(clicked()), this, SLOT(Combo_clicked()));

}

MainWindow::~MainWindow(){

}

void MainWindow::createGui(){
    centralWgt = new QWidget;
    main_lt = new QHBoxLayout;
    vib_btn = new QPushButton(QObject::tr("..."));
    spisok_btn = new QComboBox();
    ok_btn = new QPushButton(QObject::tr("Ok"));
    line = new QLineEdit;
    spisok_btn->addItem("dwg");
    spisok_btn->addItem("dfx");
    spisok_btn->addItem("txt");


    main_lt->addWidget(vib_btn);
    main_lt->addWidget(line);
    main_lt->addWidget(spisok_btn);
    main_lt->addWidget(ok_btn);
    centralWgt->setLayout(main_lt);
    this->setCentralWidget(centralWgt);
}

// protected slots
void MainWindow::FilePath_clicked(){
   // line->setText (QFileDialog::getOpenFileName(this,tr("Open File"),"",tr("*.dwg;;*.txt;;*.cpp")));
    QFileInfo fi(QFileDialog::getOpenFileName(this,tr("Open File"),"",tr("*.dwg;;*.txt;;*.cpp")));
    line->setText(fi.fileName());
}
void MainWindow::Save_clicked(){
    QFileDialog::getSaveFileName();
}
void MainWindow::Combo_clicked(){

}
