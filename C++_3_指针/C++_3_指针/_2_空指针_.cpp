//文件名：_2_空指针_
//创建时间：2022/5/18 23:29:08

#include<iostream>
using namespace std;

//int main__2_空指针_()
int main()
{
	int *p = NULL;//无法访问 0-255，系统区域，禁止访问
	//1.空指针用于对指针变量的初始化
	//2.空指针是无法访问的
	//0~255的内存编号是系统占用的
	*p = 100;

	return 0;
}