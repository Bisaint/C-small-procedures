#include"KIKI.h"
using namespace std;
#define abc "E:\abc"
#pragma warning(836)
struct ARRAY
{
	double aa[4][4] = {0};
	int a[3] = { 0,0,0 }, i[3] = { 0,0,0 };
	char str[100] = {0};

}ARRAY;

struct NUM
{
	int length = 1000;
	double mm1=0;
	int b=0;
	int sum1 = 0;
	int sum2 = 0;
	int x = 100;
	int c=0, d=0, e=0, f=0, g=0;
	int k=0;
	int h=0, j=0, n=0, l=0;
	int m=0, o=0, q=0;
	int p=0, r=0, s=0;
	int zzz=0;
	int bo = 10;
	int bo1 = 10;
	int bbb=0;
}NUM;
int fangzhen();

int ss();
int kk();

int while1();
int while2();

int for1();

int dowhile();
int dowhile2();

//计算作业2019.11.1⇣
int zuoye1();
int zuoye2();
int zuoye3();
int zuoye4();
int zuoye5();
int zuoye6();
int zuoye7();

//方阵计算作业2019.11.17⇣
int x1();
int x2();
int x3();
int x4();
int x5();
int xz();
int xz1();

int zz();//2019.11.1作业
int zz0();//2019.11.17作业
int zz1();//2020.6.22作业

void bubble1(double aa[4][4], double* max);  //二维数组冒泡算法
void GoToxy(int x, int y);//锁定位置
void ColorChoose(int color);  //颜色选择函数
void HideCursor(); //隐藏光标
void ClearMainScreen();//清屏
void modeset(int w, int h);

void bb();
void jingru();

int ID();

void bb() {
	int K = 200;
	jingru();
	Sleep(K);
	system("cls");
	Sleep(K);
	jingru();
	Sleep(K);
	system("cls");
	Sleep(K);
	jingru();
	Sleep(K);
	system("cls");
	Sleep(K);
	jingru();
	Sleep(5000);
	system("cls");
	Sleep(K);
}
int main() {
	modeset(115,30);
	bb();
	while (1) {
		ss();
	}
	}
	int ss() {
		GoToxy(90, 2);
		ColorChoose(1);
		cout << "毕圣的作业系统" << endl;
		GoToxy(92, 3);
		ColorChoose(1);
		cout << "版本：3.80" << endl;
		GoToxy(84, 5);
		ColorChoose(3);
		cout << "本套作业系统由你们超伟大的" << endl;
		GoToxy(84, 6);
		ColorChoose(3);
		cout << "毕圣爸爸制作。" << endl;
		GoToxy(84, 8);
		ColorChoose(4);
		cout << "他的学号是：20191205911" << endl;
		GoToxy(84, 10);
		ColorChoose(3);
		cout << "接下来，请各位尽情使用吧！" << endl;
		GoToxy(84, 13);
		ColorChoose(2);
		cout << "你想看爷的第几次作业呢？" << endl;
		GoToxy(84, 15);
		ColorChoose(3);
		cout << "输入“1”:2019.11.1" << endl;
		GoToxy(84, 16);
		ColorChoose(3);
		cout << "输入“2”:2019.11.17" << endl;
		GoToxy(84, 17);
		ColorChoose(3);
		cout << "输入“3”:2020.6.22" << endl;
		GoToxy(84, 19);
		ColorChoose(1);
		cout << "输入“4”清屏";
		GoToxy(84, 21);
		ColorChoose(3);
		cout << "请输入：";
		cin >> NUM.zzz;
		ClearMainScreen();
		switch (NUM.zzz)
		{
		case(1):zz(); break;
		case(2):zz0(); break;
		case(3):zz1(); break;
		case(4):system("cls"); break;
		default:GoToxy(20, 18);ColorChoose(3); cout << "大哥让你输个数字上面都标了，你看不懂么？？？" ;
			break;
		}
		return 0;
	
	}
	/*
	int zz()制作于2019.11.1
	*/
