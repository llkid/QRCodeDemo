#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QRCodeDemo.h"

class QRCodeDemo : public QMainWindow
{
    Q_OBJECT

public:
    QRCodeDemo(QWidget *parent = Q_NULLPTR);

private:
    Ui::QRCodeDemoClass ui;

private:
    QPixmap createQRCode(const QString& text);
};
