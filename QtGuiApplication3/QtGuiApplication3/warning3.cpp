#include "warning3.h"

warning3::warning3(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(released()), this, SLOT(hid()));
}

warning3::~warning3()
{
}
void warning3::hid()
{
	hide();
}