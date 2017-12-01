#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
//#include "rosgui.h"

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondWindow *ui;
  //  ROSGUI *guir;
};

#endif // SECONDWINDOW_H
