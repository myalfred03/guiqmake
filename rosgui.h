#ifndef ROSGUI_H
#define ROSGUI_H

#include <QMainWindow>
#include "secondwindow.h"
#include "thirdwindow.h"
#include "fourth.h"

namespace Ui {
class ROSGUI;
}

class ROSGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit ROSGUI(QWidget *parent = 0);
    ~ROSGUI();

public slots:
    void openCD(); //make a new function to call the window
    void openCI();
    void openDH();
    void updateSpinboxes();
    void updateSlider();
    void updateDialer();
    void updateSpinboxesD();

private slots:

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionExit_triggered();

    void on_2DOF();
    void on_3DOF();
    void on_4DOF();
    void on_5DOF();
    void on_6DOF();

private:
    Ui::ROSGUI *ui;
    SecondWindow *secwindow;
    thirdwindow *thwindow;
    fourth *fourwindow;
};

#endif // ROSGUI_H
