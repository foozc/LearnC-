//文件名：_1_函数_函数的定义
//创建时间：2022/4/27 23:28:08

#include<iostream>
using namespace std;

int add(int num1, int num2) {
	return num1 + num2;
}

int main()
//int main__1_函数_函数的定义()
{
	int a = 1, b = 2;
	int c = add(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return 0;
}