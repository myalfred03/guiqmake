/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *tab_2;
    QGroupBox *gridGroupBox;
    QFrame *line_7;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QFrame *line_4;
    QDial *dial1DOF;
    QFrame *line_20;
    QDoubleSpinBox *spinBox1DOF;
    QLabel *label_12;
    QFrame *line_10;
    QGridLayout *gridLayout_9;
    QFrame *line_9;
    QLabel *label_13;
    QDial *dial2DOF;
    QDoubleSpinBox *spinBox2DOF;
    QFrame *line_11;
    QFrame *line_12;
    QGridLayout *gridLayout_10;
    QDoubleSpinBox *spinBox3DOF;
    QFrame *line_13;
    QLabel *label_14;
    QDial *dial3DOF;
    QFrame *line_14;
    QFrame *line_5;
    QGroupBox *gridGroupBox2;
    QGridLayout *gridLayout_14;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QLabel *label_11;
    QLineEdit *lineEdit_3;
    QDial *dial4DOF;
    QFrame *line_6;
    QFrame *line_15;
    QDoubleSpinBox *spinBox4DOF;
    QLabel *label_20;
    QFrame *line_16;
    QDial *dial5DOF;
    QFrame *line_17;
    QDoubleSpinBox *spinBox5DOF;
    QLabel *label_21;
    QFrame *line_18;
    QFrame *line_8;
    QDial *dial6DOF;
    QFrame *line_19;
    QDoubleSpinBox *spinBox6DOF;
    QLabel *label_22;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QToolBox *toolBox;
    QWidget *page;
    QGroupBox *gridGroupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox2DOFI;
    QCheckBox *checkBox3DOFI;
    QCheckBox *checkBox4DOFI;
    QCheckBox *checkBox5DOFI;
    QCheckBox *checkBox6DOFI;
    QWidget *page_2;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox3DOFs;
    QCheckBox *checkBox4DOFs;
    QCheckBox *checkBox5DOFs;
    QCheckBox *checkBox6DOFs;
    QCheckBox *checkBox2DOFs;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox;
    QLabel *label_2;
    QSlider *xSlider;
    QDoubleSpinBox *xBox;
    QLabel *label_4;
    QSlider *ySlider;
    QDoubleSpinBox *yBox;
    QLabel *label_19;
    QSlider *zSlider;
    QDoubleSpinBox *zBox;
    QLabel *label_16;
    QSlider *yawSlider;
    QDoubleSpinBox *yawBox;
    QLabel *label_17;
    QSlider *pitchSlider;
    QDoubleSpinBox *pitchBox;
    QLabel *label_18;
    QSlider *rollSlider;
    QDoubleSpinBox *rollBox;
    QWidget *tab_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1327, 759);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_11 = new QGridLayout(centralwidget);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        QFont font1;
        font1.setFamily(QStringLiteral("Abyssinica SIL"));
        font1.setPointSize(16);
        line->setFont(font1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 2, 3);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 1, 2, 2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setSizeIncrement(QSize(200, 200));
        tabWidget->setMouseTracking(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 370, 80, 22));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 521, 301));
        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QStringLiteral("INICIO"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridGroupBox = new QGroupBox(tab_2);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        gridGroupBox->setGeometry(QRect(30, 300, 430, 839));
        line_7 = new QFrame(gridGroupBox);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(17, 479, 16, 16));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        gridLayout_13 = new QGridLayout(gridGroupBox);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        line_4 = new QFrame(gridGroupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_12->addWidget(line_4, 2, 4, 1, 1);

        dial1DOF = new QDial(gridGroupBox);
        dial1DOF->setObjectName(QStringLiteral("dial1DOF"));
        dial1DOF->setTracking(true);
        dial1DOF->setWrapping(false);
        dial1DOF->setNotchesVisible(true);

        gridLayout_12->addWidget(dial1DOF, 0, 1, 2, 1);

        line_20 = new QFrame(gridGroupBox);
        line_20->setObjectName(QStringLiteral("line_20"));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);

        gridLayout_12->addWidget(line_20, 2, 1, 1, 1);

        spinBox1DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox1DOF->setObjectName(QStringLiteral("spinBox1DOF"));

        gridLayout_12->addWidget(spinBox1DOF, 0, 4, 1, 1);

        label_12 = new QLabel(gridGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("FreeMono"));
        font2.setPointSize(14);
        label_12->setFont(font2);

        gridLayout_12->addWidget(label_12, 1, 0, 1, 1);

        line_10 = new QFrame(gridGroupBox);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_12->addWidget(line_10, 0, 2, 2, 2);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        line_9 = new QFrame(gridGroupBox);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_9, 0, 2, 2, 2);

        label_13 = new QLabel(gridGroupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16, 16));
        label_13->setFont(font2);

        gridLayout_9->addWidget(label_13, 1, 0, 1, 1);

        dial2DOF = new QDial(gridGroupBox);
        dial2DOF->setObjectName(QStringLiteral("dial2DOF"));
        dial2DOF->setNotchesVisible(true);

        gridLayout_9->addWidget(dial2DOF, 0, 1, 2, 1);

        spinBox2DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox2DOF->setObjectName(QStringLiteral("spinBox2DOF"));

        gridLayout_9->addWidget(spinBox2DOF, 0, 4, 1, 1);

        line_11 = new QFrame(gridGroupBox);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_11, 2, 1, 1, 1);

        line_12 = new QFrame(gridGroupBox);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_12, 2, 4, 1, 1);


        gridLayout_13->addLayout(gridLayout_9, 1, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        spinBox3DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox3DOF->setObjectName(QStringLiteral("spinBox3DOF"));

        gridLayout_10->addWidget(spinBox3DOF, 1, 3, 1, 1);

        line_13 = new QFrame(gridGroupBox);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_13, 2, 1, 1, 1);

        label_14 = new QLabel(gridGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(16, 16));
        label_14->setFont(font2);

        gridLayout_10->addWidget(label_14, 1, 0, 1, 1);

        dial3DOF = new QDial(gridGroupBox);
        dial3DOF->setObjectName(QStringLiteral("dial3DOF"));
        dial3DOF->setNotchesVisible(true);

        gridLayout_10->addWidget(dial3DOF, 0, 1, 2, 1);

        line_14 = new QFrame(gridGroupBox);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_14, 2, 3, 1, 1);

        line_5 = new QFrame(gridGroupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setMaximumSize(QSize(16777215, 16777215));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_5, 0, 2, 2, 1);


        gridLayout_13->addLayout(gridLayout_10, 2, 0, 1, 1);

        gridGroupBox2 = new QGroupBox(gridGroupBox);
        gridGroupBox2->setObjectName(QStringLiteral("gridGroupBox2"));
        gridLayout_14 = new QGridLayout(gridGroupBox2);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_5 = new QLabel(gridGroupBox2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);

        gridLayout_14->addWidget(label_5, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridGroupBox2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_14->addWidget(lineEdit, 0, 1, 1, 1);

        label_10 = new QLabel(gridGroupBox2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);

        gridLayout_14->addWidget(label_10, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridGroupBox2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_14->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_11 = new QLabel(gridGroupBox2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font3);

        gridLayout_14->addWidget(label_11, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridGroupBox2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_14->addWidget(lineEdit_3, 2, 1, 1, 1);


        gridLayout_13->addWidget(gridGroupBox2, 2, 1, 1, 1);

        dial4DOF = new QDial(gridGroupBox);
        dial4DOF->setObjectName(QStringLiteral("dial4DOF"));
        dial4DOF->setNotchesVisible(true);

        gridLayout_13->addWidget(dial4DOF, 3, 0, 1, 1);

        line_6 = new QFrame(gridGroupBox);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_6, 4, 0, 1, 1);

        line_15 = new QFrame(gridGroupBox);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_15, 5, 0, 1, 1);

        spinBox4DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox4DOF->setObjectName(QStringLiteral("spinBox4DOF"));

        gridLayout_13->addWidget(spinBox4DOF, 6, 0, 1, 1);

        label_20 = new QLabel(gridGroupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMaximumSize(QSize(16, 16));
        label_20->setFont(font2);

        gridLayout_13->addWidget(label_20, 7, 0, 1, 1);

        line_16 = new QFrame(gridGroupBox);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_16, 8, 0, 1, 1);

        dial5DOF = new QDial(gridGroupBox);
        dial5DOF->setObjectName(QStringLiteral("dial5DOF"));
        dial5DOF->setNotchesVisible(true);

        gridLayout_13->addWidget(dial5DOF, 9, 0, 1, 1);

        line_17 = new QFrame(gridGroupBox);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_17, 10, 0, 1, 1);

        spinBox5DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox5DOF->setObjectName(QStringLiteral("spinBox5DOF"));

        gridLayout_13->addWidget(spinBox5DOF, 11, 0, 1, 1);

        label_21 = new QLabel(gridGroupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(16, 16));
        label_21->setFont(font2);

        gridLayout_13->addWidget(label_21, 12, 0, 1, 1);

        line_18 = new QFrame(gridGroupBox);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_18, 13, 0, 1, 1);

        line_8 = new QFrame(gridGroupBox);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_8, 14, 0, 1, 1);

        dial6DOF = new QDial(gridGroupBox);
        dial6DOF->setObjectName(QStringLiteral("dial6DOF"));
        dial6DOF->setNotchTarget(3.7);
        dial6DOF->setNotchesVisible(true);

        gridLayout_13->addWidget(dial6DOF, 15, 0, 1, 1);

        line_19 = new QFrame(gridGroupBox);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line_19, 16, 0, 1, 1);

        spinBox6DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox6DOF->setObjectName(QStringLiteral("spinBox6DOF"));

        gridLayout_13->addWidget(spinBox6DOF, 17, 0, 1, 1);

        label_22 = new QLabel(gridGroupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMaximumSize(QSize(16, 16));
        label_22->setFont(font2);

        gridLayout_13->addWidget(label_22, 18, 0, 1, 1);

        line_17->raise();
        dial6DOF->raise();
        line_16->raise();
        line_19->raise();
        spinBox5DOF->raise();
        line_8->raise();
        dial5DOF->raise();
        line_7->raise();
        label_20->raise();
        spinBox6DOF->raise();
        line_15->raise();
        line_6->raise();
        line_18->raise();
        label_22->raise();
        spinBox4DOF->raise();
        label_21->raise();
        dial4DOF->raise();
        gridGroupBox2->raise();
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 411, 281));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        label_7->setFont(font4);

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        label_6->setFont(font5);
        label_6->setTextFormat(Qt::RichText);
        label_6->setWordWrap(true);

        gridLayout_8->addWidget(label_6, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_8->addWidget(pushButton_3, 2, 0, 1, 1);

        toolBox = new QToolBox(gridLayoutWidget_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 409, 63));
        gridGroupBox_3 = new QGroupBox(page);
        gridGroupBox_3->setObjectName(QStringLiteral("gridGroupBox_3"));
        gridGroupBox_3->setGeometry(QRect(0, 0, 561, 61));
        gridLayout_3 = new QGridLayout(gridGroupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkBox2DOFI = new QCheckBox(gridGroupBox_3);
        checkBox2DOFI->setObjectName(QStringLiteral("checkBox2DOFI"));

        gridLayout_3->addWidget(checkBox2DOFI, 0, 0, 1, 1);

        checkBox3DOFI = new QCheckBox(gridGroupBox_3);
        checkBox3DOFI->setObjectName(QStringLiteral("checkBox3DOFI"));

        gridLayout_3->addWidget(checkBox3DOFI, 0, 1, 1, 1);

        checkBox4DOFI = new QCheckBox(gridGroupBox_3);
        checkBox4DOFI->setObjectName(QStringLiteral("checkBox4DOFI"));

        gridLayout_3->addWidget(checkBox4DOFI, 0, 2, 1, 1);

        checkBox5DOFI = new QCheckBox(gridGroupBox_3);
        checkBox5DOFI->setObjectName(QStringLiteral("checkBox5DOFI"));

        gridLayout_3->addWidget(checkBox5DOFI, 0, 3, 1, 1);

        checkBox6DOFI = new QCheckBox(gridGroupBox_3);
        checkBox6DOFI->setObjectName(QStringLiteral("checkBox6DOFI"));

        gridLayout_3->addWidget(checkBox6DOFI, 0, 4, 1, 1);

        toolBox->addItem(page, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 100, 30));
        gridGroupBox_2 = new QGroupBox(page_2);
        gridGroupBox_2->setObjectName(QStringLiteral("gridGroupBox_2"));
        gridGroupBox_2->setGeometry(QRect(0, 0, 551, 61));
        gridLayout_4 = new QGridLayout(gridGroupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        checkBox3DOFs = new QCheckBox(gridGroupBox_2);
        checkBox3DOFs->setObjectName(QStringLiteral("checkBox3DOFs"));

        gridLayout_4->addWidget(checkBox3DOFs, 1, 1, 1, 1);

        checkBox4DOFs = new QCheckBox(gridGroupBox_2);
        checkBox4DOFs->setObjectName(QStringLiteral("checkBox4DOFs"));

        gridLayout_4->addWidget(checkBox4DOFs, 1, 2, 1, 1);

        checkBox5DOFs = new QCheckBox(gridGroupBox_2);
        checkBox5DOFs->setObjectName(QStringLiteral("checkBox5DOFs"));

        gridLayout_4->addWidget(checkBox5DOFs, 1, 3, 1, 1);

        checkBox6DOFs = new QCheckBox(gridGroupBox_2);
        checkBox6DOFs->setObjectName(QStringLiteral("checkBox6DOFs"));

        gridLayout_4->addWidget(checkBox6DOFs, 1, 4, 1, 1);

        checkBox2DOFs = new QCheckBox(gridGroupBox_2);
        checkBox2DOFs->setObjectName(QStringLiteral("checkBox2DOFs"));

        gridLayout_4->addWidget(checkBox2DOFs, 1, 0, 1, 1);

        toolBox->addItem(page_2, QStringLiteral("Page 2"));

        gridLayout_8->addWidget(toolBox, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_6->addWidget(pushButton_2, 1, 0, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font4);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label_9->setFont(font6);
        label_9->setWordWrap(true);

        gridLayout_6->addWidget(label_9, 3, 0, 1, 1);

        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_5->addWidget(checkBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        xSlider = new QSlider(groupBox);
        xSlider->setObjectName(QStringLiteral("xSlider"));
        xSlider->setMinimum(-100);
        xSlider->setMaximum(100);
        xSlider->setSingleStep(10);
        xSlider->setOrientation(Qt::Horizontal);
        xSlider->setTickPosition(QSlider::TicksAbove);
        xSlider->setTickInterval(5);

        gridLayout_5->addWidget(xSlider, 1, 1, 1, 1);

        xBox = new QDoubleSpinBox(groupBox);
        xBox->setObjectName(QStringLiteral("xBox"));
        xBox->setMinimumSize(QSize(80, 0));
        xBox->setDecimals(2);
        xBox->setMinimum(-100);
        xBox->setMaximum(100);
        xBox->setSingleStep(1);

        gridLayout_5->addWidget(xBox, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 2, 0, 1, 1);

        ySlider = new QSlider(groupBox);
        ySlider->setObjectName(QStringLiteral("ySlider"));
        ySlider->setMinimum(-100);
        ySlider->setMaximum(100);
        ySlider->setSingleStep(10);
        ySlider->setOrientation(Qt::Horizontal);
        ySlider->setTickPosition(QSlider::TicksAbove);
        ySlider->setTickInterval(5);

        gridLayout_5->addWidget(ySlider, 2, 1, 1, 1);

        yBox = new QDoubleSpinBox(groupBox);
        yBox->setObjectName(QStringLiteral("yBox"));
        yBox->setMinimumSize(QSize(80, 0));
        yBox->setDecimals(2);
        yBox->setMinimum(-100);
        yBox->setMaximum(100);
        yBox->setSingleStep(1);

        gridLayout_5->addWidget(yBox, 2, 2, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_5->addWidget(label_19, 3, 0, 1, 1);

        zSlider = new QSlider(groupBox);
        zSlider->setObjectName(QStringLiteral("zSlider"));
        zSlider->setMinimum(-100);
        zSlider->setMaximum(100);
        zSlider->setSingleStep(10);
        zSlider->setOrientation(Qt::Horizontal);
        zSlider->setInvertedAppearance(false);
        zSlider->setTickPosition(QSlider::TicksAbove);
        zSlider->setTickInterval(5);

        gridLayout_5->addWidget(zSlider, 3, 1, 1, 1);

        zBox = new QDoubleSpinBox(groupBox);
        zBox->setObjectName(QStringLiteral("zBox"));
        zBox->setMinimumSize(QSize(80, 0));
        zBox->setDecimals(2);
        zBox->setMinimum(-100);
        zBox->setMaximum(100);
        zBox->setSingleStep(1);

        gridLayout_5->addWidget(zBox, 3, 2, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_5->addWidget(label_16, 4, 0, 1, 1);

        yawSlider = new QSlider(groupBox);
        yawSlider->setObjectName(QStringLiteral("yawSlider"));
        yawSlider->setMinimum(-180);
        yawSlider->setMaximum(180);
        yawSlider->setSingleStep(5);
        yawSlider->setPageStep(5);
        yawSlider->setOrientation(Qt::Horizontal);
        yawSlider->setTickPosition(QSlider::TicksAbove);
        yawSlider->setTickInterval(5);

        gridLayout_5->addWidget(yawSlider, 4, 1, 1, 1);

        yawBox = new QDoubleSpinBox(groupBox);
        yawBox->setObjectName(QStringLiteral("yawBox"));
        yawBox->setMinimumSize(QSize(80, 0));
        yawBox->setDecimals(2);
        yawBox->setMinimum(-1.8e+8);
        yawBox->setMaximum(180);
        yawBox->setSingleStep(1);

        gridLayout_5->addWidget(yawBox, 4, 2, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_5->addWidget(label_17, 5, 0, 1, 1);

        pitchSlider = new QSlider(groupBox);
        pitchSlider->setObjectName(QStringLiteral("pitchSlider"));
        pitchSlider->setMinimum(-180);
        pitchSlider->setMaximum(180);
        pitchSlider->setSingleStep(5);
        pitchSlider->setPageStep(5);
        pitchSlider->setOrientation(Qt::Horizontal);
        pitchSlider->setTickPosition(QSlider::TicksAbove);
        pitchSlider->setTickInterval(5);

        gridLayout_5->addWidget(pitchSlider, 5, 1, 1, 1);

        pitchBox = new QDoubleSpinBox(groupBox);
        pitchBox->setObjectName(QStringLiteral("pitchBox"));
        pitchBox->setMinimumSize(QSize(80, 0));
        pitchBox->setDecimals(2);
        pitchBox->setMinimum(-180);
        pitchBox->setMaximum(180);
        pitchBox->setSingleStep(1);

        gridLayout_5->addWidget(pitchBox, 5, 2, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_5->addWidget(label_18, 6, 0, 1, 1);

        rollSlider = new QSlider(groupBox);
        rollSlider->setObjectName(QStringLiteral("rollSlider"));
        rollSlider->setMinimum(-180);
        rollSlider->setMaximum(180);
        rollSlider->setSingleStep(5);
        rollSlider->setPageStep(5);
        rollSlider->setOrientation(Qt::Horizontal);
        rollSlider->setTickPosition(QSlider::TicksAbove);
        rollSlider->setTickInterval(5);

        gridLayout_5->addWidget(rollSlider, 6, 1, 1, 1);

        rollBox = new QDoubleSpinBox(groupBox);
        rollBox->setObjectName(QStringLiteral("rollBox"));
        rollBox->setMinimumSize(QSize(80, 0));
        rollBox->setDecimals(2);
        rollBox->setMinimum(-180);
        rollBox->setMaximum(180);
        rollBox->setSingleStep(1);

        gridLayout_5->addWidget(rollBox, 6, 2, 1, 1);


        gridLayout_6->addWidget(groupBox, 4, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_2 = new QGridLayout(tab_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 0, 0, 1, 1);

        tableWidget = new QTableWidget(tab_4);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 3, 0, 1, 1);

        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout->addWidget(mdiArea, 3, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1327, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "LABORATORIO VIRTUAL ROB\303\223TICA B\303\201SICA", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        label_3->setText(QString());
        gridGroupBox->setTitle(QApplication::translate("MainWindow", "DOF", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Cinematica Directa", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "La cinem\303\241tica es la ciencia que trata el movimiento sin considerar las fuerzas que lo ocasionan. Dentro de la cinem\303\241tica se estudian la posici\303\263n, velocidad, aceleraci\303\263n y todas las derivadas de mayor orden de las variables de posici\303\263n. ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "+TEORIA", Q_NULLPTR));
        gridGroupBox_3->setTitle(QApplication::translate("MainWindow", "ROBOTS INDUSTRIALES", Q_NULLPTR));
        checkBox2DOFI->setText(QApplication::translate("MainWindow", "ABB IRB5400", Q_NULLPTR));
        checkBox3DOFI->setText(QApplication::translate("MainWindow", "MM BMDA3", Q_NULLPTR));
        checkBox4DOFI->setText(QApplication::translate("MainWindow", "KK KR210", Q_NULLPTR));
        checkBox5DOFI->setText(QApplication::translate("MainWindow", "MM MH5", Q_NULLPTR));
        checkBox6DOFI->setText(QApplication::translate("MainWindow", "ABB IRB120", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Page 1", Q_NULLPTR));
        gridGroupBox_2->setTitle(QApplication::translate("MainWindow", "SIMPLE ROBOT", Q_NULLPTR));
        checkBox3DOFs->setText(QApplication::translate("MainWindow", "3DOF", Q_NULLPTR));
        checkBox4DOFs->setText(QApplication::translate("MainWindow", "4DOF", Q_NULLPTR));
        checkBox5DOFs->setText(QApplication::translate("MainWindow", "5DOF", Q_NULLPTR));
        checkBox6DOFs->setText(QApplication::translate("MainWindow", "6DOF", Q_NULLPTR));
        checkBox2DOFs->setText(QApplication::translate("MainWindow", "2DOF", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Page 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "CINEMATICA DIRECTA", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "+TEORIA CI", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Cinematica Inversa", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "El problema se plantea de la siguiente manera: dada la posici\303\263n y orientaci\303\263n del efector final del manipulador, se calcula todos los conjuntos posibles de \303\241ngulos articulares que podr\303\255an utilizarse para obtener esta posici\303\263n y orientaci\303\263n dadas. Este es un problema fundamental en el uso pr\303\241ctico de los manipuladores. ", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "TCP", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "EJECUTAR", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Yaw", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Pitch", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Roll", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "CINEMATICA INVERSA", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "+TEORIA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "LINK", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "ai", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "a1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "alpha i", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "theta i", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "joint1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "joint2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "joint3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "joint4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "joint6", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "DENAVITH HATEMEBERG", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
