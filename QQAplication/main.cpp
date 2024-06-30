#include "QQAplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QQAplication w;
    w.show();
    return a.exec();
}
