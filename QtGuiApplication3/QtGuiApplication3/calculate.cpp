#include "main.h"
#include "calculate.h"
#include <iostream>
//完成起点终点相同的需求！！！！！！！！！！！！！！！！！！！！！！

//城市代号以头文件为准
//计算模式以头文件为准
void input(int cityStart, int cityTarget, int cityPass[9], int modeS, int mode3Time)//读入
{//出发城市，到达城市，经过城市（空余用"0"填满），计算模式，一定价格内最短时间的价格
	message.from = cityStart;
	message.target = cityTarget;

	int i = 0;
	while (cityPass[i] != 0) {
		message.pass[i] = cityPass[i];
		i++;
	}
	message.pass[i] = 0;
	i = 0;

	message.calMode = modeS;
	if (modeS == 3)
		message.mode3Time = mode3Time;
}

Point cities[11];//从1开始
int minT = 10000;//最短时间
int minM = 50000;//最少花费
int ift = 0;

int Cal(int hour) {
	int m = 0;//计算出的花费
	int trans = 0;//交通方式
	Left leftp[12];//记录轨迹
	for (int i = 0; i < 12; i++) {
		leftp[i].here = 0;
		leftp[i].inTime = 0;
		leftp[i].next = 0;
		leftp[i].outTime = 0;
		leftp[i].outType = 0;
	}

	leftp[0].here = message.from;
	leftp[0].inTime = hour;

	int life = initC(hour, leftp);//初始化，返回城市数

	if (message.calMode == 1) {//最短时间，飞机+火车
		calMinTime(message.from, leftp, m, life);//递归
	}
	if (message.calMode == 2) {//最少价格，汽车+火车
		calMinMoney(message.from, leftp, m, life);
	}
	if (message.calMode == 3) {//限时最少费用，飞机+火车+汽车
		calComplex(message.from, leftp, m, life);
		if (ift == 0) {
			return 0;
		}
	}
	logging(2);
	return 1;
}

int initC(int hour, Left* left) {//初始化cities
	int i = 0, j = 0, k = 0;
	//取出所有城市
	while (message.pass[i] != 0) {
		i++;
	}
	amount = i + 2;
	int cs[12];//城市列表
	for (i = 0; i < 12; i++)
		cs[i] = 0;

	cs[0] = message.from;
	i = 0; j = 1;
	while (message.pass[i] != 0) {
		cs[j] = message.pass[i];
		i++;
		j++;
	}
	cs[j] = message.target;

	//放入cities中
	for (i = 0; i <= 10; i++) {
		cities[i].tag = 0;
		cities[i].from = 0;
		for (j = 0; j <= 10; j++)
			cities[i].out[j] = 0;
	}
	i = 0; j = 0; k = 0;
	while (cs[i] != 0) {
		cities[cs[i]].tag = 1;
		j = 0; k = 0;
		while (cs[j] != 0) {
			if (cs[i] != cs[j]) {
				if (cs[j] != message.from) {
					cities[cs[i]].out[k] = cs[j];
					k++;
				}
			}
			j++;
		}
		if (cs[i] == message.from) {
			cities[cs[i]].tag = 2;
		}
		if (cs[i] == message.target)
			cities[cs[i]].tag = 3;
		i++;
	}

	position.from = message.from;
	position.to = message.from;
	userEnd = 0;

	int n; i = 0;
	while (cs[i] != 0)
		i++;
	n = i;
	return n;
}

