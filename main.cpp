#include "gauge.h"
#include <QApplication>
#include "goigauge.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GOIGauge w;
    w.show();


    return a.exec();
}
