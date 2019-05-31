#include "main.h"
#include <iostream>
#include <fstream>

void update1(void) {//随时间更新旅客位置
	//判断position变了没
	Position positionOld;
	positionOld.from = position.from;
	positionOld.to = position.to;

	int i = 0;
	ifstream fin;
	switch (user) {
	case 1:fin.open("user1.txt");
	case 2:fin.open("user2.txt");
	case 3:fin.open("user3.txt");
	}
	int y = year;
	int m = month;
	int d = date;
	int h = hour;//hour数
	int dch = 0;//日期差

	int ad;

	fin >> ad;
	if (ad == 0) {
		fin.close();
		return;
	}
	if (ad == 1) {
		fin >> moneyOutput;
		fin >> ad;//占位
		fin >> ad;//同上
		fin >> y;
		fin >> m;
		fin >> d;
	}

	if (y != year) {
		dch = date - (31 - d);
	}
	else {
		if (month == m) {
			dch = date - d;
		}
		else {
			int dm;
			switch (m) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				dm = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				dm = 30;
				break;
			case 2:
				dm = 28;
				if (((year % 4) == 0) && ((year % 100) != 0))
					dm = 29;
				if ((year % 400) == 0)
					dm = 29;
			}
			dch = date - (dm - d);
		}
	}
	h = h + (dch * 24);
	i = 0;
	while (leftOutput[i].next != 0) {
		if ((leftOutput[i].inTime <= h) && (leftOutput[i].outTime >= h)) {
			position.from = leftOutput[i].here;
			position.to = leftOutput[i].here;
		}
		if ((leftOutput[i].outTime <= h) && (leftOutput[i + 1].inTime >= h)) {
			position.from = leftOutput[i].here;
			position.to = leftOutput[i + 1].here;
		}
		i++;
	}
	if (leftOutput[i].inTime <= h) {//如果到终点
		position.from = leftOutput[i].here;
		position.to = leftOutput[i].here;
		userEnd = 1;
	}
	if ((positionOld.from != position.from) || (positionOld.to != position.to)) {
		logging(3);
	}
	fin.close();
	
}