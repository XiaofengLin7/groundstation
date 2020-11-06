#include "QtGuiApplication1.h"

#include<QDebug>
#include <QElapsedTimer>


QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
    ui.setupUi(this);
  //  QObject::connect(ui.PushButton_serial_port_open, SIGNAL(clicked()),this, SLOT(test()));
    QObject::connect(ui.PushButton_serial_port_open, SIGNAL(clicked()), this, SLOT(ser_open()));
    QObject::connect(ui.pushButton_serial_port_close,SIGNAL(clicked()),this,SLOT(ser_close()));


    //功能连接
    QObject::connect(ui.pushButton_takeoff, SIGNAL(clicked()), this, SLOT(uav_takeoff()));
    QObject::connect(ui.pushButton_start, SIGNAL(clicked()), this, SLOT(uav_start()));
    QObject::connect(ui.pushButton_exit, SIGNAL(clicked()), this, SLOT(uav_exit()));
    QObject::connect(ui.pushButton_land, SIGNAL(clicked()), this, SLOT(uav_land()));
    QObject::connect(ui.pushButton_send_org_loc, SIGNAL(clicked()), this, SLOT(send_org_location()));

    //数据清除
    QObject::connect(ui.pushButton_clear,SIGNAL(clicked()),ui.text_rec,SLOT(clear()));

    ui.comboBox_serial_port_name->setCurrentIndex(3);
    ui.comboBox_baud_rate->setCurrentIndex(3);
    QtGuiApplication1::test();

    QWebEngineView* Web_View = new QWebEngineView(this);
    Web_View->show();
    Web_View->load(QUrl(QDir::currentPath()+"/map_20201104.html"));
    
    webChannel = new QWebChannel;
    webobj = new uav_Pos_Info();
    
   // ui.Web_View = new QWebEngineView(parent);
   // ui.Web_View->load(QUrl("C:/Users/iusl/Desktop/QtGuiApplication1/map_20201104.html"));
    
    webChannel->registerObject(QStringLiteral("webobj"), webobj);

    Web_View->page()->setWebChannel(webChannel);
   
    Web_View->setGeometry(10, height()/4, width()/2, height()/2); 
    qDebug() << QDir::currentPath();


}
void QtGuiApplication1::test()
{
    QString b = "1244563" ;
    QByteArray c;
    c.resize(5);
    c[0] = 0xED;
    c[1] = 0x01;
    c[2] = 0x00;
    c[3] = 0x01;
    c[4] = 0xAA;
    ui.texttest->append(c.toHex());
}

