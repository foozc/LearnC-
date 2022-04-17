//文件名：_21_一维数组_元素倒置
//创建时间：2022/4/17 23:15:02

#include<iostream>
using namespace std;

//int main()
int main__21_一维数组_元素倒置()
{
	int arr[6] = { 1,6,3,4,2 ,5};
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int tem;

	cout << "逆置前"<<endl;
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		cout << arr[i] << endl;
	}
	cout << "逆置后" << endl;
	/*for (int i = 0; i < (sizeof(arr) / sizeof(arr[0]))/2; i++) {
		tem = arr[start];
		arr[start] = arr[end];
		arr[end] = tem;
		start++;
		end--;
	}*/

	while (start < end) {
		tem = arr[start];
		arr[start] = arr[end];
		arr[end] = tem;
		start++;
		end--;
	}
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		cout << arr[i]<<endl;
	}
	return 0;
}