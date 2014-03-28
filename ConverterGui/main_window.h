#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "Gui/airspace_converter_interface.h"
#include "FileChooser/file_chooser.h"


class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    AirspaceConverterInterface* centralWgt;




};

#endif // MAIN_WINDOW_H
