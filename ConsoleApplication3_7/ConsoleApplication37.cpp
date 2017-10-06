// ConsoleApplication37.cpp: 定义控制台应用程序的入口点。
//3.7.cpp嵌套调用求平方和

#include "stdafx.h"
#include<iostream>
using namespace std;

//求平方的函数
int fun2(int m) {
	return m*m;
}

//求和的函数
int fun1(int x, int y) {
	return fun2(x) + fun2(y);
}

int main()
{
	int a, b;
	cout << "please enter two integers(a and b):";
	cin >> a >> b;
	cout << "the sum of square of a and b:" << fun1(a, b) << endl;
	return 0;
}

