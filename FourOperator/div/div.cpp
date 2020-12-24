#include"div.h"
#include<iostream>
#include<Windows.h>
#include"add.h"
#include"sub.h"
using namespace std;


int div(int x, int y)
{
	if (y==0)
	{
		cout << "分母不能为零！" << endl;
		return 0;
	}
	else if (x == INT_MIN&&y == -1)
	{
		cout << "商溢出！" << endl;
			return 0;
	}
	return x / y;
}

int main()
{
	int x, y;
	cin >> x >> y;

	cout << "两数和为：" << add(x, y) << endl;
	cout << "两数和为：" << sub(x, y) << endl;

	HINSTANCE handle = LoadLibrary("mul.dll");
	typedef int(*p)(int x, int y);
	p ji = (p)GetProcAddress(handle, "mul");
	int cheng = ji(x, y);
	cout << "两数积为："<<cheng << endl;

	cout <<"两数商为："<< div(x, y) << endl;

	system("pause");
	return 0;

}