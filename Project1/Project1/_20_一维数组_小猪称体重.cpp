//文件名：_20_一维数组_小猪称体重
//创建时间：2022/4/17 23:06:13

#include<iostream>
using namespace std;

//int main()
int main__20_一维数组_小猪称体重()
{
	int arr[5] = { 300, 500, 200, 100,400 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max)max = arr[i];
	}
	cout << "最重的小猪" <<max;
	return 0;
}