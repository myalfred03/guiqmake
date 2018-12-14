#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QObject>
#include <QProcess>

class launcher : public QObject
{
    Q_OBJECT
public:
    launcher(QObject *parent = nullptr);

    Q_INVOKABLE void launch();
    Q_INVOKABLE void launch2();
    Q_INVOKABLE void launch3();


private:
    QProcess *process_rvizglabre;
    QProcess *process_robot_editor;
    QProcess *process_interpreter_xyz;
    QProcess *process_interpreter_gui;


};

#endif // LAUNCHER_H