void QtGuiApplication1::ser_open()
{        
    
    //设置串口名
    switch (ui.comboBox_serial_port_name->currentIndex())
    {
    case 0:
        serial.setPortName("COM1");
        break;
    case 1:
        serial.setPortName("COM2");
        break;
    case 2:
        serial.setPortName("COM3");
        break;
    case 3:
        serial.setPortName("COM4");
        break;
    case 4:
        serial.setPortName("COM5");
        break;
    case 5:
        serial.setPortName("COM6");
        break;
    case 6:
        serial.setPortName("COM7");
        break;
    case 7:
        serial.setPortName("COM8");
        break;
    case 8:
        serial.setPortName("COM9");
        break;
    default:
        break;
    }
    
   
    //设置波特率
    switch (ui.comboBox_baud_rate->currentIndex())
    {
    case 0:
        serial.setBaudRate(9600);
        break;
    case 1:
        serial.setBaudRate(56000);
        break;
    case 2:
        serial.setBaudRate(57600);
        break;
    case 3:
        serial.setBaudRate(115200);
        break;
    case 4:
        serial.setBaudRate(128000);
        break;
    case 5:
        serial.setBaudRate(256000);
        break;
    case 6:
        serial.setBaudRate(460800);
        break;
    case 7:
        serial.setBaudRate(921600);
        break;
    default:
        break;
    }
   
    //设置数据位数
    this->serial.setDataBits(QSerialPort::Data8);
    //设置奇偶校验
    this->serial.setParity(QSerialPort::NoParity);
    //设置停止位
    this->serial.setStopBits(QSerialPort::OneStop);
    //设置流控制
    this->serial.setFlowControl(QSerialPort::NoFlowControl);
    //打开串口
    this->serial.open(QIODevice::ReadWrite);


    //设置相关按键使能
    ui.comboBox_serial_port_name->setEnabled(0);
    ui.comboBox_baud_rate->setEnabled(0);
    ui.pushButton_serial_port_close->setEnabled(1);
    ui.PushButton_serial_port_open->setEnabled(0);

    //显示连接
    QObject::connect(&this->serial,SIGNAL(readyRead()), this, SLOT(serialPort_readyRead()));

    //读取数据
    //QString buffer = QString(serial.readAll());
    //QString buffer = "ED 01 00 03 AA";
    //QByteArray temp_data = buffer.toUtf8();;
    QByteArray bytes;
    bytes.resize(5);
    bytes[0] = 0xED;
    bytes[1] = 0x01;
    bytes[2] = 0x00;
    bytes[3] = 0x03;
    bytes[4] = 0xAA;
    qDebug() << bytes;
  //  serial.write(bytes);
    //从界面中读取以前收到的数据
    //QString recv = ui.text_rec->toPlainText();
    //recv += QString(buffer);
    //清空以前的显示
    ui.text_rec->clear();
    //重新显示
    //ui.text_rec->append(recv);

}
void QtGuiApplication1::ser_close()
{
    this->serial.close();
    ui.comboBox_serial_port_name->setEnabled(1);
    ui.comboBox_baud_rate->setEnabled(1);
    ui.pushButton_serial_port_close->setEnabled(0);
    ui.PushButton_serial_port_open->setEnabled(1);
}
inline double QtGuiApplication1::decode(int data1, int data2, int data3, int data4)
{

    double result = data1 * 256 * 256 + data2 * 256 + data3 - 1000000;
    result += (result > 0 ? (double)data4 / 100 : - (double)data4 / 100);
    return result;
}
void QtGuiApplication1::serialPort_readyRead()
{
    // 方法1
    QByteArray tem = this->serial.read(1);
    if (tem.at(0) == '\xed')
    {
        QByteArray num = this->serial.read(1);
        int tem_num = this->serial.bytesAvailable();
        if( tem_num >= 24){
            if (num.at(0) == '\x14' )
            {
                QByteArray data = this->serial.read(24);   //读24个字节
                this->serial.clear();       // 清空缓存
                QVector<int> data_int;  // 将data转成int，保存到data_real中
                QString data_str = (QString)data.toHex();
                QByteArray data_byte = data_str.toUtf8();
                for (size_t i = 0; i < 48; i += 2)
                {
                    bool ok;
                    data_int.append(data_byte.mid(i, 2).toInt(&ok, 16));
                }
                //delay(10);
                double x = decode(data_int.at(2), data_int.at(3), data_int.at(4), data_int.at(5));
                double y = decode(data_int.at(6), data_int.at(7), data_int.at(8), data_int.at(9));
                double z = decode(data_int.at(10), data_int.at(11), data_int.at(12), data_int.at(13));
                double vx = decode(data_int.at(14), data_int.at(15), data_int.at(16), data_int.at(17));
                double vy = decode(data_int.at(18), data_int.at(19), data_int.at(20), data_int.at(21));
                double drone_id = data_int.at(22) * 256 + data_int.at(23);
                //pass data to html
                QJsonObject json;
                json.insert("x", x);
                json.insert("y", y);
                json.insert("drone_id", drone_id);

                webobj->setProperty("jsonData", json);

                // show position data and velocity data on  GUI
                ui.text_uav1_x->clear();
                ui.text_uav1_x->append(QString::number(x));
                ui.text_uav1_y->clear();
                ui.text_uav1_y->append(QString::number(y));
                ui.text_uav1_z->clear();
                ui.text_uav1_z->append(QString::number(z));
                ui.text_uav1_vx->clear();
                ui.text_uav1_vx->append(QString::number(vx));
                ui.text_uav1_vy->clear();
                ui.text_uav1_vy->append(QString::number(vy));

            }
        }
    }
    /*
    //从接收缓冲区中读取数据
    QByteArray buffer = this->serial.read(1);
    //从界面中读取以前收到的数据
    QString recv = ui.text_rec->toPlainText();
    QString buff_str;
    if (!buffer.isEmpty())
    {
        data_received.append(buffer);
        if (data_received.contains('\xed'))
        {
            buff_str += (QString)data_received.split('\xed').at(0).toHex();
            data_received = data_received.right(data_received.length() - data_received.indexOf('\xed') - 1);
        }
 //       qDebug() << data_received;
        if (buff_str.length() == 25 * 2)
        {
            QVector<double> data_real;
            QByteArray data = buff_str.toUtf8();
            serial.clear();
            for (size_t i = 0; i < data.length(); i += 2)
            {
                QByteArray element = data.mid(i, 2);
                bool ok;
                data_real.append(element.toInt(&ok, 16));
                
            }
            qDebug() << data;
            //得到数据的来源            
            QString drone_id = (QString) data.mid(23, 2);
            //qDebug() << drone_id;

            double x = decode(data_real.at(3), data_real.at(4), data_real.at(5), data_real.at(6));
            double y = decode(data_real.at(7), data_real.at(8), data_real.at(9), data_real.at(10));
            double z = decode(data_real.at(11), data_real.at(12), data_real.at(13), data_real.at(14));
            double vx = decode(data_real.at(15), data_real.at(16), data_real.at(17), data_real.at(18));
            double vy = decode(data_real.at(19), data_real.at(20), data_real.at(21), data_real.at(22));
            qDebug() << "x:" << x<<" ";

            

            //pass data to html
            QJsonObject json;
            json.insert("x", x);
            json.insert("y", y);
            json.insert("drone_id", drone_id);

 //           qDebug() << data_real.at(24);
            webobj->setProperty("jsonData", json);
            
            // show position data and velocity data on  GUI
            ui.text_uav1_x->clear();
            ui.text_uav1_x->append(QString::number(x));
            ui.text_uav1_y->clear();
            ui.text_uav1_y->append(QString::number(y));
            ui.text_uav1_z->clear();
            ui.text_uav1_z->append(QString::number(z));
            ui.text_uav1_vx->clear();
            ui.text_uav1_vx->append(QString::number(vx));
            ui.text_uav1_vy->clear();
            ui.text_uav1_vy->append(QString::number(vy));
        }
        

    }
    
    QString strDis;
    for (int i = 0; i < buff_str.length(); i += 2)
    {
        QString str = buff_str.mid(i, 2);
        strDis += str;
        strDis += " ";
    }
    recv += strDis;
    ui.text_rec->clear();
    ui.text_rec->append(recv);
    */
}


    //QString recv = ui.text_rec->toPlainText();
    ////判断是否用hex显示
    //if (ui.checkBox_hex->isChecked())
    //{
    //    QString buff_str = buffer.toHex().toUpper();
    //    QString strDis;
    //    for (int i = 0; i < buff_str.length(); i += 2)//填加空格
    //    {
    //        QString st = buff_str.mid(i, 2);
    //        strDis += st;
    //        strDis += " ";
    //    }
    //    recv += strDis;
    //    ui.text_rec->clear();
    //    ui.text_rec->append(recv);
    //}
    //else
    //{
    //    recv += QString(buffer);
    //    ui.text_rec->clear();
    //    ui.text_rec->append(recv);
    //}


    //
    //清空以前的显示
    //重新显示
