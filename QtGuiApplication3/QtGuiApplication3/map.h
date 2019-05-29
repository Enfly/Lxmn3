#pragma once

#include <QWidget>
#include "ui_map.h"

class Map : public QWidget
{
	Q_OBJECT

public:
	Map(QWidget *parent = Q_NULLPTR);
	~Map();
private:
	Ui::map ui;
	int Pointx(int position);
	int Pointy(int position);
protected:
	void paintEvent(QPaintEvent*);
protected slots:
	void updat();
};
