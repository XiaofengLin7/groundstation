#include "QtGuiApplication1.h"




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
    QObject::connect(ui.altitude_control, SIGNAL(clicked()), this, SLOT(uav_altitude_test()));
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

void QtGuiApplication1::serialPort_readyRead()
{
    // 方法1
    QByteArray tem = this->serial.read(1);
    if (!tem.isNull()) {   
        if (tem.at(0) == '\xed')
        {
            QByteArray num = this->serial.read(1);
            int tem_num = this->serial.bytesAvailable();
            if (tem_num >= 24) {
                if (num.at(0) == '\x14')
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

                    double x = decode(data_int.begin() + 2);
                    double y = decode(data_int.begin() + 6);
                    double z = decode(data_int.begin() + 10);
                    double vx = decode(data_int.begin() + 14);
                    double vy = decode(data_int.begin() + 18);
                    QString drone_id = (QString)data.toHex().mid(44, 4);

                    //pass data to html
                    QJsonObject json;
                    json.insert("x", x);
                    json.insert("y", y);
                    json.insert("drone_id", drone_id);
                    webobj->setProperty("jsonData", json);
                    // show position data and velocity data on  GUI
                    if (drone_id == "0004") {

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
                    if (drone_id == "0010") {
                        ui.text_uav2_x->clear();
                        ui.text_uav2_x->append(QString::number(x));
                        ui.text_uav2_y->clear();
                        ui.text_uav2_y->append(QString::number(y));
                        ui.text_uav2_z->clear();
                        ui.text_uav2_z->append(QString::number(z));
                        ui.text_uav2_vx->clear();
                        ui.text_uav2_vx->append(QString::number(vx));
                        ui.text_uav2_vy->clear();
                        ui.text_uav2_vy->append(QString::number(vy));
                    }
                }
            }
        }
    
    }

 
}



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
//不给x,y方向的控制，只控制高度方向。
void QtGuiApplication1::uav_altitude_test() {
    QByteArray bytes;
    bytes.resize(24);
    bytes[0] = 0xED;
    bytes[1] = 0x14;
    bytes[2] = 0x00;
    bytes[3] = M300_ID;

    QVector<int> zero_encode = encode(0);

    for (int i = 0; i < 20 ; i++) {
    
        bytes[4 + i] = zero_encode.at(i % 4 );
    
    }
    double altitude = ui.text_Edit_altitude_control->toPlainText().toDouble();
    QVector<int> altitude_encode = encode( - altitude );

    for (int i = 0; i < 4; i++) {

        bytes[12 + i] = altitude_encode.at(i);

    }
    for (size_t i = 0; i < action_send_times; i++)
    {
        serial.write(bytes);
        qDebug() << bytes.toHex() << endl;
        delay(action_delay_time);
    }
}

void QtGuiApplication1::send_org_location() {
    //read oringinal location data
    double org_latitude = ui.textEdit_latitude->toPlainText().toDouble();
    double org_longitude = ui.textEdit_longitude->toPlainText().toDouble();
    double org_altitude = ui.textEdit_altitude->toPlainText().toDouble();

    //encode data
    QByteArray bytes;
    bytes.resize(16);
    bytes[0] = 0xED;
    bytes[1] = 0x0C;
    bytes[2] = 0x00;
    bytes[3] = 0x04;
    
    const QVector<int> latitude_result = encode(org_latitude);
    const QVector<int> longitude_result = encode(org_longitude);
    const QVector<int> altitude_result = encode(org_altitude);

    qDebug() << latitude_result.size();
    for (int i = 0; i < latitude_result.size(); i++) {
    
        bytes[i + 4] = latitude_result.at(i);
    }
   
    for (int i = 0; i < longitude_result.size(); i++) {

        bytes[8 + i] = longitude_result.at(i);
    }

    for (int i = 0; i < altitude_result.size(); i++) {

        bytes[12 + i] = altitude_result.at(i);
   
    }

    serial.write(bytes);
    qDebug() << bytes.toHex();
}

QVector<int> encode(double data) {
    
    int decimal = (abs(data) - abs((int)data)) * 100;
    data += 1000000;
    QVector<int> result;
    result.push_back((int)data /256 / 256);
    result.push_back((int)data /256 % 256);
    result.push_back((int)data % 256);
    result.push_back((int)(decimal % 256));

    return result;
}


double decode(QVector<int>::iterator it) {

    double result = (*it) * 256 * 256 + (*(it + 1)) * 256 + (*(it + 2)) - 1000000;
    result += (result > 0 ? (double)(*(it + 3)) / 100 : - (double)(*(it + 3)) / 100);
    return result;
}

void delay(int mSeconds)
{
    QEventLoop loop;
    QTimer::singleShot(mSeconds, &loop, SLOT(quit()));
    loop.exec();


}