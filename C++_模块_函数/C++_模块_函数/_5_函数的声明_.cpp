//文件名：_5_函数的声明_
//创建时间：2022/5/7 0:33:30

#include<iostream>
using namespace std;

//提前告诉编译器函数的存在
int max(int a, int b);
int max(int a, int b,int c);
//声明可以写多次，但定义只能写一次

int main__5_函数的声明_()
//int main()
{
	int a = 1, b = 2,c=3;
	cout << max(a, b,c) << endl;
	cout << max(a, b) << endl;
	return 0;
}

//函数的定义	
int max(int a,int b) {
	return a > b ? a : b;
}
int max(int a, int b,int c) {
	return c > b ? c : b;
}