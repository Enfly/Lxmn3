#include "main.h"
#include <iostream>
#include <fstream>
void readLog(void) {
	ifstream fin;

	//读飞机
	fin.open("plane.txt", ios::in);
	int a = 0;//读输入
	int from = 0;//出发城市
	int target = 0;//到达城市
	int departure = 0;//出发时间
	int spendtime = 0;//花费时间
	int money = 0;//钱
	int j = 0;//计数器
	while (fin >> a) {
		j = 0;
		from = a;
		target = 0;
		while (target <= 10) {
			fin >> a;
			target = a;
			fin >> a;
			if (a != 0) {
				fin >> departure;
				fin >> a;
				fin >> spendtime;
				fin >> money;
				if (from > 10 && from < 0) {
					cout << "飞机文件格式错误" << endl;
					break;
				}
				for (departure; departure <= a; departure++) {//录入数据结构
					edges[from][2][j].target = target;
					edges[from][2][j + 1].target = 0;//结尾
					edges[from][2][j].departure = departure;
					edges[from][2][j].spendtime = spendtime;
					edges[from][2][j].money = money;
					j++;
				}
			}
			target++;
		}
	}	
	
	fin.close();


	//读火车
	fin.open("train.txt", ios::in);
	a = 0;//读输入
	from = 0;//出发城市
	target = 0;//到达城市
	departure = 0;//出发时间
	spendtime = 0;//花费时间
	money = 0;//钱
	j = 0;//计数器
	while (fin >> a) {
		j = 0;
		from = a;
		target = 0;
		while (target <= 10) {
			fin >> a;
			target = a;
			fin >> a;
			if (a != 0) {
				fin >> departure;
				fin >> a;
				fin >> spendtime;
				fin >> money;
				if (from > 10 && from < 0) {
					cout << "火车文件格式错误" << endl;
					break;
				}
				for (departure; departure <= a; departure++) {//录入数据结构
					edges[from][1][j].target = target;
					edges[from][1][j + 1].target = 0;//结尾
					edges[from][1][j].departure = departure;
					edges[from][1][j].spendtime = spendtime;
					edges[from][1][j].money = money;
					j++;
				}
			}
			target++;
		}
	}

	fin.close();


	//读汽车
	fin.open("bus.txt", ios::in);
	a = 0;//读输入
	from = 0;//出发城市
	target = 0;//到达城市
	departure = 0;//出发时间
	spendtime = 0;//花费时间
	money = 0;//钱
	j = 0;//计数器
	while (fin >> a) {
		j = 0;
		from = a;
		target = 0;
		while (target <= 10) {
			fin >> a;
			target = a;
			fin >> a;
			if (a != 0) {
				fin >> departure;
				fin >> a;
				fin >> spendtime;
				fin >> money;
				if (from > 10 && from < 0) {
					cout << "汽车文件格式错误" << endl;
					break;
				}
				for (departure; departure <= a; departure++) {//录入数据结构
					edges[from][0][j].target = target;
					edges[from][0][j + 1].target = 0;//结尾
					edges[from][0][j].departure = departure;
					edges[from][0][j].spendtime = spendtime;
					edges[from][0][j].money = money;
					j++;
				}
			}
			target++;
		}
	}
	fin.close();
}


