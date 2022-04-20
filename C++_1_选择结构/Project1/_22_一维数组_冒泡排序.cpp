//文件名：_22_一维数组_冒泡排序
//创建时间：2022/4/17 23:27:31

#include<iostream>
using namespace std;

//int main()
int main__22_一维数组_冒泡排序()
{
	int arr[9] = { 4,5,8,6,1,7,9,3,2 };
	int temp;
	int tim = 0;

	cout << "排序前数组内容为：";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}
	// 9个数 对比 ，第一次对比需要8 次
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
		for (int k = 0; k < sizeof(arr) / sizeof(arr[0]) - 1 - i; k++) {
			if (arr[k] > arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
			tim++;//8 7 6 5 4 3 2 1 
		}

	cout << endl << "排序后数组内容为：";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}
	cout << "总共对比次数：" << tim << endl;
	return 0;
}