void QtGuiApplication1::uav_start() {
    QByteArray bytes;
    bytes.resize(5);
    bytes[0] = 0xED;
    bytes[1] = 0x01;
    bytes[2] = 0x00;
    bytes[3] = M300_ID;
    bytes[4] = 0x02;

    for (size_t i = 0; i < action_send_times; i++)
    {
        serial.write(bytes);
        delay(action_delay_time);
    }
}
 
void QtGuiApplication1::uav_takeoff() {
    QByteArray bytes;
    bytes.resize(5);
    bytes[0] = 0xED;
    bytes[1] = 0x01;
    bytes[2] = 0x00;
    bytes[3] = M300_ID;
    bytes[4] = 0x01;
    for (size_t i = 0; i < action_send_times; i++)
    {
        serial.write(bytes);
        delay(action_delay_time);
    }
}

void QtGuiApplication1::uav_exit() {
    QByteArray bytes;
    bytes.resize(5);
    bytes[0] = 0xED;
    bytes[1] = 0x01;
    bytes[2] = 0x00;
    bytes[3] = M300_ID;
    bytes[4] = 0x03;
    for (size_t i = 0; i < action_send_times; i++)
    {
        serial.write(bytes);
        delay(action_delay_time);
    }
    
}

void QtGuiApplication1::uav_land() {
    QByteArray bytes;
    bytes.resize(5);
    bytes[0] = 0xED;
    bytes[1] = 0x01;
    bytes[2] = 0x00;
    bytes[3] = M300_ID;
    bytes[4] = 0x04;
    for (size_t i = 0; i < action_send_times; i++)
    {
        serial.write(bytes);
        delay(action_delay_time);
    }
}

