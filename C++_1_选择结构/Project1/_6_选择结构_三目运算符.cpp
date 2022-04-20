#include<iostream>

using namespace std;

int main6() {
	//C++中三目运算符返回的是变量，可以继续赋值
	int a = 0, b = 10, c = 100;
	a =( b > c ? b : c);
	cout << "a=" << a << endl;
	(a > b ? b : a)= 1000;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}