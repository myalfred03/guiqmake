#include "rosgui.h"
#include "secondwindow.h"
#include "thirdwindow.h"
#include <QApplication>
#include "ui_mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ROSGUI w;
//    Ui z;
    //SecondWindow w1;
    w.show();
//    z.show();
   // w1.show();

    return a.exec();
}
