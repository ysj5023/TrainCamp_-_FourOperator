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
		cout << "��ĸ����Ϊ�㣡" << endl;
		return 0;
	}
	else if (x == INT_MIN&&y == -1)
	{
		cout << "�������" << endl;
			return 0;
	}
	return x / y;
}

int main()
{
	int x, y;
	cin >> x >> y;

	cout << "������Ϊ��" << add(x, y) << endl;
	cout << "������Ϊ��" << sub(x, y) << endl;

	HINSTANCE handle = LoadLibrary("mul.dll");
	typedef int(*p)(int x, int y);
	p ji = (p)GetProcAddress(handle, "mul");
	int cheng = ji(x, y);
	cout << "������Ϊ��"<<cheng << endl;

	cout <<"������Ϊ��"<< div(x, y) << endl;

	system("pause");
	return 0;

}