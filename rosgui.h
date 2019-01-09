#ifndef ROSGUI_H
#define ROSGUI_H

#include <QMainWindow>
#include <QWidget>
#include <QMessageBox>
//#include "secondwindow.h"
//#include "thirdwindow.h"
//#include "fourth.h"

namespace Ui {
class ROSGUI;
class DialogOptionsWidget;
}

class ROSGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit ROSGUI(QWidget *parent = 0);
    ~ROSGUI();

public slots:
    void openDialoginfo(); //make a new function to call the window
//    void openCI();
//    void openDH();
    void updateSpinboxes();
    void updateSlider();
    void updateDialer();
    void updateSpinboxesD();

private slots:

//    void on_pushButton_3_clicked();

//    void on_pushButton_2_clicked();

//    void on_pushButton_4_clicked();

    void on_actionOpen_triggered();

    void on_actionExit_triggered();

    void on_2DOF();
    void on_3DOF();
    void on_4DOF();
    void on_5DOF();
    void on_6DOF();

    void on_pushButton_clicked();

private:
    Ui::ROSGUI *ui;
//    SecondWindow *secwindow;
//    thirdwindow *thwindow;
//    fourth *fourwindow;
    QLabel *informationLabel;

};

#endif // ROSGUI_H
