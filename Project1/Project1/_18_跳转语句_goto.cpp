//文件名：_18_跳转语句_goto
//创建时间：2022/4/17 22:07:43

#include<iostream>
using namespace std;

//int main()
int main__18_跳转语句_goto()
{
	//goto FLAG;
	cout << "1\XXXX" << endl;
	cout << "2\XXXX" << endl;
	goto FLAG;
	cout << "3\XXXX" << endl;
	cout << "4\XXXX" << endl;
	FLAG://FLAG后面是冒号
	return 0;
}