int readUser(int u) {//还没写完！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	Position positionOut;//退出时位置
	int ab = 0;//判断符,为0时用户在终点,为-1时没有上次方案，为1时用户不在终点
	int hh;//总时间
	int y, m, d;//方案生成时日期
	int yo, mo, d0;//退出时的日期
	int a;
	int i = 0;
	if (u == 1) {
		ifstream fin1("user1.txt");

		fin1 >> a;
		if (a == 0) {
			fin1.close();
			ab = -1;
		}
		if (a == 1) {
			fin1 >> moneyOutput;
			fin1 >> position.from;//生成方案时位置
			fin1 >> position.to;//同上
			fin1 >> y;
			fin1 >> m;
			fin1 >> d;
			fin1 >> positionOut.from;
			fin1 >> positionOut.from;
			fin1 >> yo;
			fin1 >> mo;
			fin1 >> d0;
			int x = 0;
			while (x == 0) {
				fin1 >> leftOutput[i].here;
				fin1 >> leftOutput[i].next;
				fin1 >> leftOutput[i].inTime;
				fin1 >> leftOutput[i].outTime;
				fin1 >> leftOutput[i].outType;
				
				if (leftOutput[i].next == 0) {
					message.target = leftOutput[i].here;
					hh = leftOutput[i].inTime;
					x = 1;
				}

				i++;
			}

			fin1.close();
		}
	}
	if (u == 2) {
		ifstream fin2("user2.txt");


		fin2 >> a;
		if (a == 0) {
			fin2.close();
			ab = -1;
		}
		if (a == 1) {
			fin2 >> moneyOutput;
			fin2 >> position.from;
			fin2 >> position.to;
			fin2 >> y;
			fin2 >> m;
			fin2 >> d;
			fin2 >> positionOut.from;
			fin2 >> positionOut.from;
			fin2 >> yo;
			fin2 >> mo;
			fin2 >> d0;
			int x = 0;
			i = 0;
			while (x == 0) {
				fin2 >> leftOutput[i].here;
				fin2 >> leftOutput[i].next;
				fin2 >> leftOutput[i].inTime;
				fin2 >> leftOutput[i].outTime;
				fin2 >> leftOutput[i].outType;
				if (leftOutput[i].next == 0) {
					message.target = leftOutput[i].here;
					hh = leftOutput[i].inTime;
					x = 1;
				}

				i++;
			}

			fin2.close();
		}
	}
	if (u == 3) {
		ifstream fin3("user3.txt");
		i = 0;
		fin3 >> a;
		if (a == 0) {
			fin3.close();
			ab = -1;
		}
		if (a == 1) {
			fin3 >> moneyOutput;
			fin3 >> position.from;
			fin3 >> position.to;
			fin3 >> y;
			fin3 >> m;
			fin3 >> d;
			fin3 >> positionOut.from;
			fin3 >> positionOut.from;
			fin3 >> yo;
			fin3 >> mo;
			fin3 >> d0;
			int x = 0;
			while (x == 0) {
				fin3 >> leftOutput[i].here;
				fin3 >> leftOutput[i].next;
				fin3 >> leftOutput[i].inTime;
				fin3 >> leftOutput[i].outTime;
				fin3 >> leftOutput[i].outType;
				if (leftOutput[i].next == 0) {
					message.target = leftOutput[i].here;
					hh = leftOutput[i].inTime;
					x = 1;
				}

				i++;
			}
			fin3.close();
		}
	}
	int hourdifferent = 10000;
	if (ab != -1) {
		int datedifferent = 10000;
		if (year - y <= 1) {
			if (year == y) {
				if (month - m <= 1) {
					if (month == m) {
						datedifferent = date - d;
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
						datedifferent = date - (dm - d);
					}
				}
			}
			else {
				if ((month == 1) && (m == 12)) {
					datedifferent = date - (31 - d);
				}
			}
		}
		if (datedifferent != 10000) {
			hourdifferent = (datedifferent * 24) + hour;
			if (hourdifferent < hh) {
				ab = 1;
			}
		}
		
		i = 0;
		int bu3 = 0;//为1时开始补日志
		while (leftOutput[i].here != 0) {
			if ((leftOutput[i].inTime <= hourdifferent) && (leftOutput[i].outTime >= hourdifferent)) {
				position.from = leftOutput[i].here;
				position.to = leftOutput[i].here;
			}
			if ((leftOutput[i].outTime <= hourdifferent) && (leftOutput[i + 1].inTime >= hourdifferent)) {
				position.from = leftOutput[i].here;
				position.to = leftOutput[i + 1].here;
			}
			if (bu3 == 1) {//开始补日志!

				logging(3);
			}
			if (position.from == positionOut.from) {
				if (position.to == positionOut.to) {
					bu3 = 1;
				}
			}
			i++;
		}
		if (ab == 0) {//用户在终点
			return 0;
		}
		if (ab == 1) {//用户不在终点
			return 1;
		}
	}
	else
		return -1;
	
}