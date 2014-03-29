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
    text_lt = new QTextEdit;//Создание TextEdit на форме
    leftWgt = new filechooser;
    spisok_btn = new QComboBox();//Создание выпадающего списка на форме
    ok_btn = new QPushButton(QObject::tr("Ok"));//создание клавиши Ок на форме
    main_lt->addWidget(leftWgt);//Добавление виджета из filechooser
    spisok_btn->addItem("dwg");//заполнение выпадающего списка
    spisok_btn->addItem("dfx");//заполнение выпадающего списка
    spisok_btn->addItem("txt");//заполнение выпадающего списка
    main_lt->addWidget(spisok_btn);//расстановка на форме
    main_lt->addWidget(ok_btn);
    main_lt->addWidget(text_lt);
    this->setLayout(main_lt);//вывод формы
}

// protected slots
void AirspaceConverterInterface::Save_clicked(){//функция сохранения файла
    QFileDialog::getSaveFileName();
}
void AirspaceConverterInterface::Combo_clicked(){

}


