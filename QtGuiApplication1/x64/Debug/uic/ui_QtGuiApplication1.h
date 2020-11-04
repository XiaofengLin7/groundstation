/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QWidget *centralWidget;
    QTextBrowser *texttest;
    QPushButton *pushButton_send;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_serial_port_name;
    QComboBox *comboBox_serial_port_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_baud_rate;
    QComboBox *comboBox_baud_rate;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PushButton_serial_port_open;
    QPushButton *pushButton_serial_port_close;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_clear;
    QCheckBox *checkBox_hex;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *text_EXP_GPS_Latitude;
    QTextBrowser *text_EXP_GPS_Longitude;
    QTextBrowser *text_Exp_GPS_altitude;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *text_rec;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *uav1_x;
    QLabel *uav1_y;
    QLabel *uav_z;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *text_uav1_x;
    QTextBrowser *text_uav1_y;
    QTextBrowser *text_uav1_z;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *uav1_vx;
    QLabel *uav1_vy;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *text_uav1_vx;
    QTextBrowser *text_uav1_vy;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_7;
    QLabel *uav2_x;
    QLabel *uav2_y;
    QLabel *uav2_z;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *text_uav2_x;
    QTextBrowser *text_uav2_y;
    QTextBrowser *text_uav2_z;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_12;
    QLabel *uav2_vx;
    QLabel *uav2_vy;
    QVBoxLayout *verticalLayout_13;
    QTextBrowser *text_uav2_vx;
    QTextBrowser *text_uav2_vy;
    QPushButton *pushButton_takeoff;
    QPushButton *pushButton_start;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_land;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_longitude;
    QLabel *label_latitude;
    QLabel *label_longitude;
    QTextEdit *textEdit_latitude;
    QLabel *label_altitude;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_send_org_loc;
    QTextEdit *textEdit_altitude;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QString::fromUtf8("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(1223, 878);
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        texttest = new QTextBrowser(centralWidget);
        texttest->setObjectName(QString::fromUtf8("texttest"));
        texttest->setGeometry(QRect(900, 420, 191, 81));
        texttest->setReadOnly(false);
        pushButton_send = new QPushButton(centralWidget);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setGeometry(QRect(1020, 60, 93, 28));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 601, 279));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_serial_port_name = new QLabel(layoutWidget);
        label_serial_port_name->setObjectName(QString::fromUtf8("label_serial_port_name"));

        horizontalLayout->addWidget(label_serial_port_name);

        comboBox_serial_port_name = new QComboBox(layoutWidget);
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->addItem(QString());
        comboBox_serial_port_name->setObjectName(QString::fromUtf8("comboBox_serial_port_name"));

        horizontalLayout->addWidget(comboBox_serial_port_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_baud_rate = new QLabel(layoutWidget);
        label_baud_rate->setObjectName(QString::fromUtf8("label_baud_rate"));

        horizontalLayout_2->addWidget(label_baud_rate);

        comboBox_baud_rate = new QComboBox(layoutWidget);
        comboBox_baud_rate->addItem(QString());
        comboBox_baud_rate->addItem(QString());
        comboBox_baud_rate->addItem(QString());
        comboBox_baud_rate->addItem(QString());
        comboBox_baud_rate->addItem(QString());
        comboBox_baud_rate->addItem(QString());
        comboBox_baud_rate->addItem(QString());
        comboBox_baud_rate->addItem(QString());
        comboBox_baud_rate->setObjectName(QString::fromUtf8("comboBox_baud_rate"));

        horizontalLayout_2->addWidget(comboBox_baud_rate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        PushButton_serial_port_open = new QPushButton(layoutWidget);
        PushButton_serial_port_open->setObjectName(QString::fromUtf8("PushButton_serial_port_open"));
        PushButton_serial_port_open->setCheckable(false);

        horizontalLayout_3->addWidget(PushButton_serial_port_open);

        pushButton_serial_port_close = new QPushButton(layoutWidget);
        pushButton_serial_port_close->setObjectName(QString::fromUtf8("pushButton_serial_port_close"));
        pushButton_serial_port_close->setEnabled(false);

        horizontalLayout_3->addWidget(pushButton_serial_port_close);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_save = new QPushButton(layoutWidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        verticalLayout_2->addWidget(pushButton_save);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        verticalLayout_2->addWidget(pushButton_clear);

        checkBox_hex = new QCheckBox(layoutWidget);
        checkBox_hex->setObjectName(QString::fromUtf8("checkBox_hex"));
        checkBox_hex->setChecked(false);

        verticalLayout_2->addWidget(checkBox_hex);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        text_EXP_GPS_Latitude = new QTextBrowser(layoutWidget);
        text_EXP_GPS_Latitude->setObjectName(QString::fromUtf8("text_EXP_GPS_Latitude"));
        text_EXP_GPS_Latitude->setReadOnly(false);

        verticalLayout_5->addWidget(text_EXP_GPS_Latitude);

        text_EXP_GPS_Longitude = new QTextBrowser(layoutWidget);
        text_EXP_GPS_Longitude->setObjectName(QString::fromUtf8("text_EXP_GPS_Longitude"));
        text_EXP_GPS_Longitude->setReadOnly(false);

        verticalLayout_5->addWidget(text_EXP_GPS_Longitude);

        text_Exp_GPS_altitude = new QTextBrowser(layoutWidget);
        text_Exp_GPS_altitude->setObjectName(QString::fromUtf8("text_Exp_GPS_altitude"));
        text_Exp_GPS_altitude->setReadOnly(false);

        verticalLayout_5->addWidget(text_Exp_GPS_altitude);


        horizontalLayout_4->addLayout(verticalLayout_5);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 330, 601, 611));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        text_rec = new QTextBrowser(horizontalLayoutWidget_2);
        text_rec->setObjectName(QString::fromUtf8("text_rec"));
        text_rec->setReadOnly(true);

        horizontalLayout_6->addWidget(text_rec);

        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(620, 10, 391, 281));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        uav1_x = new QLabel(horizontalLayoutWidget_5);
        uav1_x->setObjectName(QString::fromUtf8("uav1_x"));

        verticalLayout_6->addWidget(uav1_x);

        uav1_y = new QLabel(horizontalLayoutWidget_5);
        uav1_y->setObjectName(QString::fromUtf8("uav1_y"));

        verticalLayout_6->addWidget(uav1_y);

        uav_z = new QLabel(horizontalLayoutWidget_5);
        uav_z->setObjectName(QString::fromUtf8("uav_z"));

        verticalLayout_6->addWidget(uav_z);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        text_uav1_x = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_x->setObjectName(QString::fromUtf8("text_uav1_x"));

        verticalLayout_3->addWidget(text_uav1_x);

        text_uav1_y = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_y->setObjectName(QString::fromUtf8("text_uav1_y"));

        verticalLayout_3->addWidget(text_uav1_y);

        text_uav1_z = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_z->setObjectName(QString::fromUtf8("text_uav1_z"));

        verticalLayout_3->addWidget(text_uav1_z);


        horizontalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        uav1_vx = new QLabel(horizontalLayoutWidget_5);
        uav1_vx->setObjectName(QString::fromUtf8("uav1_vx"));

        verticalLayout_10->addWidget(uav1_vx);

        uav1_vy = new QLabel(horizontalLayoutWidget_5);
        uav1_vy->setObjectName(QString::fromUtf8("uav1_vy"));

        verticalLayout_10->addWidget(uav1_vy);


        horizontalLayout_7->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        text_uav1_vx = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_vx->setObjectName(QString::fromUtf8("text_uav1_vx"));

        verticalLayout_11->addWidget(text_uav1_vx);

        text_uav1_vy = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_vy->setObjectName(QString::fromUtf8("text_uav1_vy"));

        verticalLayout_11->addWidget(text_uav1_vy);


        horizontalLayout_7->addLayout(verticalLayout_11);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayoutWidget_6 = new QWidget(centralWidget);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(620, 120, 391, 281));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        uav2_x = new QLabel(horizontalLayoutWidget_6);
        uav2_x->setObjectName(QString::fromUtf8("uav2_x"));

        verticalLayout_7->addWidget(uav2_x);

        uav2_y = new QLabel(horizontalLayoutWidget_6);
        uav2_y->setObjectName(QString::fromUtf8("uav2_y"));

        verticalLayout_7->addWidget(uav2_y);

        uav2_z = new QLabel(horizontalLayoutWidget_6);
        uav2_z->setObjectName(QString::fromUtf8("uav2_z"));

        verticalLayout_7->addWidget(uav2_z);


        horizontalLayout_10->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        text_uav2_x = new QTextBrowser(horizontalLayoutWidget_6);
        text_uav2_x->setObjectName(QString::fromUtf8("text_uav2_x"));

        verticalLayout_8->addWidget(text_uav2_x);

        text_uav2_y = new QTextBrowser(horizontalLayoutWidget_6);
        text_uav2_y->setObjectName(QString::fromUtf8("text_uav2_y"));

        verticalLayout_8->addWidget(text_uav2_y);

        text_uav2_z = new QTextBrowser(horizontalLayoutWidget_6);
        text_uav2_z->setObjectName(QString::fromUtf8("text_uav2_z"));

        verticalLayout_8->addWidget(text_uav2_z);


        horizontalLayout_10->addLayout(verticalLayout_8);


        horizontalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        uav2_vx = new QLabel(horizontalLayoutWidget_6);
        uav2_vx->setObjectName(QString::fromUtf8("uav2_vx"));

        verticalLayout_12->addWidget(uav2_vx);

        uav2_vy = new QLabel(horizontalLayoutWidget_6);
        uav2_vy->setObjectName(QString::fromUtf8("uav2_vy"));

        verticalLayout_12->addWidget(uav2_vy);


        horizontalLayout_11->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        text_uav2_vx = new QTextBrowser(horizontalLayoutWidget_6);
        text_uav2_vx->setObjectName(QString::fromUtf8("text_uav2_vx"));

        verticalLayout_13->addWidget(text_uav2_vx);

        text_uav2_vy = new QTextBrowser(horizontalLayoutWidget_6);
        text_uav2_vy->setObjectName(QString::fromUtf8("text_uav2_vy"));

        verticalLayout_13->addWidget(text_uav2_vy);


        horizontalLayout_11->addLayout(verticalLayout_13);


        horizontalLayout_9->addLayout(horizontalLayout_11);

        pushButton_takeoff = new QPushButton(centralWidget);
        pushButton_takeoff->setObjectName(QString::fromUtf8("pushButton_takeoff"));
        pushButton_takeoff->setGeometry(QRect(1020, 120, 93, 28));
        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(1020, 170, 93, 28));
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(1020, 230, 93, 28));
        pushButton_land = new QPushButton(centralWidget);
        pushButton_land->setObjectName(QString::fromUtf8("pushButton_land"));
        pushButton_land->setGeometry(QRect(1020, 280, 93, 28));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(660, 520, 441, 277));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_longitude = new QTextEdit(gridLayoutWidget);
        textEdit_longitude->setObjectName(QString::fromUtf8("textEdit_longitude"));

        gridLayout->addWidget(textEdit_longitude, 1, 1, 1, 1);

        label_latitude = new QLabel(gridLayoutWidget);
        label_latitude->setObjectName(QString::fromUtf8("label_latitude"));

        gridLayout->addWidget(label_latitude, 0, 0, 1, 1);

        label_longitude = new QLabel(gridLayoutWidget);
        label_longitude->setObjectName(QString::fromUtf8("label_longitude"));

        gridLayout->addWidget(label_longitude, 1, 0, 1, 1);

        textEdit_latitude = new QTextEdit(gridLayoutWidget);
        textEdit_latitude->setObjectName(QString::fromUtf8("textEdit_latitude"));

        gridLayout->addWidget(textEdit_latitude, 0, 1, 1, 1);

        label_altitude = new QLabel(gridLayoutWidget);
        label_altitude->setObjectName(QString::fromUtf8("label_altitude"));

        gridLayout->addWidget(label_altitude, 2, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));

        gridLayout->addLayout(horizontalLayout_12, 0, 2, 1, 1);

        pushButton_send_org_loc = new QPushButton(gridLayoutWidget);
        pushButton_send_org_loc->setObjectName(QString::fromUtf8("pushButton_send_org_loc"));

        gridLayout->addWidget(pushButton_send_org_loc, 1, 2, 1, 1);

        textEdit_altitude = new QTextEdit(gridLayoutWidget);
        textEdit_altitude->setObjectName(QString::fromUtf8("textEdit_altitude"));

        gridLayout->addWidget(textEdit_altitude, 2, 1, 1, 1);

        QtGuiApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1223, 26));
        QtGuiApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtGuiApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", nullptr));
        texttest->setHtml(QApplication::translate("QtGuiApplication1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_send->setText(QApplication::translate("QtGuiApplication1Class", "send", nullptr));
        label_serial_port_name->setText(QApplication::translate("QtGuiApplication1Class", "Serial Port:", nullptr));
        comboBox_serial_port_name->setItemText(0, QApplication::translate("QtGuiApplication1Class", "COM1", nullptr));
        comboBox_serial_port_name->setItemText(1, QApplication::translate("QtGuiApplication1Class", "COM2", nullptr));
        comboBox_serial_port_name->setItemText(2, QApplication::translate("QtGuiApplication1Class", "COM3", nullptr));
        comboBox_serial_port_name->setItemText(3, QApplication::translate("QtGuiApplication1Class", "COM4", nullptr));
        comboBox_serial_port_name->setItemText(4, QApplication::translate("QtGuiApplication1Class", "COM5", nullptr));
        comboBox_serial_port_name->setItemText(5, QApplication::translate("QtGuiApplication1Class", "COM6", nullptr));
        comboBox_serial_port_name->setItemText(6, QApplication::translate("QtGuiApplication1Class", "COM7", nullptr));
        comboBox_serial_port_name->setItemText(7, QApplication::translate("QtGuiApplication1Class", "COM8", nullptr));
        comboBox_serial_port_name->setItemText(8, QApplication::translate("QtGuiApplication1Class", "COM9", nullptr));
        comboBox_serial_port_name->setItemText(9, QApplication::translate("QtGuiApplication1Class", "COM10", nullptr));

        label_baud_rate->setText(QApplication::translate("QtGuiApplication1Class", "Baud rate:", nullptr));
        comboBox_baud_rate->setItemText(0, QApplication::translate("QtGuiApplication1Class", "9600", nullptr));
        comboBox_baud_rate->setItemText(1, QApplication::translate("QtGuiApplication1Class", "56000", nullptr));
        comboBox_baud_rate->setItemText(2, QApplication::translate("QtGuiApplication1Class", "57600", nullptr));
        comboBox_baud_rate->setItemText(3, QApplication::translate("QtGuiApplication1Class", "115200", nullptr));
        comboBox_baud_rate->setItemText(4, QApplication::translate("QtGuiApplication1Class", "128000", nullptr));
        comboBox_baud_rate->setItemText(5, QApplication::translate("QtGuiApplication1Class", "256000", nullptr));
        comboBox_baud_rate->setItemText(6, QApplication::translate("QtGuiApplication1Class", "460800", nullptr));
        comboBox_baud_rate->setItemText(7, QApplication::translate("QtGuiApplication1Class", "921600", nullptr));

        PushButton_serial_port_open->setText(QApplication::translate("QtGuiApplication1Class", "Open", nullptr));
        pushButton_serial_port_close->setText(QApplication::translate("QtGuiApplication1Class", "close", nullptr));
        pushButton_save->setText(QApplication::translate("QtGuiApplication1Class", "save data", nullptr));
        pushButton_clear->setText(QApplication::translate("QtGuiApplication1Class", "clear data", nullptr));
        checkBox_hex->setText(QApplication::translate("QtGuiApplication1Class", "Hex_show", nullptr));
        label->setText(QApplication::translate("QtGuiApplication1Class", " GPS_Latitude:", nullptr));
        label_2->setText(QApplication::translate("QtGuiApplication1Class", "GPS_Longitude:", nullptr));
        label_3->setText(QApplication::translate("QtGuiApplication1Class", " GPS_Altitude:", nullptr));
        uav1_x->setText(QApplication::translate("QtGuiApplication1Class", "uav1_x", nullptr));
        uav1_y->setText(QApplication::translate("QtGuiApplication1Class", "uav1_y", nullptr));
        uav_z->setText(QApplication::translate("QtGuiApplication1Class", "uav1_z", nullptr));
        uav1_vx->setText(QApplication::translate("QtGuiApplication1Class", "uav1_vx", nullptr));
        uav1_vy->setText(QApplication::translate("QtGuiApplication1Class", "uav1_vy", nullptr));
        uav2_x->setText(QApplication::translate("QtGuiApplication1Class", "uav2_x", nullptr));
        uav2_y->setText(QApplication::translate("QtGuiApplication1Class", "uav2_y", nullptr));
        uav2_z->setText(QApplication::translate("QtGuiApplication1Class", "uav2_z", nullptr));
        uav2_vx->setText(QApplication::translate("QtGuiApplication1Class", "uav2_vx", nullptr));
        uav2_vy->setText(QApplication::translate("QtGuiApplication1Class", "uav2_vy", nullptr));
        pushButton_takeoff->setText(QApplication::translate("QtGuiApplication1Class", "takeoff", nullptr));
        pushButton_start->setText(QApplication::translate("QtGuiApplication1Class", "start", nullptr));
        pushButton_exit->setText(QApplication::translate("QtGuiApplication1Class", "exit", nullptr));
        pushButton_land->setText(QApplication::translate("QtGuiApplication1Class", "land", nullptr));
        label_latitude->setText(QApplication::translate("QtGuiApplication1Class", "latitude", nullptr));
        label_longitude->setText(QApplication::translate("QtGuiApplication1Class", "longitude", nullptr));
        label_altitude->setText(QApplication::translate("QtGuiApplication1Class", "altitude", nullptr));
        pushButton_send_org_loc->setText(QApplication::translate("QtGuiApplication1Class", "send original location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
