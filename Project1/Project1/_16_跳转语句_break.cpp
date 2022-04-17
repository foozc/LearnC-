//文件名：_16_跳转语句_break
//创建时间：2022/4/17 20:35:50

#include<iostream>
using namespace std;

//int main()
int main__16_跳转语句_break()
{
	//break的使用时机
	//出现再switch中case break
	//
	//cout << "请对我们的服务进行评价" << endl;
	//cout << "1:非超好" << endl;
	//cout << "2:好" << endl;
	//cout << "3:一般" << endl;
	//int result;
	//cin >> result;
	//switch (result) {
	//case 1:cout << "非常好" << endl;
	//	break;//退出switch语句
	//case 2:cout << "好" << endl;
	//case 3:cout << "一般" << endl;
	//default:
	//	break;
	//}

	/*for (int i = 0; i < 10; i++) {
		cout << i << endl;
		if (i == 5)break;
	}*/

	for (int i = 1; i < 10; i++) {
		for (int k = 1; k < i; k++) {
			cout << i << "X" << k << " = " << i * k<<" |";
			if (k > 5)break;
		}
		cout << endl;
	}

	return 0;
}