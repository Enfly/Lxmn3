#include "warning1.h"

warning1::warning1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(released()), this, SLOT(hid()));
}

warning1::~warning1()
{
}
void warning1::hid()
{
	hide();
}