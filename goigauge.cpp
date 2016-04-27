#include "goigauge.h"

GOIGauge::GOIGauge(QWidget *parent) : QWidget(parent)
{
//    QVBoxLayout *main = new QVBoxLayout(this);
    Gauge *tam = new Gauge(this);
    tam->setRangeColorBand(0,500,60,380,0);
    tam->setText("Thermocouple0_In+");
    tam->SetValue(30);
    tam->SetRange(0,500,50);
//    tam->setRangeColorBand(0,500,50,400,10);

//    tam->setGeometry(0,0,220,220);
//    tam->resize(100,100);

//    main->addWidget(tam);
}

