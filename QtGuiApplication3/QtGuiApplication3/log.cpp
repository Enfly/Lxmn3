#include "main.h"
#include <iostream>
#include <fstream>

void logging(int mode) {
	ofstream logl("log.txt", ios::app);
	ofstream fout;

	if (mode == 0) {//�û���¼ log
		logl << year << ". " << month << ". " << date << "  " << hour << endl;
		logl << "�û�" << user << "��¼" << endl;
	}
	if (mode == -1) {//�û��ǳ� log
		logl << year << ". " << month << ". " << date << "  " << hour << endl;
		logl << "�û�" << user << "�ǳ�" << endl;


		if (user == 1)
			fout.open("user1.txt", ios::app);
		if (user == 2)
			fout.open("user2.txt", ios::app);
		if (user == 3)
			fout.open("user3.txt", ios::app);
		int i = 0;
		if (position.from != message.target) {
			fout << position.from<<" ";
			fout << position.to << " ";
			fout << year << " ";
			fout << month << " ";
			fout << date << endl;
		}
		while (leftOutput[i].here != 0) {
			fout << leftOutput[i].here << " ";
			fout << leftOutput[i].next << " ";
			fout << leftOutput[i].inTime << " ";
			fout << leftOutput[i].outTime << " ";
			fout << leftOutput[i].outType <<endl;
			i++;
		}
	}
	if (mode == 1) {//�û��������Ҫ�� log
		logl << year << ". " << month << ". " << date << "  " << hour << endl;
		logl << endl << "�û�" << user << "�������Ҫ��" << endl;
		logl << "\t��㣺";
		switch (message.from) {
		case 1:logl << "����"; break;
		case 2:logl << "���"; break;
		case 3:logl << "֣��"; break;
		case 4:logl << "����"; break;
		case 5:logl << "�Ͼ�"; break;
		case 6:logl << "�Ϻ�"; break;
		case 7:logl << "�人"; break;
		case 8:logl << "��ɳ"; break;
		case 9:logl << "�ɶ�"; break;
		case 10:logl << "����";
		}
		logl << "\t�յ㣺";
		switch (message.target) {
		case 1:logl << "����"; break;
		case 2:logl << "���"; break;
		case 3:logl << "֣��"; break;
		case 4:logl << "����"; break;
		case 5:logl << "�Ͼ�"; break;
		case 6:logl << "�Ϻ�"; break;
		case 7:logl << "�人"; break;
		case 8:logl << "��ɳ"; break;
		case 9:logl << "�ɶ�"; break;
		case 10:logl << "����";
		}
		logl << endl;
		logl << "\t;������Ϊ�� ";
		int i = 0;
		while (message.pass[i] != 0) {
			switch (message.pass[i]) {
			case 1:logl << "����"; break;
			case 2:logl << "���"; break;
			case 3:logl << "֣��"; break;
			case 4:logl << "����"; break;
			case 5:logl << "�Ͼ�"; break;
			case 6:logl << "�Ϻ�"; break;
			case 7:logl << "�人"; break;
			case 8:logl << "��ɳ"; break;
			case 9:logl << "�ɶ�"; break;
			case 10:logl << "����";
			}
			logl << " ";
			i++;
		}
		logl << endl;
		logl << "����ģʽΪ�� " << endl;
		switch (message.calMode) {
		case 1:logl << "���ʱ��" << endl; break;
		case 2:logl << "���ټ۸�" << endl; break;
		case 3:
			logl << "��ʱ���ٷ���" << endl;
			logl << "ʱ��Ϊ" << message.mode3Time << "Ԫ" << endl;
		}
	}
	if (mode == 2) {//����������� log user
		logl << year << ". " << month << ". " << date << "  " << hour << endl;
		//��Ҫ��
		logl << "����������ɣ�Ϊ��" << endl;
		int i = 0;
		int a, b, da, db;
		a = b = 0;
		while (leftOutput[i].next != 0) {
			a = leftOutput[i].inTime % 24;
			da = (leftOutput[i].inTime / 24) + 1;
			logl << "�� " << da << "���" << a << "ʱ�� ";
			switch (leftOutput[i].here) {
			case 1:logl << "����"; break;
			case 2:logl << "���"; break;
			case 3:logl << "֣��"; break;
			case 4:logl << "����"; break;
			case 5:logl << "�Ͼ�"; break;
			case 6:logl << "�Ϻ�"; break;
			case 7:logl << "�人"; break;
			case 8:logl << "��ɳ"; break;
			case 9:logl << "�ɶ�"; break;
			case 10:logl << "����";
			}
			logl << endl;

			b = leftOutput[i].outTime % 24;
			db = (leftOutput[i].outTime / 24) + 1;
			logl << "�ڵ� " << db << " ��� " << b << " ʱ���� ";
			switch (leftOutput[i].outType) {
			case 0:logl << "����"; break;
			case 1:logl << "��"; break;
			case 2:logl << "�ɻ�";
			}
			logl << " ȥ�� ";
			switch (leftOutput[i].next) {
			case 1:logl << "����"; break;
			case 2:logl << "���"; break;
			case 3:logl << "֣��"; break;
			case 4:logl << "����"; break;
			case 5:logl << "�Ͼ�"; break;
			case 6:logl << "�Ϻ�"; break;
			case 7:logl << "�人"; break;
			case 8:logl << "��ɳ"; break;
			case 9:logl << "�ɶ�"; break;
			case 10:logl << "����";
			}

			i++;
		}
		logl << endl;
		a = leftOutput[i].inTime % 24;
		da = (leftOutput[i].inTime / 24) + 1;
		logl << "�� " << da << "���" << a << "ʱ�����յ� ";
		switch (leftOutput[i].here) {
		case 1:logl << "����"; break;
		case 2:logl << "���"; break;
		case 3:logl << "֣��"; break;
		case 4:logl << "����"; break;
		case 5:logl << "�Ͼ�"; break;//���Ǻ���
		case 6:logl << "�Ϻ�"; break;
		case 7:logl << "�人"; break;
		case 8:logl << "��ɳ"; break;
		case 9:logl << "�ɶ�"; break;
		case 10:logl << "����";
		}
		logl << endl;

		//user **************************************************************
		if (user == 1)
			fout.open("user1.txt", ios::trunc);
		if (user == 2)
			fout.open("user2.txt", ios::trunc);
		if (user == 3)
			fout.open("user3.txt", ios::trunc);
			fout << 1 << " ";
			fout << moneyOutput << endl;
			fout << position.from << " ";//��Ҫ����user2.txt�ĸ�ʽ�޸�
			fout << position.to << " ";
			fout << year << " ";
			fout << month << " ";
			fout << date<<endl;
		i = 0;
	}
	if (mode == 3) {//�û��ƶ� log
		int i, flage;
		if(userEnd==1)
		{
				if (user == 1)
					fout.open("user1.txt", ios::trunc);
				if (user == 2)
					fout.open("user2.txt", ios::trunc);
				if (user == 3)
					fout.open("user3.txt", ios::trunc);
				fout << 0<<endl;
			logl << year << ". " << month << ". " << date << "  " << hour << endl;
			logl << "�û�" << user << "������";
			switch (position.from) {
			case 1:logl << "����"; break;
			case 2:logl << "���"; break;
			case 3:logl << "֣��"; break;
			case 4:logl << "����"; break;
			case 5:logl << "�Ͼ�"; break;
			case 6:logl << "�Ϻ�"; break;
			case 7:logl << "�人"; break;
			case 8:logl << "��ɳ"; break;
			case 9:logl << "�ɶ�"; break;
			case 10:logl << "����";
			}
			logl << endl;
		}
		else
		{
			logl << "�û�" << user << "���ڴ�" << position.from << "ǰ��" << position.to << endl;
		}

		//��Ҫд

		//��λ��Ȼ��ʼ�������н�ͨ��ʽ��
	}

	logl.close();
	fout.close();
}