void QtGuiApplication1::send_org_location() {
    //read oringinal location data
    double org_latitude = ui.textEdit_latitude->toPlainText().toDouble()+10000;
    double org_longitude = ui.textEdit_longitude->toPlainText().toDouble()+10000;
    double org_altitude = ui.textEdit_altitude->toPlainText().toDouble()+10000;

    //encode data
    QByteArray bytes;
    bytes.resize(16);
    bytes[0] = 0xED;
    bytes[1] = 0x0C;
    bytes[2] = 0x00;
    bytes[3] = 0x04;

    bytes[4] = (int)org_latitude / 256;
    bytes[5] = (int)org_latitude % 256;
    bytes[6] = (int)((org_latitude - (int)org_latitude) * 100000 )/ 256;
    bytes[7] = (int)((org_latitude - (int)org_latitude) * 100000 )% 256;

    bytes[8] = (int)org_longitude / 256;
    bytes[9] = (int)org_longitude % 256;
    bytes[10] = (int)((org_longitude - (int)org_longitude) * 100000) / 256;
    bytes[11] = (int)((org_longitude - (int)org_longitude) * 100000) % 256;

    bytes[12] = (int)org_altitude / 256;
    bytes[13] = (int)org_altitude % 256;
    bytes[14] = (int)((org_altitude - (int)org_altitude) * 100000) / 256;
    bytes[15] = (int)((org_altitude - (int)org_altitude) * 100000) % 256;

    serial.write(bytes);
    qDebug() << bytes.toHex();
}

void delay(int mSeconds)
{
    QEventLoop loop;
    QTimer::singleShot(mSeconds, &loop, SLOT(quit()));
    loop.exec();


}
//地图html交互相关函数
/*
void QtGuiApplication1::getAutocomplete(QJsonObject result)
{
    emit sendAutocomplete(result);
}
*/

/*
void QtGuiApplication1::on_searchButton_clicked()
{}
void QtGuiApplication1::on_openButton_clicked()
{}
void QtGuiApplication1::on_sendButton_clicked()
{}
void QtGuiApplication1::on_clearButton_clicked()
{}
*/
//void uav_Pos_Info::dataChanged(const QJsonObject& jsonData)
//{
////    emit dataChanged(jsonData);
//
//}