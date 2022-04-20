//文件名：_25_二维数组的案例_成绩统计
//创建时间：2022/4/20 22:37:06

#include<iostream>
#include<string>
using namespace std;

//int main__25_二维数组的案例_成绩统计()
int main()
{
	int arr[4][3] = {
		{100,100,100},
	{90,50,100},
	{60,70,80},
	{1,1,1}
	};
	string names[] = {"张三","李四","王五","kk"};
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {//计算总人数
		int score = 0;
		for (int k = 0; k < sizeof(arr[0]) / sizeof(arr[0][0]); k++) {//计算每人总分
			score += arr[i][k];
		}
		cout << "同学" << names[i] << "成绩是" << score<<endl;
	}

	return 0;
}