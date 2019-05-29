#pragma once

#include <QWidget>
#include "ui_warning3.h"

class warning3 : public QWidget
{
	Q_OBJECT

public:
	warning3(QWidget *parent = Q_NULLPTR);
	~warning3();

private:
	Ui::warning3 ui;
private slots:
	void hid();
};
