#include<iostream>
using namespace std;

int main10() {
	//do...while 和 while 的区别，do...while 会先执行一次循环语句，再进入判断
	int num = 0;
	do {
		cout << num++ << endl;
	} while (num<10);
	
	return 0;
}	