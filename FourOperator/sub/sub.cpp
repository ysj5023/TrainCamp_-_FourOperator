#include"sub.h"
#include<iostream>

using namespace std;

DLL_API int sub(int x, int y)
{
	if (x > 0 && y < 0)
	{
		if (x>INT_MAX + y)
		{
			cout << "�������" << endl;
			return 0;
		}
	}
	if (x < 0 && y>0)
	{
		if (x < INT_MIN + y)
		{
			cout << "�������" << endl;
		}
	}
	return x - y;
}