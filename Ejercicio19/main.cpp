#include "pintura.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pintura w;
    w.showMaximized();
    return a.exec();
}
