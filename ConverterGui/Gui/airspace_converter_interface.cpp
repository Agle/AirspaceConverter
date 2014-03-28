#include "airspace_converter_interface.h"
#include"FileChooser/file_chooser.h"

AirspaceConverterInterface::AirspaceConverterInterface(QWidget *parent) : QWidget(parent){
 main_lt = new QGridLayout;
    this->createGui();
    QObject::connect(ok_btn, SIGNAL(clicked()), this, SLOT(Save_clicked()));
    QObject::connect(spisok_btn, SIGNAL(clicked()), this, SLOT(Combo_clicked()));

}

void AirspaceConverterInterface::createGui(){
   // top_lt = new QGrLayout;
    text_lt = new QTextEdit;
    leftWgt = new filechooser;
    spisok_btn = new QComboBox();
    ok_btn = new QPushButton(QObject::tr("Ok"));
    main_lt->addWidget(leftWgt);

    spisok_btn->addItem("dwg");
    spisok_btn->addItem("dfx");
    spisok_btn->addItem("txt");

    main_lt->addWidget(spisok_btn);
    main_lt->addWidget(ok_btn);
    main_lt->addWidget(text_lt);
    this->setLayout(main_lt);
    //this->setLayout(top_lt);
}

// protected slots
void AirspaceConverterInterface::Save_clicked(){
    QFileDialog::getSaveFileName();
}
void AirspaceConverterInterface::Combo_clicked(){

}


