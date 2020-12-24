#include"mul.h"
#include<iostream>

using namespace std;

int mul(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (x>INT_MAX/y||y>INT_MAX/x)
		{
			cout << "积溢出！" << endl;
			return 0;
		}
	}
	else if (((x!=-1)&&x<0)&&y>0)
	{
		if (x < INT_MIN / y || y > INT_MIN / x)
		{
			cout << "积溢出!" << endl;
			return 0;
		}
	}
	else if (x>0 && (y < 0 && (y != -1)))
	{
		if (x>INT_MIN/y||y<INT_MIN/x)
		{
			cout << "积溢出！" << endl;
			return 0;
		}
	}
	else if (x < 0 && y < 0)
	{
		if (x<INT_MAX/y&&y<INT_MAX/x)
		{
			cout << "积溢出！" << endl;
			return 0;
				
		}
	}
	return x*y;
}