void calMinTime(int h, Left *l, int m, int lf) {//最短时间
	Left leftp[12];
	for (int i = 0; i < 12; i++) {
		leftp[i] = l[i];
	}
	int here = h;
	int money = m;
	int diffT = 24;

	//终结条件
	if ((here == message.target) && (lf == 1)) {//1
		int j = 0;
		while (leftp[j].here != 0) {
			j++;
		}
		j = j - 1;
		if (leftp[j].inTime < minT) {
			leftp[j].next = 0;
			for (int i = 0; i < 11; i++) {
				leftOutput[i] = leftp[i];
			}
			minT = leftp[j].inTime;
			moneyOutput = m;
		}
		return;
	}
	else if ((lf == 2) && (message.from == message.target)) {//起点终点相同的需求//2
		int j = 0;
		while (leftp[j].here != 0) {
			j++;
		}
		j = j - 1;
		Edge e1;
		int k = 0;
		diffT = 24;//在该城市的等待时间
		Left left1[11];
		for (int x = 0; x < 11; x++)
			left1[x] = leftp[x];
		int money1 = money;
		while (edges[here][2][k].target != 0 || k < 300) {
			if (edges[here][2][k].target == message.target) {//3
				if (edges[here][2][k].departure >= (leftp[j].inTime % 24)) {
					if ((edges[here][2][k].departure - (leftp[j].inTime % 24)) < diffT) {
						diffT = edges[here][2][k].departure - (leftp[j].inTime % 24);
						e1 = edges[here][2][k];
					}
				}
				else {
					if ((edges[here][2][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
						diffT = edges[here][2][k].departure + 24 - (leftp[j].inTime % 24);
						e1 = edges[here][2][k];
					}
				}
			}
			k++;
		}

		//保存
		int ti = 100;
		if (diffT != 24) {
			left1[j].outTime = left1[j].inTime + diffT;
			left1[j + 1].inTime = left1[j].outTime + e1.spendtime;
			ti = left1[j + 1].inTime;
			money1 = money1 + e1.money;
			left1[j].outType = 2;
		}


		Edge e2;
		//选边（火车）
		k = 0;
		diffT = 24;
		Left left2[11];
		for (int x = 0; x < 11; x++)
			left2[x] = leftp[x];
		int money2 = money;
		while (edges[here][1][k].target != 0 || k < 300) {
			if (edges[here][1][k].target == message.target) {//4
				if (edges[here][1][k].departure >= (leftp[j].inTime % 24)) {
					if ((edges[here][1][k].departure - (leftp[j].inTime % 24)) < diffT) {
						diffT = edges[here][1][k].departure - (leftp[j].inTime % 24);
						e2 = edges[here][1][k];
					}
				}
				else {
					if ((edges[here][1][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
						diffT = edges[here][1][k].departure + 24 - (leftp[j].inTime % 24);
						e2 = edges[here][1][k];
					}
				}
			}
			k++;
		}

		//判断
		int tj = 100;
		if (diffT != 24) {
			left2[j].outTime = left2[j].inTime + diffT;
			left2[j + 1].inTime = left2[j].outTime + e2.spendtime;
			tj = left2[j + 1].inTime;
			money2 = money2 + e2.money;
			left2[j].outType = 1;
		}

		//移动
		if (ti != 100 || tj != 100) {
			if (ti < tj) {
				for (int x = 0; x < 11; x++)
					leftp[x] = left1[x];
				money = money1;
			}
			else {
				for (int x = 0; x < 11; x++)
					leftp[x] = left2[x];
				money = money2;
			}
			leftp[j].next = leftp[j + 1].here = message.target;
			here = message.target;
			calMinTime(here, leftp, money, lf - 1);
		}
	}
	else {
		int i = 0;//下一个城市cities号
		int j = 0;//当前路径号
		int k = 0;//计数器
		int a = 0;//判断是否去过该城市
		while (cities[here].out[i] != 0) {//总循环
			a = 0; j = 0;
			while (leftp[j].here != 0) {
				if (cities[here].out[i] == leftp[j].here)//判断是否去过该城市
					a = 1;
				if (cities[here].out[i] == 0)//结束循环
					a = 1;
				j++;
			}
			j = j - 1;
		
			if (a == 0) {//如果cities[here].out[i]没来过
				//选边(飞机)
				Edge e1;
				k = 0;
				diffT = 24;//在该城市的等待时间
				Left left1[11];
				for (int x = 0; x < 11; x++)
					left1[x] = leftp[x];
				int money1 = money;
				while (edges[here][2][k].target != 0 || k < 300) {
					if (edges[here][2][k].target == cities[here].out[i]) {
						if (edges[here][2][k].departure >= (leftp[j].inTime % 24)) {
							if ((edges[here][2][k].departure - (leftp[j].inTime % 24)) < diffT) {
								diffT = edges[here][2][k].departure - (leftp[j].inTime % 24);
								e1 = edges[here][2][k];
							}
						}
						else {
							if ((edges[here][2][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
								diffT = edges[here][2][k].departure + 24 - (leftp[j].inTime % 24);
								e1 = edges[here][2][k];
							}
						}
					}
					k++;
				}

				//保存
				int ti = 100;
				if (diffT != 24) {
					left1[j].outTime = left1[j].inTime + diffT;
					left1[j + 1].inTime = left1[j].outTime + e1.spendtime;
					ti = left1[j + 1].inTime;
					money1 = money1 + e1.money;
					left1[j].outType = 2;
				}


				Edge e2;
				//选边（火车）
				k = 0;
				diffT = 24;
				Left left2[11];
				for (int x = 0; x < 11; x++)
					left2[x] = leftp[x];
				int money2 = money;
				while (edges[here][1][k].target != 0 || k < 300) {
					if (edges[here][1][k].target == cities[here].out[i]) {
						if (edges[here][1][k].departure >= (leftp[j].inTime % 24)) {
							if ((edges[here][1][k].departure - (leftp[j].inTime % 24)) < diffT) {
								diffT = edges[here][1][k].departure - (leftp[j].inTime % 24);
								e2 = edges[here][1][k];
							}
						}
						else {
							if ((edges[here][1][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
								diffT = edges[here][1][k].departure + 24 - (leftp[j].inTime % 24);
								e2 = edges[here][1][k];
							}
						}
					}
					k++;
				}

				//判断
				int tj = 100;
				if (diffT != 24) {
					left2[j].outTime = left2[j].inTime + diffT;
					left2[j + 1].inTime = left2[j].outTime + e2.spendtime;
					tj = left2[j + 1].inTime;
					money2 = money2 + e2.money;
					left2[j].outType = 1;
				}

				//移动
				if (ti != 100 || tj != 100) {
					if (ti < tj) {
						for (int x = 0; x < 11; x++)
							leftp[x] = left1[x];
						money = money1;
					}
					else {
						for (int x = 0; x < 11; x++)
							leftp[x] = left2[x];
						money = money2;
					}
					leftp[j].next = leftp[j + 1].here = cities[here].out[i];
					here = cities[here].out[i];
					calMinTime(here, leftp, money, lf - 1);
				}


				//还原
				for (int i = 0; i < 11; i++)
					leftp[i] = l[i];
				here = h;
				money = m;
			}
			i++;
		}
	}
}

void calMinMoney(int h, Left *l, int m, int lf) {//最少价格
	//思路：先看汽车，没有就火车
	Left leftp[12];
	for (int i = 0; i < 12; i++) {
		leftp[i] = l[i];
	}
	int here = h;
	int money = m;
	Edge e;

	//终结条件
	if ((here == message.target) && (lf == 1)) {
		int j = 0;//当前路径号
		while (leftp[j].here != 0) {
			j++;
		}
		j = j - 1;
		if (money < minM) {
			if (lf == 1) {
				leftp[j].next = 0;
				for (int i = 0; i < 11; i++) {
					leftOutput[i] = leftp[i];
				}
				minM = money;
				moneyOutput = m;
			}
		}
		return;
	}
	else if ((lf == 2) && (message.from == message.target)) {
		int j = 0;//当前路径号
		while (leftp[j].here != 0) {
			j++;
		}
		j = j - 1;
		int k = 0;

		k = 0;
		int moneyHi = 10000;
		int moneyHj = 10000;
		int diffT = 24;
		while (edges[here][0][k].target != 0 || k < 300) {
			if (edges[here][0][k].target == message.target) {//6
				if (edges[here][0][k].departure >= (leftp[j].inTime % 24)) {
					if ((edges[here][0][k].departure - (leftp[j].inTime % 24)) < diffT) {
						if (edges[here][0][k].money < moneyHi) {
							diffT = edges[here][0][k].departure - (leftp[j].inTime % 24);
							moneyHi = edges[here][0][k].money;
							e = edges[here][0][k];
						}
					}
				}
				else {
					if ((edges[here][0][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
						if (edges[here][0][k].money < moneyHi) {
							moneyHi = edges[here][0][k].money;
							diffT = edges[here][0][k].departure + 24 - (leftp[j].inTime % 24);
							e = edges[here][0][k];
						}
					}
				}
			}
			k++;
		}

		//保存
		if (moneyHi != 10000) {
			leftp[j].outTime = leftp[j].inTime + diffT;
			leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
			money = money + e.money;
			leftp[j].outType = 0;
		}

		else {
			//选边（火车）
			k = 0;
			diffT = 24;
			while (edges[here][1][k].target != 0 || k < 300) {
				if (edges[here][1][k].target == message.target) {//7
					if (edges[here][1][k].departure >= (leftp[j].inTime % 24)) {
						if ((edges[here][1][k].departure - (leftp[j].inTime % 24)) < diffT) {
							if (edges[here][1][k].money < moneyHi) {
								diffT = edges[here][1][k].departure - (leftp[j].inTime % 24);
								moneyHi = edges[here][1][k].money;
								e = edges[here][1][k];
							}
						}
					}
					else {
						if ((edges[here][1][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
							if (edges[here][1][k].money < moneyHi) {
								moneyHi = edges[here][1][k].money;
								diffT = edges[here][1][k].departure + 24 - (leftp[j].inTime % 24);
								e = edges[here][1][k];
							}
						}
					}
				}
				k++;
			}

			//保存
			if (moneyHj != 10000) {
				money = money + e.money;
				leftp[j].outTime = leftp[j].inTime + diffT;
				leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
				leftp[j].outType = 1;

			}
		}


		//移动
		if (moneyHi != 10000 || moneyHj != 10000) {
			leftp[j].next = leftp[j + 1].here = message.target;//8
			here = message.target;
			calMinMoney(here, leftp, money, lf - 1);
		}
	}
	else {
		int i = 0;//城市号
		int j = 0;//当前路径号
		int k = 0;//计数器
		int a = 0;//判断是否去过该城市
		int moneyHi = 10000;
		int moneyHj = 10000;
		int diffT = 24;
		while (cities[here].out[i] != 0) {//总循环
			a = 0; j = 0;
			while (leftp[j].here != 0) {
				if (cities[here].out[i] == leftp[j].here)//判断是否去过该城市
					a = 1;
				if (cities[here].out[i] == 0)
					a = 1;
				j++;
			}
			j = j - 1;

			if (a == 0) {//如果cities[here].out[i]没来过
				//选边(汽车)
				k = 0;
				moneyHi = 10000;
				moneyHj = 10000;
				diffT = 24;
				while (edges[here][0][k].target != 0 || k < 300) {
					if (edges[here][0][k].target == cities[here].out[i]) {
						if (edges[here][0][k].departure >= (leftp[j].inTime % 24)) {
							if ((edges[here][0][k].departure - (leftp[j].inTime % 24)) < diffT) {
								if (edges[here][0][k].money < moneyHi) {
									diffT = edges[here][0][k].departure - (leftp[j].inTime % 24);
									moneyHi = edges[here][0][k].money;
									e = edges[here][0][k];
								}
							}
						}
						else {
							if ((edges[here][0][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
								if (edges[here][0][k].money < moneyHi) {
									moneyHi = edges[here][0][k].money;
									diffT = edges[here][0][k].departure + 24 - (leftp[j].inTime % 24);
									e = edges[here][0][k];
								}
							}
						}
					}
					k++;
				}

				//保存
				if (moneyHi != 10000) {
					leftp[j].outTime = leftp[j].inTime + diffT;
					leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
					money = money + e.money;
					leftp[j].outType = 0;
				}

				else {
					//选边（火车）
					k = 0;
					diffT = 24;
					while (edges[here][1][k].target != 0 || k < 300) {
						if (edges[here][1][k].target == cities[here].out[i]) {
							if (edges[here][1][k].departure >= (leftp[j].inTime % 24)) {
								if ((edges[here][1][k].departure - (leftp[j].inTime % 24)) < diffT) {
									if (edges[here][1][k].money < moneyHi) {
										diffT = edges[here][1][k].departure - (leftp[j].inTime % 24);
										moneyHi = edges[here][1][k].money;
										e = edges[here][1][k];
									}
								}
							}
							else {
								if ((edges[here][1][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
									if (edges[here][1][k].money < moneyHi) {
										moneyHi = edges[here][1][k].money;
										diffT = edges[here][1][k].departure + 24 - (leftp[j].inTime % 24);
										e = edges[here][1][k];
									}
								}
							}
						}
						k++;
					}

					//保存
					if (moneyHj != 10000) {
						money = money + e.money;
						leftp[j].outTime = leftp[j].inTime + diffT;
						leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
						leftp[j].outType = 1;
						
					}
				}


				//移动
				if (moneyHi != 10000 || moneyHj != 10000) {
					leftp[j].next = leftp[j + 1].here = cities[here].out[i];
					here = cities[here].out[i];
					calMinMoney(here, leftp, money, lf - 1);
				}


				//还原
				for (int i = 0; i < 11; i++)
					leftp[i] = l[i];
				here = h;
				money = m;
			}
			i++;
		}
	}
}

void calComplex(int h, Left *l, int m, int lf) {//限时最少费用
	//思路：算最短时间，一旦价格超过设定价格，就停止此分支
	Left leftp[12];
	for (int i = 0; i < 12; i++) {
		leftp[i] = l[i];
	}
	int here = h;
	int money = m;
	Edge e;

	//终结条件
	if ((here == message.target) && (lf == 1)) {
		if (lf == 1) {
			int j = 0;
			while (leftp[j].here != 0) {
				j++;
			}
			j = j - 1;
			if ((money < minM) && (leftp[j].inTime <= message.mode3Time)) {
				leftp[j].next = 0;
				for (int i = 0; i < 11; i++) {
					leftOutput[i] = leftp[i];
				}
				minM = money;
				moneyOutput = m;
				ift = 1;
			}
		}
		return;
	}
	else if ((lf == 2) && (message.from == message.target)) {
		int j = 0;
		while (leftp[j].here != 0) {
			j++;
		}
		j = j - 1;
		int k = 0;

		k = 0;
		int moneyH = 10000;
		int diffT = 24;
		while (edges[here][2][k].target != 0 || k < 300) {
			if (edges[here][2][k].target == message.target) {//9
				if (edges[here][2][k].departure >= (leftp[j].inTime % 24)) {
					if ((edges[here][2][k].departure - (leftp[j].inTime % 24)) < diffT) {
						if (edges[here][2][k].money < moneyH) {
							diffT = edges[here][2][k].departure - (leftp[j].inTime % 24);
							moneyH = edges[here][2][k].money;
							e = edges[here][2][k];
						}
					}
				}
				else {
					if ((edges[here][2][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
						if (edges[here][2][k].money < moneyH) {
							moneyH = edges[here][2][k].money;
							diffT = edges[here][2][k].departure + 24 - (leftp[j].inTime % 24);
							e = edges[here][2][k];
						}
					}
				}
			}
			k++;
		}

		//保存
		if ((moneyH != 10000) && ((money + e.money) < minM)) {
			leftp[j].outTime = leftp[j].inTime + diffT;
			leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
			money = money + e.money;
			leftp[j].outType = 2;
			leftp[j].next = leftp[j + 1].here = message.target;
			here = message.target;
			if (leftp[j + 1].inTime <= message.mode3Time)
				calComplex(here, leftp, money, lf - 1);//飞机
			//还原
			for (int i = 0; i < 11; i++)
				leftp[i] = l[i];
			here = h;
			money = m;
		}

		//选边（火车）
		k = 0;
		moneyH = 10000;
		diffT = 24;
		while (edges[here][1][k].target != 0 || k < 300) {
			if (edges[here][1][k].target == message.target) {
				if (edges[here][1][k].departure >= (leftp[j].inTime % 24)) {
					if ((edges[here][1][k].departure - (leftp[j].inTime % 24)) < diffT) {
						if (edges[here][1][k].money < moneyH) {
							diffT = edges[here][1][k].departure - (leftp[j].inTime % 24);
							moneyH = edges[here][1][k].money;
							e = edges[here][1][k];
						}
					}
				}
				else {
					if ((edges[here][1][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
						if (edges[here][1][k].money < moneyH) {
							moneyH = edges[here][1][k].money;
							diffT = edges[here][1][k].departure + 24 - (leftp[j].inTime % 24);
							e = edges[here][1][k];
						}
					}
				}
			}
			k++;
		}

		//保存
		if ((moneyH != 10000) && ((money + e.money) < minM)) {
			leftp[j].outTime = leftp[j].inTime + diffT;
			leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
			money = money + e.money;
			leftp[j].outType = 1;
			leftp[j].next = leftp[j + 1].here = message.target;
			here = message.target;
			if (leftp[j + 1].inTime <= message.mode3Time)
				calComplex(here, leftp, money, lf - 1);//火车
			//还原
			for (int i = 0; i < 11; i++)
				leftp[i] = l[i];
			here = h;
			money = m;
		}

		//选边(汽车)
		k = 0;
		moneyH = 10000;
		diffT = 24;
		while (edges[here][0][k].target != 0 || k < 300) {
			if (edges[here][0][k].target == message.target) {
				if (edges[here][0][k].departure >= (leftp[j].inTime % 24)) {
					if ((edges[here][0][k].departure - (leftp[j].inTime % 24)) < diffT) {
						if (edges[here][0][k].money < moneyH) {
							diffT = edges[here][0][k].departure - (leftp[j].inTime % 24);
							moneyH = edges[here][0][k].money;
							e = edges[here][0][k];
						}
					}
				}
				else {
					if ((edges[here][0][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
						if (edges[here][0][k].money < moneyH) {
							moneyH = edges[here][0][k].money;
							diffT = edges[here][0][k].departure + 24 - (leftp[j].inTime % 24);
							e = edges[here][0][k];
						}
					}
				}
			}
			k++;
		}

		//保存
		if ((moneyH != 10000) && ((money + e.money) < minM)) {
			leftp[j].outTime = leftp[j].inTime + diffT;
			leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
			money = money + e.money;
			leftp[j].outType = 0;
			leftp[j].next = leftp[j + 1].here = message.target;
			here = message.target;
			if (leftp[j + 1].inTime <= message.mode3Time)
				calComplex(here, leftp, money, lf - 1);//汽车
		}
	}
	else {
		int i = 0;//城市号
		int j = 0;//当前路径号
		int k = 0;//计数器
		int a = 0;//判断是否去过该城市
		int moneyH = 10000;
		int diffT = 24;
		while (cities[here].out[i] != 0) {//总循环
			a = 0; j = 0;
			while (leftp[j].here != 0) {
				if (cities[here].out[i] == leftp[j].here)//判断是否去过该城市
					a = 1;
				if (cities[here].out[i] == 0)
					a = 1;
				j++;
			}
			j = j - 1;

			if (a == 0) {//如果cities[here].out[i]没来过

				//选边（飞机）
				k = 0;
				moneyH = 10000;
				diffT = 24;
				while (edges[here][2][k].target != 0 || k < 300) {
					if (edges[here][2][k].target == cities[here].out[i]) {
						if (edges[here][2][k].departure >= (leftp[j].inTime % 24)) {
							if ((edges[here][2][k].departure - (leftp[j].inTime % 24)) < diffT) {
								if (edges[here][2][k].money < moneyH) {
									diffT = edges[here][2][k].departure - (leftp[j].inTime % 24);
									moneyH = edges[here][2][k].money;
									e = edges[here][2][k];
								}
							}
						}
						else {
							if ((edges[here][2][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
								if (edges[here][2][k].money < moneyH) {
									moneyH = edges[here][2][k].money;
									diffT = edges[here][2][k].departure + 24 - (leftp[j].inTime % 24);
									e = edges[here][2][k];
								}
							}
						}
					}
					k++;
				}

				//保存
				if ((moneyH != 10000) && ((money + e.money) < minM)) {
					leftp[j].outTime = leftp[j].inTime + diffT;
					leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
					money = money + e.money;
					leftp[j].outType = 2;
					leftp[j].next = leftp[j + 1].here = cities[here].out[i];
					here = cities[here].out[i];
					if (leftp[j + 1].inTime <= message.mode3Time)
						calComplex(here, leftp, money, lf - 1);//飞机
					//还原
					for (int i = 0; i < 11; i++)
						leftp[i] = l[i];
					here = h;
					money = m;
				}

				//选边（火车）
				k = 0;
				moneyH = 10000;
				diffT = 24;
				while (edges[here][1][k].target != 0 || k < 300) {
					if (edges[here][1][k].target == cities[here].out[i]) {
						if (edges[here][1][k].departure >= (leftp[j].inTime % 24)) {
							if ((edges[here][1][k].departure - (leftp[j].inTime % 24)) < diffT) {
								if (edges[here][1][k].money < moneyH) {
									diffT = edges[here][1][k].departure - (leftp[j].inTime % 24);
									moneyH = edges[here][1][k].money;
									e = edges[here][1][k];
								}
							}
						}
						else {
							if ((edges[here][1][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
								if (edges[here][1][k].money < moneyH) {
									moneyH = edges[here][1][k].money;
									diffT = edges[here][1][k].departure + 24 - (leftp[j].inTime % 24);
									e = edges[here][1][k];
								}
							}
						}
					}
					k++;
				}

				//保存
				if ((moneyH != 10000) && ((money + e.money) < minM)) {
					leftp[j].outTime = leftp[j].inTime + diffT;
					leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
					money = money + e.money;
					leftp[j].outType = 1;
					leftp[j].next = leftp[j + 1].here = cities[here].out[i];
					here = cities[here].out[i];
					if (leftp[j + 1].inTime <= message.mode3Time)
						calComplex(here, leftp, money, lf - 1);//火车
					//还原
					for (int i = 0; i < 11; i++)
						leftp[i] = l[i];
					here = h;
					money = m;
				}

				//选边(汽车)
				k = 0;
				moneyH = 10000;
				diffT = 24;
				while (edges[here][0][k].target != 0 || k < 300) {
					if (edges[here][0][k].target == cities[here].out[i]) {
						if (edges[here][0][k].departure >= (leftp[j].inTime % 24)) {
							if ((edges[here][0][k].departure - (leftp[j].inTime % 24)) < diffT) {
								if (edges[here][0][k].money < moneyH) {
									diffT = edges[here][0][k].departure - (leftp[j].inTime % 24);
									moneyH = edges[here][0][k].money;
									e = edges[here][0][k];
								}
							}
						}
						else {
							if ((edges[here][0][k].departure + 24 - (leftp[j].inTime % 24)) < diffT) {
								if (edges[here][0][k].money < moneyH) {
									moneyH = edges[here][0][k].money;
									diffT = edges[here][0][k].departure + 24 - (leftp[j].inTime % 24);
									e = edges[here][0][k];
								}
							}
						}
					}
					k++;
				}

				//保存
				if ((moneyH != 10000) && ((money + e.money) < minM)) {
					leftp[j].outTime = leftp[j].inTime + diffT;
					leftp[j + 1].inTime = leftp[j].outTime + e.spendtime;
					money = money + e.money;
					leftp[j].outType = 0;
					leftp[j].next = leftp[j + 1].here = cities[here].out[i];
					here = cities[here].out[i];
					if (leftp[j + 1].inTime <= message.mode3Time)
						calComplex(here, leftp, money, lf - 1);//汽车
					//还原
					for (int i = 0; i < 11; i++)
						leftp[i] = l[i];
					here = h;
					money = m;
				}

			}
			i++;
		}
	}
	
	
}