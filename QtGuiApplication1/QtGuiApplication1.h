#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include<QSerialPort>
#include<QSerialPortInfo>
#include <QByteArray>
//#include <QtWebView>
#include <QFileInfo>
#include <QDir>
#include <QWebEngineView>
#include <QWebEnginePage>
#include <QWebChannel>
//#include <QtWebSockets/qwebsocket.h>
//#include <QtWebSockets/qwebsocketserver.h>
#include <QWebSocketServer>
#include "C:\Qt\Qt5.12.9\Examples\Qt-5.12.9\webchannel\shared\websocketclientwrapper.h"
#include "C:\Qt\Qt5.12.9\Examples\Qt-5.12.9\webchannel\shared\websockettransport.h"
#include <QJsonObject>
#include <QVector>
#include <QUrl>
#include <QWebSocket>
#include <QTimer>
#include<QDebug>
#include <QElapsedTimer>
//#include <C:\Users\iusl\Desktop\QtGuiApplication1\QtGuiApplication1\uav_Pos_Info.h>
//#include <../QtWebView/qwebview_global.h>

//设置ID和一些固定的数值
const int action_send_times = 20;
const int action_delay_time = 100;
const char M210_ID = 0x10;
const char M300_ID = 0x04;
class uav_Pos_Info : public QObject
{
	Q_OBJECT
		Q_PROPERTY(QJsonObject jsonData MEMBER m_jsonData NOTIFY dataChanged)
public:
	//explicit uav_Pos_Info (QObject* parent = nullptr);
signals:

	void dataChanged(const QJsonObject& jsonData);
public slots:
	//void setsomedata(QJsonObject attr)
	//{
	//	m_jsonData = attr;
	//	emit dataChanged(m_jsonData);
	//}
private:
	QJsonObject m_jsonData;


	//void dataChanged(QJsonObject& jsonData);

	//void dataChanged(QJsonObject& jsonData);
};
class QtGuiApplication1 : public QMainWindow
{
	//friend uav_Pos_Info;
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);
public:
	Ui::QtGuiApplication1Class ui;
	//variables for dealing with latest received data.
	QByteArray data_received;
	double uav_xpos;
	double uav_ypos;
	
	QWebChannel* webChannel;
	uav_Pos_Info* webobj;

	//serial port
private slots:
	void test();
	void ser_open();
	void ser_close();
	void serialPort_readyRead();

	// function of drone catcher
	void uav_takeoff();
	void uav_start();
	void uav_exit();
	void uav_land();
	void uav_altitude_test();
	void send_org_location();


	//void on_searchButton_clicked();
	//void on_openButton_clicked();	
	//void on_sendButton_clicked();
	//void on_clearButton_clicked();
public:
	QSerialPort serial;
	
	
	//��ͼ����
	
private:
	//QWebEngineView* Web_View;
	//QWebEngineView* Web_View;    // QWebView����
public:
	//void setAutoComplete(QJsonObject result);
	/*
public slots:

	void getAutocomplete(QJsonObject result);//html--> myChannel
	void cityChangeResult(QString result);//html--> myChannel

signals:
	void cityChanged(QString city);//myChannel --> html
	void inputChanged(QString input);//myChannel --> html
	void sendAutocomplete(QJsonObject autocom);//myChannel --> mainwindow
	*/
};
void delay(int mSeconds);
QVector<int> encode(double);
double decode(QVector<int>::iterator);

//class uav_pos : public QObject
//{
//	Q_OBJECT
//public:
//	uav_pos(double x,double y);
//	double x;
//	double y;
//
//private:
//
//};

