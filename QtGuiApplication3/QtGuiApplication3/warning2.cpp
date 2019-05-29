#include "warning2.h"

warning2::warning2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(released()), this, SLOT(hid()));
}

warning2::~warning2()
{
}
void warning2::hid()
{
	hide();
}