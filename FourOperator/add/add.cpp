#include"add.h"
#include<iostream>
#include<limits>

using namespace std;

int add(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (x > INT_MAX - y)
		{
			cout << "和溢出！" << endl;
			return 0;
		}
	}
	else if (x < 0 && x < y)
	{
		if (x < INT_MIN - y)
		{
			cout << "和溢出！" << endl;
		}
	}
	return x + y;
}