#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QMainWindow>

namespace Ui {
class thirdwindow;
}

class thirdwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit thirdwindow(QWidget *parent = 0);
    ~thirdwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::thirdwindow *ui;
};

#endif // THIRDWINDOW_H
