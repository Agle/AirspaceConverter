#ifndef FILE_CHOOSER_H
#define FILE_CHOOSER_H

#include <QWidget>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QFileDialog>
#include <QDebug>
#include <QComboBox>
#include <QFileInfo>


class filechooser : public QWidget
{
    Q_OBJECT
public:
    explicit filechooser(QWidget *parent = 0);
    
protected:
    // members
    QHBoxLayout* left_lt;
    QPushButton* vib_btn;
    QLineEdit* line;
    filechooser* converterGui;

protected slots:
    void filepath();
    void FilePath_clicked();
};

#endif // FILE_CHOOSER_H
