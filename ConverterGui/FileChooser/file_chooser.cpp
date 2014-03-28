#include "file_chooser.h"

filechooser::filechooser(QWidget *parent) :QWidget(parent){
    this->filepath();
    QObject::connect(vib_btn, SIGNAL(clicked()), this, SLOT(FilePath_clicked()));
}


void filechooser::filepath(){
    left_lt = new QHBoxLayout;
    vib_btn = new QPushButton(QObject::tr("..."));
    line = new QLineEdit;
    left_lt->addWidget(vib_btn);
    left_lt->addWidget(line);
     this->setLayout(left_lt);
  }
void filechooser::FilePath_clicked(){
   // line->setText (QFileDialog::getOpenFileName(this,tr("Open File"),"",tr("*.dwg;;*.txt;;*.cpp")));
    QFileInfo fi(QFileDialog::getOpenFileName(this,tr("Open File"),"",tr("*.dwg;;*.txt;;*.cpp")));
    line->setText(fi.fileName());

}
