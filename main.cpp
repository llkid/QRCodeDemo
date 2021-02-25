#include "QRCodeDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRCodeDemo w;
    w.show();
    return a.exec();
}
