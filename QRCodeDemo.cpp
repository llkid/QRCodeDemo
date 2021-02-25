#include "QRCodeDemo.h"
#include "qren/qrencode.h"

QRCodeDemo::QRCodeDemo(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	ui.label->setPixmap(createQRCode(QString::fromLocal8Bit("eMeet")));
}

QPixmap QRCodeDemo::createQRCode(const QString& text)
{
	int margin = 2;
	if (text.length() == 0)
	{
		return QPixmap();
	}
	QRcode* qrcode = QRcode_encodeString(text.toLocal8Bit(), 2, QR_ECLEVEL_L, QR_MODE_8, 0);
	if (qrcode == NULL) {
		return QPixmap();
	}
	unsigned char* p, * q;
	p = NULL;
	q = NULL;
	int x, y, bit;
	int realwidth;

	realwidth = qrcode->width;
	QImage image = QImage(realwidth, realwidth, QImage::Format_Indexed8);
	QRgb value;
	value = qRgb(255, 255, 255);
	image.setColor(0, value);
	value = qRgb(0, 0, 0);
	image.setColor(1, value);
	image.setColor(2, value);
	image.fill(0);
	p = qrcode->data;
	for (y = 0; y < qrcode->width; y++) {
		bit = 7;
		q += margin / 8;
		bit = 7 - (margin % 8);
		for (x = 0; x < qrcode->width; x++) {
			if ((*p & 1) << bit)
				image.setPixel(x, y, 1);
			else
				image.setPixel(x, y, 0);
			bit--;
			if (bit < 0)
			{
				q++;
				bit = 7;
			}
			p++;
		}
	}
	return QPixmap::fromImage(image.scaledToWidth(200));
}
