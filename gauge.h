#ifndef GAUGE_H
#define GAUGE_H

#include <QWidget>
#include <QDialog>
#include <qcgaugewidget.h>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>

class Gauge : public QWidget
{
    Q_OBJECT

public:
    Gauge(QWidget *parent = 0);
    ~Gauge();
    void SetValue(int val);
    void setText(QString text);
    void SetRange(int RMin, int RMax, int RStep);
    void setRangeColorBand(int minValue, int maxValue, int lowValue, int highValue, int divValue);

private:
    QcGaugeWidget *mSpeedGauge;
    QcNeedleItem *mSpeedNeedle;
    QcLabelItem *lab;
    QcColorBand *colorBand;
};

#endif // GAUGE_H
