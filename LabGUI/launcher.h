#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QObject>
#include <QProcess>

class launcher : public QObject
{
    Q_OBJECT
public:
    explicit launcher(QObject *parent = nullptr);

    Q_INVOKABLE void launch();
    Q_INVOKABLE void launch2();

private:
    QProcess *m_process;
    QProcess *m_process2;

};

#endif // LAUNCHER_H
