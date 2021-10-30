// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "FUCK.h"
#define N 0
using namespace std;
int CARD[200][200];

void world0();

void GoToxy(int x, int y);
void ColorChoose(int color);
void HideCursor();
void ClearMainScreen0();
void modeset(int w, int h);

void bb();
void jingru();

void THE_WORLD();
void THE_WORLD1();

void kap();


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
int main()
{
	bb();
	while (1)
	{
		world0();
	}
}
void world0() {
	int a;
	GoToxy(20, 2);
	ColorChoose(3);
	cout << "****************************************************************";
	GoToxy(20, 3);
	ColorChoose(3);
	cout << "*                          游戏选择                            *";
	GoToxy(20, 4);
	ColorChoose(3);
	cout << "*       1.  THE_WORLD                                          *";
	GoToxy(20, 5);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 6);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 7);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 8);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 9);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 10);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 11);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 12);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 13);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 14);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 15);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 16);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 17);
	ColorChoose(3);
	cout << "*                     请输入你的选择：                         *";
	GoToxy(20, 18);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 19);
	ColorChoose(3);
	cout << "****************************************************************";
	GoToxy(58, 17);
	ColorChoose(3);
	cin >> a;
	switch (a)
	{
	case(1):THE_WORLD(); break;
	default:
		break;
	}
}
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
void ClearMainScreen0()  //主屏幕清屏函数，因使用system("cls");再打印框架有一定几率造成框架上移一行的错误，所以单独编写清屏函数
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
	GoToxy(40,10);
	ColorChoose(3);
	cout << "******************************************";
	GoToxy(40, 11);
	ColorChoose(3);
	cout << "*             毕圣的游戏系统             *";
	GoToxy(40, 12);
	ColorChoose(3);
	cout << "*               版本：1.0                *";
	GoToxy(40, 13);
	ColorChoose(3);
	cout << "*                                        *";
	GoToxy(40, 14);
	ColorChoose(3);
	cout << "*             WELCOME TO USE!            *";
	GoToxy(40, 15);
	ColorChoose(3);
	cout << "*             MADE BY BISAINT            *";
	GoToxy(40, 16);
	ColorChoose(3);
	cout << "*                                        *";
	GoToxy(40, 17);
	ColorChoose(3);
	cout << "******************************************";
}
void THE_WORLD() {
	THE_WORLD1();
}
void _CARD(int M) {
	int i, j;
	char THE_WORLD_CARD[100][6][8]{
		{//怪兽卡1
			{"2111111"},
			{"1000001"},
			{"1000001"},
			{"1000001"},
			{"1000001"},
			{"1111111"},
        },
	    {//魔法卡1
			{""}
	
	
	
	    
		
		}
	};
	for (i = 5; i < 12; i++)
		for (j = 20; j < 29; j++)
			 CARD[i][j] = THE_WORLD_CARD[N][i][j];
}
void THE_WORLD1() {
	system("cls");
	int M;
	GoToxy(20, 2);
	ColorChoose(3);
	cout << "****************************************************************";
	GoToxy(20, 3);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 4);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 5);
	ColorChoose(3);
	cout << "*                         1.开始游戏                           *";
	GoToxy(20, 6);
	ColorChoose(3);
	cout << "*                         2.对战模式                           *";
	GoToxy(20, 7);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 8);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 9);
	ColorChoose(3);
	cout << "*                         请输入：                             *";
	GoToxy(20, 10);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 11);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 12);
	ColorChoose(3);
	cout << "*                                                              *";
	GoToxy(20, 13);
	ColorChoose(3);
	cout << "****************************************************************";
	GoToxy(53, 9);
	ColorChoose(3);
	cin >> M;
	switch (M)
	{
	case(1):
	default:system("cls"); kap(); break;
		break;
	}

}
