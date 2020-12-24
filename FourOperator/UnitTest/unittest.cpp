#include "stdafx.h"
#include "CppUnitTest.h"

#include"..\add\add.h"
#include"..\sub\sub.h"
#include"..\mul\mul.h"
#include"..\div\div.h"

#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<sstream>
#include<iostream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTest
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{

			LPTSTR arr[6] = { "array", "array1", "array2", "array3", "array4", "array5" };
			LPTSTR str1 = new char[256];
			for (int i = 0; i < 6; i++)
			{
				GetPrivateProfileString("add", arr[i], "", str1, 256, "../cs.ini");

				arr[i] = str1;
				stringstream string1(arr[i]);
				int a, b, c;
				string1 >> a >> b >> c;

				Assert::AreEqual(c, add(a, b));

			}
		}

		TEST_METHOD(TestMethod2)
		{

			LPTSTR arr[6] = { "array", "array1", "array2", "array3", "array4", "array5" };
			LPTSTR str1 = new char[256];
			for (int i = 0; i < 6; i++)
			{
				GetPrivateProfileString("sub", arr[i], "", str1, 256, "../cs.ini");

				arr[i] = str1;
				stringstream string1(arr[i]);
				int a, b, c;
				string1 >> a >> b >> c;

				Assert::AreEqual(c, sub(a, b));

			}

		}

		TEST_METHOD(TestMethod3)
		{

			LPTSTR arr[12] = { "array", "array1", "array2", "array3", "array4", "array5",
				"array6", "array7", "array8", "array9", "array10", "array11" };
			LPTSTR str1 = new char[256];
			for (int i = 0; i < 12; i++)
			{
				GetPrivateProfileString("mul", arr[i], "", str1, 256, "../cs.ini");

				arr[i] = str1;
				stringstream string1(arr[i]);
				int a, b, c;
				string1 >> a >> b >> c;

				Assert::AreEqual(c, mul(a, b));

			}

		}

		TEST_METHOD(TestMethod4)
		{

			LPTSTR arr[3] = { "array", "array1", "array2" };
			LPTSTR str1 = new char[256];
			for (int i = 0; i < 3; i++)
			{
				GetPrivateProfileString("div", arr[i], "", str1, 256, "../cs.ini");

				arr[i] = str1;
				stringstream string1(arr[i]);
				int a, b, c;
				string1 >> a >> b >> c;

				Assert::AreEqual(c, divi(a, b));

			}

		}
	};
}
