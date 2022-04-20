//文件名：_17_跳转语句_continue
//创建时间：2022/4/17 20:30:30

#include<iostream>
using namespace std;

//int main()
int main__17_跳转语句_continue()
{
	//continue 执行到本行，只是当前循环结束，进行下一次循环
	for (int i = 0; i <= 100; i++) {
		//奇数输出，偶数不输出
		if (i % 2 == 0)continue;//可以筛选条件，执行到此就不再向下执行
		cout << i << endl;
	}
	return 0;
}