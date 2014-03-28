#ifndef AIRSPACE_CONVERTER_INTERFACE_H
#define AIRSPACE_CONVERTER_INTERFACE_H

#include <QWidget>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QFileDialog>
#include <QDebug>
#include <QComboBox>
#include <QFileInfo>
#include <QTextEdit>
#include <QGridLayout>

#include "FileChooser/file_chooser.h"

class AirspaceConverterInterface : public QWidget{
    Q_OBJECT

public:
    explicit AirspaceConverterInterface(QWidget *parent = 0);
    

protected:
    // members
    QGridLayout* main_lt;
    QTextEdit* text_lt;
   // QGridLayout* top_lt;
    QComboBox* spisok_btn;
    QPushButton* ok_btn;
    AirspaceConverterInterface* converterGui;

    filechooser* leftWgt;

    // methods
    void createGui();

protected slots:
    void Save_clicked();
    void Combo_clicked();

};
#endif // AIRSPACE_CONVERTER_INTERFACE_H
