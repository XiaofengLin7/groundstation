/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *uav_x;
    QLabel *uav_y;
    QLabel *uav_z;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *text_uav1_x;
    QTextBrowser *text_uav1_y;
    QTextBrowser *text_uav1_z;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *uav_vx;
    QLabel *uav_vy;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *text_uav1_vx;
    QTextBrowser *text_uav1_vy;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QStringLiteral("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(1223, 878);
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        texttest = new QTextBrowser(centralWidget);
        texttest->setObjectName(QStringLiteral("texttest"));
        texttest->setGeometry(QRect(920, 160, 191, 81));
        texttest->setReadOnly(false);
        pushButton_send = new QPushButton(centralWidget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(1020, 60, 93, 28));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 601, 101));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_serial_port_name = new QLabel(layoutWidget);
        label_serial_port_name->setObjectName(QStringLiteral("label_serial_port_name"));

        horizontalLayout->addWidget(label_serial_port_name);

        comboBox_serial_port_name = new QComboBox(layoutWidget);
        comboBox_serial_port_name->setObjectName(QStringLiteral("comboBox_serial_port_name"));

        horizontalLayout->addWidget(comboBox_serial_port_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_baud_rate = new QLabel(layoutWidget);
        label_baud_rate->setObjectName(QStringLiteral("label_baud_rate"));

        horizontalLayout_2->addWidget(label_baud_rate);

        comboBox_baud_rate = new QComboBox(layoutWidget);
        comboBox_baud_rate->setObjectName(QStringLiteral("comboBox_baud_rate"));

        horizontalLayout_2->addWidget(comboBox_baud_rate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        PushButton_serial_port_open = new QPushButton(layoutWidget);
        PushButton_serial_port_open->setObjectName(QStringLiteral("PushButton_serial_port_open"));
        PushButton_serial_port_open->setCheckable(false);

        horizontalLayout_3->addWidget(PushButton_serial_port_open);

        pushButton_serial_port_close = new QPushButton(layoutWidget);
        pushButton_serial_port_close->setObjectName(QStringLiteral("pushButton_serial_port_close"));
        pushButton_serial_port_close->setEnabled(false);

        horizontalLayout_3->addWidget(pushButton_serial_port_close);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_save = new QPushButton(layoutWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        verticalLayout_2->addWidget(pushButton_save);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        verticalLayout_2->addWidget(pushButton_clear);

        checkBox_hex = new QCheckBox(layoutWidget);
        checkBox_hex->setObjectName(QStringLiteral("checkBox_hex"));
        checkBox_hex->setChecked(false);

        verticalLayout_2->addWidget(checkBox_hex);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        text_EXP_GPS_Latitude = new QTextBrowser(layoutWidget);
        text_EXP_GPS_Latitude->setObjectName(QStringLiteral("text_EXP_GPS_Latitude"));
        text_EXP_GPS_Latitude->setReadOnly(false);

        verticalLayout_5->addWidget(text_EXP_GPS_Latitude);

        text_EXP_GPS_Longitude = new QTextBrowser(layoutWidget);
        text_EXP_GPS_Longitude->setObjectName(QStringLiteral("text_EXP_GPS_Longitude"));
        text_EXP_GPS_Longitude->setReadOnly(false);

        verticalLayout_5->addWidget(text_EXP_GPS_Longitude);

        text_Exp_GPS_altitude = new QTextBrowser(layoutWidget);
        text_Exp_GPS_altitude->setObjectName(QStringLiteral("text_Exp_GPS_altitude"));
        text_Exp_GPS_altitude->setReadOnly(false);

        verticalLayout_5->addWidget(text_Exp_GPS_altitude);


        horizontalLayout_4->addLayout(verticalLayout_5);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 120, 601, 611));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        text_rec = new QTextBrowser(horizontalLayoutWidget_2);
        text_rec->setObjectName(QStringLiteral("text_rec"));
        text_rec->setReadOnly(true);

        horizontalLayout_6->addWidget(text_rec);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(850, 520, 281, 211));
        textEdit->setReadOnly(true);
        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(620, 10, 391, 101));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        uav_x = new QLabel(horizontalLayoutWidget_5);
        uav_x->setObjectName(QStringLiteral("uav_x"));

        verticalLayout_6->addWidget(uav_x);

        uav_y = new QLabel(horizontalLayoutWidget_5);
        uav_y->setObjectName(QStringLiteral("uav_y"));

        verticalLayout_6->addWidget(uav_y);

        uav_z = new QLabel(horizontalLayoutWidget_5);
        uav_z->setObjectName(QStringLiteral("uav_z"));

        verticalLayout_6->addWidget(uav_z);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        text_uav1_x = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_x->setObjectName(QStringLiteral("text_uav1_x"));

        verticalLayout_3->addWidget(text_uav1_x);

        text_uav1_y = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_y->setObjectName(QStringLiteral("text_uav1_y"));

        verticalLayout_3->addWidget(text_uav1_y);

        text_uav1_z = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_z->setObjectName(QStringLiteral("text_uav1_z"));

        verticalLayout_3->addWidget(text_uav1_z);


        horizontalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        uav_vx = new QLabel(horizontalLayoutWidget_5);
        uav_vx->setObjectName(QStringLiteral("uav_vx"));

        verticalLayout_10->addWidget(uav_vx);

        uav_vy = new QLabel(horizontalLayoutWidget_5);
        uav_vy->setObjectName(QStringLiteral("uav_vy"));

        verticalLayout_10->addWidget(uav_vy);


        horizontalLayout_7->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        text_uav1_vx = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_vx->setObjectName(QStringLiteral("text_uav1_vx"));

        verticalLayout_11->addWidget(text_uav1_vx);

        text_uav1_vy = new QTextBrowser(horizontalLayoutWidget_5);
        text_uav1_vy->setObjectName(QStringLiteral("text_uav1_vy"));

        verticalLayout_11->addWidget(text_uav1_vy);


        horizontalLayout_7->addLayout(verticalLayout_11);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        QtGuiApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1223, 26));
        QtGuiApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", Q_NULLPTR));
        texttest->setHtml(QApplication::translate("QtGuiApplication1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("QtGuiApplication1Class", "send", Q_NULLPTR));
        label_serial_port_name->setText(QApplication::translate("QtGuiApplication1Class", "Serial Port:", Q_NULLPTR));
        comboBox_serial_port_name->clear();
        comboBox_serial_port_name->insertItems(0, QStringList()
         << QApplication::translate("QtGuiApplication1Class", "COM1", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM2", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM3", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM4", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM5", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM6", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM7", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM8", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM9", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM10", Q_NULLPTR)
        );
        label_baud_rate->setText(QApplication::translate("QtGuiApplication1Class", "Baud rate:", Q_NULLPTR));
        comboBox_baud_rate->clear();
        comboBox_baud_rate->insertItems(0, QStringList()
         << QApplication::translate("QtGuiApplication1Class", "9600", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "56000", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "57600", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "115200", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "128000", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "256000", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "460800", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "921600", Q_NULLPTR)
        );
        PushButton_serial_port_open->setText(QApplication::translate("QtGuiApplication1Class", "Open", Q_NULLPTR));
        pushButton_serial_port_close->setText(QApplication::translate("QtGuiApplication1Class", "close", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("QtGuiApplication1Class", "save data", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("QtGuiApplication1Class", "clear data", Q_NULLPTR));
        checkBox_hex->setText(QApplication::translate("QtGuiApplication1Class", "Hex_show", Q_NULLPTR));
        label->setText(QApplication::translate("QtGuiApplication1Class", " GPS_Latitude:", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtGuiApplication1Class", "GPS_Longitude:", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtGuiApplication1Class", " GPS_Altitude:", Q_NULLPTR));
        uav_x->setText(QApplication::translate("QtGuiApplication1Class", "uav_x", Q_NULLPTR));
        uav_y->setText(QApplication::translate("QtGuiApplication1Class", "uav_y", Q_NULLPTR));
        uav_z->setText(QApplication::translate("QtGuiApplication1Class", "uav_z", Q_NULLPTR));
        uav_vx->setText(QApplication::translate("QtGuiApplication1Class", "uav_vx", Q_NULLPTR));
        uav_vy->setText(QApplication::translate("QtGuiApplication1Class", "uav_vy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
