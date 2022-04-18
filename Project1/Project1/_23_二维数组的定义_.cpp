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

	int hang = 0;
	int lie = 0;
	hang = sizeof(arr) / sizeof(arr[0]);
	lie = sizeof(arr[0]) / sizeof(arr[0][0]);
	cout << hang << endl;//输出行数
	cout << lie << endl;
	cout << arr[0] << endl;//输出地址
	cout << &arr[0] << endl;//输出地址

	//打印二维数组
	//for (int i = 0; i < hang; i++) {//外层循环输出行
	//	for (int j = 0; j < lie; j++) {//内层循环列
	//		cout << i << "," << j << ":" << arr[i][j] << endl;
	//	}
	//}


	int arr1[][2] = {
		{1,2},
		{3,4},
		{7,8} 
	};

	hang = sizeof(arr1) / sizeof(arr1[0]);
	lie = sizeof(arr1[0]) / sizeof(arr1[0][0]);
	for (int i = 0; i < hang; i++) {//外层循环输出行
		for (int j = 0; j < lie; j++) {//内层循环列
			cout<<" |"<< arr1[i][j] << "| ";
		}
		cout << endl;
	}



	return 0;
}