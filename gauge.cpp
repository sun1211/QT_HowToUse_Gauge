#include "gauge.h"

Gauge::Gauge(QWidget *parent): QWidget(parent)
{
    mSpeedGauge = new QcGaugeWidget(this);
    mSpeedGauge->addBackground(99);
    QcBackgroundItem *bkg1 = mSpeedGauge->addBackground(97);
    bkg1->clearrColors();
    bkg1->addColor(1,Qt::black);

    QcBackgroundItem *bkg2 = mSpeedGauge->addBackground(20);
    bkg2->clearrColors();
    bkg2->addColor(1,Qt::white);

    QcBackgroundItem *bkg3 = mSpeedGauge->addBackground(19);
    bkg3->clearrColors();
    bkg3->addColor(1,QColor(0,26,43));

    QcBackgroundItem *bkg4 = mSpeedGauge->addBackground(7);
    bkg4->clearrColors();
    bkg4->addColor(1,Qt::white);

//    colorBand = mSpeedGauge->addColorBand(85);

    mSpeedGauge->addArc(96);
//    mSpeedGauge->addColorBand(85);
    lab = mSpeedGauge->addLabel(40);
    mSpeedNeedle = mSpeedGauge->addNeedle(70);
    mSpeedNeedle->setLabel(lab);
    mSpeedNeedle->setColor(QColor(243,83,50));
    mSpeedNeedle->setNeedle(QcNeedleItem::TriangleNeedle);

//    colorBand = mSpeedGauge->addColorBand(85);

    QVBoxLayout *main = new QVBoxLayout(this);
    main->addWidget(mSpeedGauge);

//    this->setStyleSheet("background-color: black;");
//    resize(220,220);

//    setGeometry(0,0,220,220);

}

Gauge::~Gauge()
{

}

void Gauge::setText(QString text)
{
    mSpeedGauge->addLabel(70)->setText(text);
}

void Gauge::SetRange(int RMin, int RMax, int RStep)
{

    QcValuesItem *vau = mSpeedGauge->addValues(50);
    vau->setValueRange(RMin,RMax);
    vau->setStep(RStep);

    mSpeedNeedle->setValueRange(RMin,RMax);
}

void Gauge::setRangeColorBand(int minValue, int maxValue, int lowValue, int highValue, int divValue)
{
    colorBand = mSpeedGauge->addColorBand(85);
    colorBand->SetRangeOfColor(minValue,maxValue,lowValue,highValue,divValue);

}

void Gauge::SetValue(int val)
{
    mSpeedNeedle->setCurrentValue(val);
    lab->setText(QString::number(val));
}
