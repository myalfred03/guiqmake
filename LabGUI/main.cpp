//#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QIcon>

//Galery
#include <QQmlContext>
#include <QSettings>
#include <QQuickStyle>

#include "launcher.h"

//Wordflow
#include <QApplication>
#include <QAction>
#include <QDebug>
#include <QMenu>
#include <QMessageBox>
#include <QQuickStyle>
#include <QQuickWindow>
#include <QSettings>
#include <QStandardPaths>
#include <QSysInfo>
#include <QSystemTrayIcon>
#include <QtQml>



int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);
    launcher launch;
    QIcon icon;
    icon.addFile(QStringLiteral(":/img/UNI-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
    app.setWindowIcon(icon);

    QSettings settings;
    QString style = QQuickStyle::name();
    if (!style.isEmpty())
        settings.setValue("style", style);
    else
        QQuickStyle::setStyle(settings.value("style").toString());

    //Not Close APP
    QApplication::setQuitOnLastWindowClosed(false);


    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("availableStyles", QQuickStyle::availableStyles());
    engine.rootContext()->setContextProperty("launcher", &launch);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QObject *root = nullptr;

    if (engine.rootObjects().isEmpty())
        return -1;
    else {
      root = engine.rootObjects().first();
      QQuickWindow *qmlWindow = qobject_cast<QQuickWindow *>(root);

      QAction *minimizeAction = new QAction(QObject::tr("Mi&nimize"), qmlWindow);
      root->connect(minimizeAction, &QAction::triggered, qmlWindow,
                    &QQuickWindow::hide);
      QAction *maximizeAction = new QAction(QObject::tr("Ma&ximize"), qmlWindow);
      root->connect(maximizeAction, &QAction::triggered, qmlWindow,
                    &QQuickWindow::showMaximized);
      QAction *restoreAction = new QAction(QObject::tr("&Restore"), qmlWindow);
      root->connect(restoreAction, &QAction::triggered, qmlWindow,
                    &QQuickWindow::showNormal);
      QAction *quitAction = new QAction(QObject::tr("&Quit"), qmlWindow);
      root->connect(quitAction, &QAction::triggered, qApp, &QApplication::quit);

      QMenu *trayIconMenu = new QMenu();
      trayIconMenu->addAction(minimizeAction);
      trayIconMenu->addAction(maximizeAction);
      trayIconMenu->addAction(restoreAction);
      trayIconMenu->addSeparator();
      trayIconMenu->addAction(quitAction);

      QSystemTrayIcon *trayIcon = new QSystemTrayIcon(root);
      trayIcon->setContextMenu(trayIconMenu);
      trayIcon->setIcon(QIcon(":/img/jointIcon.png"));
      trayIcon->show();
    }

    return app.exec();
}
