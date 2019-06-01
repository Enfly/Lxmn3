#ifndef _MAIN_H//��ֹͷ�ļ��ظ�������������ǰ��
#define _MAIN_H
#include <iostream>

using namespace std;

/**************************************************
���ݽṹ������
**************************************************/

//���У�
typedef enum Cities {
	None = 0,
	Beijing = 1, //����
	Tianjin = 2, //���
	Zhengzhou = 3, //֣��
	Xian = 4, //����
	Nanjing = 5, //�Ͼ�
	Shanghai = 6, //�Ϻ�
	Wuhan = 7, //�人
	Changsha = 8,  //��ɳ
	Chengdu = 9, //�ɶ�
	Guangzhou = 10 //����
}City;

//���з�ʽ��
typedef enum Types { bus = 0, train, plane }Type;

//�ߣ�
class Edge {
public:
	int target;//�������
	int departure;//����ʱ��
	int spendtime;//����ʱ��
	int money;//Ǯ
	Edge() {//���캯��
		target = 0;
		departure = 0;
		spendtime = 0;
		money = 0;
	}
};
//���
extern Edge edges[10][3][300];//�������У���ͨ��ʽ

class Message {//��Ϣ
public:
	int from;
	int target;
	int pass[10];//·��,�����β
	int calMode;//ģʽ��1.���ʱ��	2.���ټ۸�	3.��ʱ���ٷ���
	int mode3Time;//һ���۸������ʱ��ļ۸�
	Message() {//���캯��
		from = 0;
		target = 0;
		for (int i = 0; i < 10; i++) {

			pass[i] = 0;
		}
		calMode = 0;
		mode3Time = 0;
	}
};
extern Message message; //�洫����Ϣ

class Left {//·��
public:
	int here;
	int next;//��һ��Ŀ�ĵ�,�յ�Ϊ0
	int inTime;//����ʱ�䣬���Ϊhour
	int outTime;//�뿪ʱ��
	int outType;//�뿪���з�ʽ
	Left() {//���캯��
		here = 0;
		next = 0;
		inTime = 0;
		outTime = 0;
		outType = 0;
	}
};
extern Left leftOutput[12];//·�����
extern int moneyOutput;//�������


class Position {//λ��
public:
	int from;
	int to;
	Position() {//���캯��
		from = 0;
		to = 0;
	}
};
extern Position position;//ʵʱλ��
/**************************************************
����������
**************************************************/

extern void readLog(void);//�����ݣ��𳵵ȣ���initģ�飩
extern int readUser(int u);//���û����ݣ�initģ�飩����1��ʾ�����û��ϴεķ���,����30������п����޷��ж�
extern void input(int cityStart, int cityTarget, int cityPass[9], int modeS, int mode3Money);//����(calculateģ��)
extern int Cal(int hour);//����(calculateģ��)����0˵���������������
void update1(void);//��ʱ������ÿ�λ��
extern void logging(int mode);//��־
/**************************************************
����ȫ�ֱ���������
**************************************************/

extern int year;//ʱ��
extern int month;
extern int date;
extern int hour;

extern int userEnd;

extern int user;//�û���
#endif//��ֹͷ�ļ��ظ����������������
