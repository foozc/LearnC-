//文件名：_20_数组_数组名称
//创建时间：2022/4/17 22:35:12

#include<iostream>
using namespace std;

//int main()
int main__20_数组_数组名称()
{
	//一位数组名称用途
	//可以统计整改数组再内存中的长度
	//可以获取数组再内存中的首地址
	//int 4个字节 float 4字节， double 8字节
	float arr[5] = { 1,2,3,4,5 };
	cout << sizeof(arr) << endl;
	cout << "数组长度为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//查看数组首地址
	cout << "数组首地址" << arr << endl;
	cout << "数组第一个元素地址" << &arr[0] << endl;
	cout << "数组第二个元素地址" << &arr[1] << endl;
	//数组名是一个常量 首地址
	//arr = &arr[1];
	//& 取地址

	return 0;
}