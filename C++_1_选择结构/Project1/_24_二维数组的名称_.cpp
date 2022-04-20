//文件名：_24_二维数组的名称_
//创建时间：2022/4/18 23:09:52

#include<iostream>
using namespace std;

int main__24_二维数组的名称_()
//int main()
{
	int arr[][3] = {
		{1,2,3},
		{4,5,6},
	};

	cout << "二维数组占用内存空间" << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存空间" << sizeof(arr)[0] << endl;
	cout << "二维数组第一行第一个数据占用内存空间" << sizeof(arr)[0][0] << endl;
	cout << "二维数组列数" << sizeof(arr)[0] / sizeof(arr)[0][0] << endl;
	cout << "二维数组行数" << sizeof(arr) / sizeof(arr)[0] << endl;
	cout << "二维数组第一列占用的空间" << sizeof(arr)[0][0] * sizeof(arr) / sizeof(arr)[0] << endl;

	cout << "二维数组首地址" << arr << endl;
	cout << "二维数组首地址" << arr[0] << endl;
	cout << "二维数组首地址" << arr[0][0] << endl;
	cout << "二维数组首地址" << &arr << endl;
	cout << "二维数组首地址" <<(int)&arr[0][0] << endl;
	cout << "二维数组第二行首地址" << (int)&arr[1][0] << endl;//int 4 字节


	return 0;
}