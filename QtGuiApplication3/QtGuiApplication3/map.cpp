#include "map.h"
#include "main.h"
#include<QPainter>
#include<QTimer>

Map::Map(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setMinimumSize(1246, 814);
	setMaximumSize(1246, 814);
	ui.lineEdit->setText(QString::number(moneyOutput));
}

Map::~Map()
{
}
void Map::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	painter.drawPixmap(0,0,width(),height(),QPixmap("../1.png"));
	QPen pen,pen2;
	painter.setRenderHint(QPainter::Antialiasing, true);
	pen2.setStyle(Qt::DotLine);
	pen2.setColor(Qt::black);
	pen2.setWidth(4);
	pen.setColor(Qt::black);
	pen.setWidth(4);
	painter.setPen(pen);
	int i,flage,j;
	i = 0;
	flage = 0;
	for (j = 0; j < 11&&flage==0; j++)
	{
		if (leftOutput[j].next == 0)
		{
			flage = 1;
		}
	}//j为城市数
	flage = 0;
	if (position.from == position.to)
	{
		if (position.to == leftOutput[0].here)
		{
			painter.setBrush(Qt::black);
			painter.drawEllipse(QPointF(Pointx(position.from), Pointy(position.from)), 6, 6);
			if (userEnd == 1)
			{
				for (i = 0; i < j - 1;)
				{
					if (leftOutput[i].outType == 0)
					{
						pen.setColor(Qt::green);
					}
					else if (leftOutput[i].outType == 1)
					{
						pen.setColor(Qt::red);
					}
					else if (leftOutput[i].outType == 2)
					{
						pen.setColor(Qt::blue);
					}
					painter.setPen(pen);
					painter.drawLine(Pointx(leftOutput[i].here), Pointy(leftOutput[i].here), Pointx(leftOutput[i + 1].here), Pointy(leftOutput[i + 1].here));
					i++;
				}
			}
			flage = 1;
		}
	}
	else if (position.to == leftOutput[0].here&& position.from!= leftOutput[j-1].here&&leftOutput[0].here!=leftOutput[j-1].here)
	{
		if (leftOutput[0].outType == 0)
		{
			pen.setColor(Qt::green);
		}
		else if (leftOutput[0].outType == 1)
		{
			pen.setColor(Qt::red);
		}
		else if (leftOutput[0].outType == 2)
		{
			pen.setColor(Qt::blue);
		}
		painter.setPen(pen);
		painter.drawLine(Pointx(position.from), Pointy(position.from), (Pointx(position.to)+ Pointx(position.from))/2, (Pointy(position.to) + Pointy(position.from)) / 2);
		flage = 2;
	}
	for (; i < j-1&&flage==0;)
	{
		if (leftOutput[i].outType == 0)
		{
			pen.setColor(Qt::green);
		}
		else if (leftOutput[i].outType == 1)
		{
			pen.setColor(Qt::red);
		}
		else if (leftOutput[i].outType == 2)
		{
			pen.setColor(Qt::blue);
		}
		painter.setPen(pen);
		if (position.from == leftOutput[i].here)
		{
			if (position.from == position.to)
			{
				flage = 1;
				pen.setColor(Qt::black);
				painter.setBrush(Qt::black);
				painter.setPen(pen);
				painter.drawEllipse(QPointF(Pointx(position.from), Pointy(position.from)), 6, 6);
			}
			else
			{
				painter.drawLine(Pointx(position.from), Pointy(position.from), (Pointx(position.from) + Pointx(position.to)) / 2, (Pointy(position.from) + Pointy(position.to)) / 2);
				pen.setColor(Qt::black);
				painter.setBrush(Qt::black);
				painter.setPen(pen);
				painter.drawEllipse(QPointF((Pointx(position.from) + Pointx(position.to)) / 2, (Pointy(position.from) + Pointy(position.to)) / 2), 6, 6);
				flage = 2;
			}
		}
		else
		{
			painter.drawLine(Pointx(leftOutput[i].here), Pointy(leftOutput[i].here), Pointx(leftOutput[i + 1].here), Pointy(leftOutput[i + 1].here));
		}
		i++;
	}
	if (flage == 2)
	{
		if (leftOutput[i-1].outType == 0)
		{
			pen2.setColor(Qt::green);
		}
		else if (leftOutput[i-1].outType == 1)
		{
			pen2.setColor(Qt::red);
		}
		else if (leftOutput[i-1].outType == 2)
		{
			pen2.setColor(Qt::blue);
		}
		painter.setPen(pen2);
		painter.drawLine((Pointx(position.to) + Pointx(position.from)) / 2, (Pointy(position.to) + Pointy(position.from)) / 2, Pointx(position.to), Pointy(position.to));
	}
	for (; i < j-1&& leftOutput[i+1].here!=0; i++)
	{
		if (leftOutput[i].outType == 0)
		{
			pen2.setColor(Qt::green);
		}
		else if (leftOutput[i].outType == 1)
		{
			pen2.setColor(Qt::red);
		}
		else if (leftOutput[i].outType == 2)
		{
			pen2.setColor(Qt::blue);
		}
		painter.setPen(pen2);
		painter.drawLine(Pointx(leftOutput[i].here), Pointy(leftOutput[i].here), Pointx(leftOutput[i+1].here), Pointy(leftOutput[i + 1].here));
	}
	painter.end();
}
int Map::Pointx(int position)
{
	switch (position)
	{
	case 1:
		return 736;
	case 2:
		return 765;
	case 3:
		return 634;
	case 4:
		return 461;
	case 5:
		return 823;
	case 6:
		return 921;
	case 7:
		return 659;
	case 8:
		return 609;
	case 9:
		return 286;
	case 10:
		return 621;
	}
}
int Map::Pointy(int position)
{
	switch (position)
	{
	case 1:
		return 70;
	case 2:
		return 110;
	case 3:
		return 305;
	case 4:
		return 325;
	case 5:
		return 425;
	case 6:
		return 460;
	case 7:
		return 487;
	case 8:
		return 586;
	case 9:
		return 489;
	case 10:
		return 793;
	}
}
void Map::updat()
{
	update();
}
void Map::money()
{
	ui.lineEdit->setText(QString::number(moneyOutput));
}