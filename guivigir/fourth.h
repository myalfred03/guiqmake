#ifndef FOURTH_H
#define FOURTH_H

#include <QMainWindow>

namespace Ui {
class fourth;
}

class fourth : public QMainWindow
{
    Q_OBJECT

public:
    explicit fourth(QWidget *parent = 0);
    ~fourth();

private slots:
    void on_pushButton_clicked();

private:
    Ui::fourth *ui;
};

#endif // FOURTH_H
