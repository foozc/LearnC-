//文件名：_1_指针的定义_
//创建时间：2022/5/8 0:33:41

#include<iostream>
using namespace std;

//int main__1_指针的定义_()
int main()
{
	int a = 10;
	int *p = &a;
	cout <<"a="<< a << endl;
	cout <<"p="<< p << endl;
	cout <<"*p="<< *p<<endl;
	cout << "p size=" << sizeof(p) << endl;
	cout << "*p size=" << sizeof(*p) << endl;//指针的大小是根据声明条件来
	return 0;
}