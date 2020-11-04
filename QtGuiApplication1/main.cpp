#include "QtGuiApplication1.h"


#include <QtWidgets/QApplication>


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QtGuiApplication1 w;
    w.show();
    return app.exec();
}
