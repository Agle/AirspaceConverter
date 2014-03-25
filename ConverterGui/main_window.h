#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QWidget>
#include <QFileDialog>
#include <QDebug>
#include <QComboBox>
#include <QFileInfo>


class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    // members
    QWidget* centralWgt;
    QHBoxLayout* main_lt;
    QPushButton* vib_btn;
    QComboBox* spisok_btn;
    QPushButton* ok_btn;
    QLineEdit* line;


    // methods
    void createGui();

protected slots:
    void FilePath_clicked();
    void Save_clicked();
    void Combo_clicked();

};

#endif // MAIN_WINDOW_H
