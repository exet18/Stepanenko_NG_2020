#include "plusplus.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    plusplus w;
    w.show();
    return a.exec();
}
