#include<iostream>

using namespace std;

int main6() {
	//C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	int a = 0, b = 10, c = 100;
	a =( b > c ? b : c);
	cout << "a=" << a << endl;
	(a > b ? b : a)= 1000;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}