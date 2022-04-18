//文件名：_23_二维数组的定义_
//创建时间：2022/4/18 22:34:57

#include<iostream>
using namespace std;

int main()
//int main__23_二维数组的定义_()
{
	//二维数组的定义方式
	/*
	1.数据类型 数组名[行数][列数]
	2.数据类型 数组名[行数][列数]={{数据1，数据2}，{数据3，数据4}};
	3.数据类型 数组名[行数][列数]={数据1，数据2，数据3，数据4};
	4.数据类型 数组名[][列数] = {数据1，数据2，数据3，数据4}

	*/
	int arr[2][3] = { 1,2,3,4,5,6 };
	int arr2[][2]= { 1,2,3,4,7,8 };

	int hang = 0;
	int lie = 0;
	hang = sizeof(arr) / sizeof(arr[0]);
	lie = sizeof(arr[0]) / sizeof(arr[0][0]);
	cout << hang<<endl;
	cout << lie<<endl;
	cout << arr[0]<<endl;
	cout << &arr[0] << endl;
	//for
	return 0;
}