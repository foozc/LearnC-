﻿//文件名：_3_野指针_
//创建时间：2022/5/18 23:37:56

#include<iostream>
using namespace std;

//int main__3_野指针_()
int main()
{
	//指向变量指向非法的内存空间
	//空指针和野指针都不是我们申请的空间
	//空指针不是野指针，空指针指向地址0，而野指针指向不确定的地方
	//野指针：访问一个已销毁或者访问受限的内存区域的指针，野指针不能判断是否为NULL来避免
	int *p = (int *)0X110111111111111;
	*p = 10;
	return 0;
}