int zz() {
	GoToxy(25, 2);
	ColorChoose(3);
	cout << "你想看毕圣爸爸的哪一项作业呢？" << endl;
	GoToxy(27, 4);
	ColorChoose(3);
	cout << "输入你想看第几项作业渣渣：";
	GoToxy(4, 6);
	ColorChoose(3);
	cout << "1:用三种循环结构，求1000以内奇数的和。";
	GoToxy(4, 8);
	ColorChoose(3);
	cout << "2:用while,do-while循环求i-10的连加和，i由用户输入。";
	GoToxy(4, 10);
	ColorChoose(3);
	cout << "3:有一堆零件（100－200个之间），如果以4个零件为一组进行分组，则多2个零件；";
	GoToxy(4, 11);
	ColorChoose(3);
	cout << "如果以7个零件为一组进行分组，则多3个零件";
	GoToxy(4, 12);
	ColorChoose(3);
	cout << "如果以9个零件为一组进行分组，则多5个零件。编程求解这堆零件总数。";
	GoToxy(4, 14);
	ColorChoose(3);
	cout << "4:编写程序，求任意两个整数之间所有的素数。";
	GoToxy(4, 16);
	ColorChoose(3);
	cout << "5:打印贴墙正三角形";
	GoToxy(4, 18);
	ColorChoose(3);
	cout << "6:打印贴墙倒三角形";
	GoToxy(4, 20);
	ColorChoose(3);
	cout << "7:打印方正三角形";
	GoToxy(4, 22);
	ColorChoose(3);
	cout << "8:三角形系统";
	GoToxy(52, 4);
	cin >> NUM.zzz;
	ClearMainScreen();
    switch (NUM.zzz)
	{
	case(1):zuoye1(); break;
	case(2):zuoye2(); break;
	case(3):zuoye3(); break;
	case(4):zuoye4(); break;
	case(5):zuoye5(); break;
	case(6):zuoye6(); break;
	case(7):zuoye7(); break;
	case(8):kk(); break;
	default:
		GoToxy(10, 10);
		ColorChoose(4);
		cout << "大哥让你输个数字，旁边都标了，你看不懂么？？？" << endl;
		break;
	}
	return 0;
}
/**********************************************************************************************/
int zuoye1() {
	GoToxy(33, 2);
	ColorChoose(3);
	cout << "以下是作业1的内容：" << endl;
	GoToxy(25,3);
	ColorChoose(3);
	cout << "用三种循环结构，求1000以内奇数的和。" << endl;
	GoToxy(25, 5);
	ColorChoose(3);
	cout << while1();
	GoToxy(25, 7);
	ColorChoose(3);
	cout << for1() ;
	GoToxy(25, 9);
	ColorChoose(3);
	cout << dowhile() ;
	return 0;
}

	int while1() {
		cout << "用while函数完成1000以内奇数之和~" ;
		while (ARRAY.i[0] < NUM.length)
		{
			if (ARRAY.i[0] % 2 != 0) {
				ARRAY.a[0] += ARRAY.i[0];
			}
			ARRAY.i[0]++;
		}
		GoToxy(39, 6);
		ColorChoose(4);
		return ARRAY.a[0];
	}
	int for1() {
		cout << "用for函数完成1000以内奇数之和~" << endl;
		for (ARRAY.i[1] = 0; ARRAY.i[1] < NUM.length; ARRAY.i[1]++)
		{
			if (ARRAY.i[1] % 2 != 0) {
				ARRAY.a[1] += ARRAY.i[1];
			}
		}
		GoToxy(39, 8);
		ColorChoose(4);
		return ARRAY.a[1];
	}
	int dowhile() {
		cout << "用do while函数完成1000以内奇数之和~" << endl;
		do
		{
			if (ARRAY.i[2] % 2 != 0) {
				ARRAY.a[2] += ARRAY.i[2];
			}
			ARRAY.i[2]++;
		} while (ARRAY.i[2] < NUM.length);
		GoToxy(39, 10);
		ColorChoose(4);
		return ARRAY.a[2];
	}
	/******************************************************************************************/
	int zuoye2() {
		GoToxy(33, 2);
		ColorChoose(3);
		cout << "以下是作业2的内容：" << endl;
		GoToxy(21, 4);
		ColorChoose(3);
		cout << "用while,do-while循环求i-10的连加和，i由用户输入。" << endl;
		GoToxy(30, 6);
		ColorChoose(3);
		cout << "用while循环求i-10的连加和：" << endl;
		GoToxy(30, 7);
		ColorChoose(3);
		cout << while2() << endl;
		GoToxy(30, 10);
		ColorChoose(3);
		cout << "用do while循环求i-10的连加和：" << endl;
		GoToxy(30, 11);
		ColorChoose(3);
		cout << dowhile2()<< endl;
		return 0;
	}
	int while2() {
		cout << "作业2中 while需要输入的值：";
		cin >> NUM.b;
		while (NUM.b <= 10)
		{
			NUM.sum1 += NUM.b;
			NUM.b++;
		}
		GoToxy(43, 8);
		ColorChoose(4);
		return NUM.sum1;
	}
	int dowhile2() {
		cout << "作业2中do while需要输入的值：";
		cin >> NUM.b;
		do
		{
			NUM.sum2 += NUM.b;
			NUM.b++;
		} while (NUM.b <= 10);
		GoToxy(43, 12);
		ColorChoose(4);
		return NUM.sum2;
	}
	/***************************************************************************************/
	int zuoye3() {
		GoToxy(33, 2);
		ColorChoose(3);
		cout << "以下是作业3的内容：" << endl;
		GoToxy(4, 4);
		ColorChoose(3);
		cout << "有一堆零件（100－200个之间），如果以4个零件为一组进行分组，则多2个零件；" << endl;
		GoToxy(4, 5);
		ColorChoose(3);
		cout << "如果以7个零件为一组进行分组，则多3个零件" << endl;
		GoToxy(4, 6);
		ColorChoose(3);
		cout << "如果以9个零件为一组进行分组，则多5个零件。编程求解这堆零件总数。" << endl;
		GoToxy(37, 8);
		ColorChoose(3);
		cout << "零件总数为：" << endl;
		while (NUM.x<=200)
		{
			if (NUM.x % 4 == 2) {
				if (NUM.x % 7 == 3) {
					if (NUM.x % 9 == 5) {
						GoToxy(40, 9);
						ColorChoose(4);
						cout << NUM.x << endl;
					}
				}
			}
			NUM.x++;
		}
		return 0;
	}
	/***************************************************************************************/
	int zuoye4() {
		GoToxy(33, 2);
		ColorChoose(3);
		cout << "以下是作业4的内容：" << endl;
		GoToxy(23, 4);
		ColorChoose(3);
		cout << "编写程序，求任意两个整数之间所有的素数。" << endl;
		GoToxy(25, 6);
		ColorChoose(3);
		cout << "请依次输入两个整数(用空格隔开)：" << endl;
		GoToxy(58, 6);
		ColorChoose(3);
		cin >> NUM.c >> NUM.d;
		GoToxy(27, 8);
		ColorChoose(3);
		cout << "这两个数之间所有的素数分别为：" << endl;
		if (NUM.c > NUM.d) {
			NUM.g = NUM.c;
			NUM.c = NUM.d;
			NUM.d = NUM.g;
		}
		if (NUM.d>=2) {
			if (NUM.c >= 2) {
				for (NUM.e = NUM.c; NUM.e <= NUM.d; NUM.e++)
				{
					NUM.k = 0;
					for (NUM.f = 2; NUM.f < NUM.e; NUM.f++)
					{
						if (NUM.e % NUM.f == 0)
							NUM.k++;
					}
					if (NUM.k == 0) {
						GoToxy(40, NUM.bo);
						ColorChoose(4);
						cout << NUM.e << endl;
						NUM.bo++;
					}
				}
			}
			else
			{
				for (NUM.e = 2; NUM.e <= NUM.d; NUM.e++)
				{
					NUM.k = 0;
					for (NUM.f = 2; NUM.f < NUM.e; NUM.f++)
					{
						if (NUM.e % NUM.f == 0)
							NUM.k++;
					}
					if (NUM.k == 0) {
						GoToxy(40, NUM.bo);
						ColorChoose(4);
						cout << NUM.e << endl;
						NUM.bo++;
					}
				}
			}
		}
		else
		{
			GoToxy(27, 10);
			ColorChoose(4);
			cout << "这俩数之间没有素数！！！" << endl;
		}
		return 0;
	}
	/********************************************************************************************/
	int zuoye5() {
		GoToxy(33, 2);
		ColorChoose(3);
		cout << "以下是作业5的内容：" << endl;
		GoToxy(37, 4);
		ColorChoose(3);
		cout << "打印三角形" << endl;
		GoToxy(30, 6);
		ColorChoose(3);
			cout << "你想看一个多大个的三角形" << endl;
			GoToxy(30, 7);
			ColorChoose(3);
			cout << "请输入几层（阿拉伯数字）：";
			cin >> NUM.n;
			GoToxy(30, 9);
			ColorChoose(3);
			cout << "↙↙↙这是我画的三角形" << endl;
			for (NUM.h = 1; NUM.h <= NUM.n; NUM.h++) {
				for (NUM.j = 1; NUM.j <= NUM.h; NUM.j++) {
					ColorChoose(4);
					cout << "*";
				}
				cout << endl;
			}
		return 0;
	}
	int zuoye6() {
		GoToxy(33, 2);
		ColorChoose(3);
		cout << "以下是作业6的内容：" << endl;
		GoToxy(37, 4);
		ColorChoose(3);
		cout << "打印三角形" << endl;
		GoToxy(30, 6);
		ColorChoose(3);
		cout << "你想看一个多大个的三角形" << endl;
		GoToxy(30, 7);
		ColorChoose(3);
		cout << "请输入几层（阿拉伯数字）：";
		cin >> NUM.m;
		GoToxy(30, 9);
		ColorChoose(3);
		cout << "↙↙↙这是我画的三角形" << endl;
		for (NUM.o = 1; NUM.o <= NUM.m; NUM.o++) {
			for (NUM.q = 1; NUM.q <= (NUM.m - NUM.o + 1) * 2 - 1; NUM.q++) {
				ColorChoose(4);
				cout << "*";
			}
			cout << endl;
		}
		return 0;
	}
	int zuoye7() {
		GoToxy(33, 2);
		ColorChoose(3);
		cout << "以下是作业7的内容：" << endl;
		GoToxy(30, 6);
		ColorChoose(3);
		cout << "你想看一个多大个的正三角形" << endl;
		GoToxy(30, 7);
		ColorChoose(3);
		cout << "请输入几层（阿拉伯数字）：";
		cin >> NUM.p;
		GoToxy(30, 9);
		ColorChoose(3);
		cout << "↙↙↙这是我画的三角形：" << endl;
		for (NUM.r = 1; NUM.r <= NUM.p; NUM.r++) {
			for (NUM.s = NUM.p; NUM.s>NUM.r; NUM.s--) {
				cout << " ";
			}
			for (NUM.s = 0; NUM.s <(NUM.r * 2 - 1); NUM.s++) {
				ColorChoose(4);
				cout << "*";
			}
			cout << endl;
		}
		return 0;
	}
	/***************************************************************************************/
	int kk() {
		GoToxy(22, 2);
		ColorChoose(3);
		cout << "你想看一个正三角还是倒三角？(正三角，倒三角)" << endl;
		GoToxy(40, 4);
		ColorChoose(3);
		cout << "请回答：" << endl;
		GoToxy(40, 5);
		ColorChoose(2);
		cin >> ARRAY.str;
		if (strcmp(ARRAY.str, "正三角") == 0) {
			zuoye5();
		}
		else if (strcmp(ARRAY.str, "倒三角") == 0) {
			zuoye6();
		}
		else
		{
			GoToxy(4, 7);
			ColorChoose(4);
			cout << "老子标了让你填写正三角还是倒三角，你的回答应该是“正三角”或者“倒三角”！！" << endl;
			GoToxy(35, 8);
			ColorChoose(4);
			cout << "难道你眼瞎？？" << endl;
		}
		return 0;
	}
	/*
int zz()制作于2019.11.1
*/
	int zz0() {
		GoToxy(25, 2);
		ColorChoose(3);
		cout << "请构建一个4*4的数字方阵：" << endl;
		int bo=15;
		GoToxy(22, 3);
		ColorChoose(3);
		cout << "第一行(输入4个数字，空格隔开)：" << endl;
		GoToxy(22, 4);
		ColorChoose(2);
		cin >> ARRAY.aa[0][0] >> ARRAY.aa[0][1] >> ARRAY.aa[0][2] >> ARRAY.aa[0][3];
		GoToxy(22, 5);
		ColorChoose(3);
		cout << "第二行(输入4个数字，空格隔开)：" << endl;
		GoToxy(22, 6);
		ColorChoose(2);
		cin >> ARRAY.aa[1][0] >> ARRAY.aa[1][1] >> ARRAY.aa[1][2] >> ARRAY.aa[1][3];
		GoToxy(22, 7);
		ColorChoose(3);
		cout << "第三行(输入4个数字，空格隔开)：" << endl;
		GoToxy(22, 8);
		ColorChoose(2);
		cin >> ARRAY.aa[2][0] >> ARRAY.aa[2][1] >> ARRAY.aa[2][2] >> ARRAY.aa[2][3];
		GoToxy(22, 9);
		ColorChoose(3);
		cout << "第四行(输入4个数字，空格隔开)：" << endl;
		GoToxy(22, 10);
		ColorChoose(2);
		cin >> ARRAY.aa[3][0] >> ARRAY.aa[3][1] >> ARRAY.aa[3][2] >> ARRAY.aa[3][3];
		GoToxy(22, 11);
		ColorChoose(3);
		cout << "请稍后" << endl;
		for (int i = 0; i < 40; i++) {
			GoToxy(bo, 12);
			ColorChoose(4);
			cout << "*";
			Sleep(50);
			bo++;
		}
		xz();
		return 0;
		
	}
	int x1() {
		fangzhen();
		double a = ARRAY.aa[0][0] + ARRAY.aa[1][1] + ARRAY.aa[2][2] + ARRAY.aa[3][3];
		GoToxy(20, 8);
		ColorChoose(3);
		cout << "该方阵主对线上元素之和为：" <<a<< endl;
		xz1();
		return 0;
	}
	int x2() {
		fangzhen();
		double  a = ARRAY.aa[3][0] + ARRAY.aa[2][1] + ARRAY.aa[1][2] + ARRAY.aa[0][3];
		GoToxy(20, 8);
		ColorChoose(3);
		cout << "该方阵次对线上元素之和为：" << a << endl;
		xz1();
		return 0;
	}
	int x3() {
		fangzhen();
		double  a = ARRAY.aa[0][0] + ARRAY.aa[0][1] + ARRAY.aa[0][2] + ARRAY.aa[0][3];
		double  b = ARRAY.aa[1][0] + ARRAY.aa[1][1] + ARRAY.aa[1][2] + ARRAY.aa[1][3];
		double  c = ARRAY.aa[2][0] + ARRAY.aa[2][1] + ARRAY.aa[2][2] + ARRAY.aa[2][3];
		double  d = ARRAY.aa[3][0] + ARRAY.aa[3][1] + ARRAY.aa[3][2] + ARRAY.aa[3][3];
		GoToxy(20, 8);
		ColorChoose(3);
		cout << "该方阵第一行之和为：" << a << endl;
		GoToxy(20, 9);
		ColorChoose(3);
		cout << "该方阵第二行之和为：" << b << endl;
		GoToxy(20, 10);
		ColorChoose(3);
		cout << "该方阵第三行之和为：" << c << endl;
		GoToxy(20, 11);
		ColorChoose(3);
		cout << "该方阵第四行之和为：" << d << endl;
		xz1();
		return 0;
	}
	int x4() {
		fangzhen();
		double  a = ARRAY.aa[0][0] * ARRAY.aa[1][0] * ARRAY.aa[2][0] * ARRAY.aa[3][0];
		double  b = ARRAY.aa[0][1] * ARRAY.aa[1][1] * ARRAY.aa[2][1] * ARRAY.aa[3][1];
		double  c = ARRAY.aa[0][2] * ARRAY.aa[1][2] * ARRAY.aa[2][2] * ARRAY.aa[3][2];
		double  d = ARRAY.aa[0][3] * ARRAY.aa[1][3] * ARRAY.aa[2][3] * ARRAY.aa[3][3];
		GoToxy(20, 8);
		ColorChoose(3);
		cout << "该方阵第一列之积为：" << a << endl;
		GoToxy(20, 9);
		ColorChoose(3);
		cout << "该方阵第一列之积为：" << b << endl;
		GoToxy(20, 10);
		ColorChoose(3);
		cout << "该方阵第一列之积为：" << c << endl;
		GoToxy(20, 11);
		ColorChoose(3);
		cout << "该方阵第一列之积为：" << d << endl;
		xz1();
		return 0;
	}
	int x5() {
		fangzhen();
		bubble1(ARRAY.aa, &NUM.mm1);
		GoToxy(20, 8);
		ColorChoose(3);
		cout << "该方阵中最大的数为：" << NUM.mm1 << endl;
		xz1();
		return 0;
	}
	void bubble1(double aa[4][4],double*max) {
		int i, j;
		*max = aa[0][0];
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 5; j++) {
				if (*max < aa[i][j]) {
					*max = aa[i][j];
				}
			}
		}
	}
	int fangzhen() {
		GoToxy(20, 2);
		ColorChoose(3);
		cout << "你构建的方阵为：" << endl;
		GoToxy(25, 3);
		ColorChoose(2);
		cout << ARRAY.aa[0][0] << " " << ARRAY.aa[0][1] << " " << ARRAY.aa[0][2] << " " << ARRAY.aa[0][3] << " " << endl;
		GoToxy(25, 4);
		ColorChoose(2);
		cout << ARRAY.aa[1][0] << " " << ARRAY.aa[1][1] << " " << ARRAY.aa[1][2] << " " << ARRAY.aa[1][3] << " " << endl;
		GoToxy(25, 5);
		ColorChoose(2);
		cout << ARRAY.aa[2][0] << " " << ARRAY.aa[2][1] << " " << ARRAY.aa[2][2] << " " << ARRAY.aa[2][3] << " " << endl;
		GoToxy(25, 6);
		ColorChoose(2);
		cout << ARRAY.aa[3][0] << " " << ARRAY.aa[3][1] << " " << ARRAY.aa[3][2] << " " << ARRAY.aa[3][3] << " " << endl;
		return 0;
	}
	int xz() {
		int skt;
		ClearMainScreen();
		fangzhen();
		GoToxy(20, 8);
		ColorChoose(3);
		cout << "1.主对角线上元素之和" << endl;
		GoToxy(20, 9);
		ColorChoose(3);
		cout << "2.次对角线上元素之积" << endl;
		GoToxy(20, 10);
		ColorChoose(3);
		cout << "3.每行之和" << endl;
		GoToxy(20, 11);
		ColorChoose(3);
		cout << "4.每列之积" << endl;
		GoToxy(20, 12);
		ColorChoose(3);
		cout << "5.方阵中最大的元素" << endl;
		GoToxy(20, 13);
		ColorChoose(3);
		cout << "请输入你想要了解内容所对应的数字:" << endl;
		GoToxy(53, 13);
		ColorChoose(3);
		cin >> skt;
		ClearMainScreen();
		switch (skt)
		{
		case(1):x1(); break;
		case(2):x2(); break;
		case(3):x3(); break;
		case(4):x4(); break;
		case(5):x5(); break;
		default:
			GoToxy(20, 13);
			ColorChoose(4);
			cout << "大哥让你输个数字，上面都标了，你看不懂么？？？" << endl;
			break;
		}
		return 0;
	
	}
	int xz1() {
		GoToxy(20, 13);
		ColorChoose(3);
		cout << "1.返回上一步" << endl;
		GoToxy(20, 14);
		ColorChoose(3);
		cout << "2.退出到主菜单" << endl;
		GoToxy(20, 15);
		ColorChoose(3);
		cout << "请输入：" << endl;
		GoToxy(25, 15);
		ColorChoose(3);
		cin >> NUM.bbb;
		switch (NUM.bbb)
		{
		case(1):xz(); break;
		case(2):ss(); break;
		default:
			GoToxy(25, 13);
			ColorChoose(4);
			cout << "瞎逼！" << endl;
			GoToxy(25, 14);
			ColorChoose(4);
			cout << "爷爷写代码写的很暴躁" << endl;
			GoToxy(25, 15);
			ColorChoose(4);
			cout << "滚回主菜单吧！" << endl;
			break;
		}
		return 0;
	
	}
	/*
int zz0()制作于2019.11.17
*/
	void GoToxy(int x, int y)  //光标移动函数，X表示横坐标，Y表示纵坐标。
	{
		COORD  coord;         //使用头文件自带的坐标结构
		coord.X = x;            //这里将int类型值传给short,不过程序中涉及的坐标值均不会超过short范围
		coord.Y = y;
		HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);  //获得标准输出句柄
		SetConsoleCursorPosition(a, coord);         //以标准输出的句柄为参数设置控制台光标坐标
	}
	void ColorChoose(int color)   //颜色选择函数
	{
		switch (color)
		{
		case 1:               //天蓝色
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			break;
		case 2:               //绿色
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			break;
		case 3:               //黄色
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
			break;
		case 4:               //红色
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			break;
		case 5:               //紫色
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
			break;
		case 6:               //白色
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
			break;
		case 7:               //深蓝色,只用在字体颜色闪烁中
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			break;
		}
	}
	void HideCursor()  //隐藏光标
	{                  //CONSOLE_CURSOR_INFO结构体包含控制台光标的信息,DWORD dwSize光标百分比厚度（1~100）和BOOL bVisible光标是否可见
		CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //SetConsoleCursorInfo用来设置指定的控制台光标的大小和可见性。
	}
	void ClearMainScreen()  //主屏幕清屏函数，因使用system("cls");再打印框架有一定几率造成框架上移一行的错误，所以单独编写清屏函数
	{
		for (int i = 1; i < 40; i++)
		{
			GoToxy(2, i);
			printf("                                                                              ");
		}
	}
	void modeset(int w, int h) {
		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD size = { w,h };
		SetConsoleScreenBufferSize(hOut, size);
		SMALL_RECT rc = { 1,1,w,h };
		SetConsoleWindowInfo(hOut, true, &rc);
		system("cls");
		return;
	}
	void jingru() {
		GoToxy(35, 10);
		ColorChoose(3);
		cout << "******************************************";
		GoToxy(35, 11);
		ColorChoose(3);
		cout << "*             毕圣的作业系统             *";
		GoToxy(35, 12);
		ColorChoose(3);
		cout << "*               版本：3.80               *";
		GoToxy(35, 13);
		ColorChoose(3);
		cout << "*                                        *";
		GoToxy(35, 14);
		ColorChoose(3);
		cout << "*             WELCOME TO USE!            *";
		GoToxy(35, 15);
		ColorChoose(3);
		cout << "*             MADE BY BISAINT            *";
		GoToxy(35, 16);
		ColorChoose(3);
		cout << "*                                        *";
		GoToxy(35, 17);
		ColorChoose(3);
		cout << "******************************************";
	}
    int zz1() {
		return 0;
	}
	int ID() {
		FILE* fp=NULL;
		int sc;
		fp = fopen(abc,"r");
		if (NULL==fp)
		{
			cout << "NULL";
			return 0;
		}
		fclose(fp);
		fp = NULL;
		return 0;
	}