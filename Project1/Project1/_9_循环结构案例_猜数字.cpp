#include<iostream>
//添加随机数种子time
#include<ctime>
using namespace std;


int main() {
	//1.生成随机数字  
	//2.玩家进行猜测
	//3.判断猜测并进行相关提示
	srand((unsigned int)time(NULL));
	cout << (unsigned int)time(NULL) << endl;

	int result = rand() % 100 + 1;//rand()%n 生成0-n的随机数//每次都是42，需要添加随机数种子
	cout << rand() << endl;
	cout << rand() << endl;
	int num1 = result + 1;
	int numMax = 100;
	int numMin = 1;
	int numt = 1;
	cout << "请输入猜测数字"<< endl;
	cin >> num1;//50
	cout << "猜测数字:" << num1 << endl;
	while (result != num1) {
		if (result > num1 && num1 > numMin) {
			numMin = num1;
		}
		else if (num1 < numMax) {
			numMax = num1;//
		}
		cout << "猜测错误,正确值在" << numMin << "到" << numMax << "，请重新猜测数字." << endl;
		cin >> num1;//50
		cout << "猜测数字:" << num1 << endl;
		numt++;
	}
	cout << "恭喜你猜对了，结果为:" << result<<"。猜测次数："<<numt;
	return 0;
}