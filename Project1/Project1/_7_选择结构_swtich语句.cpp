#include<iostream>

using namespace std;

int main() {
	int score;
	cout << "输入你的电影评分(0-10)" << endl;
	cin >> score;
	switch (score)
	{
	case 10:
	case 9:cout << "值得再看" << endl;
		break;
	case 8:
	case 7:
	case 6:cout << "好评" << endl;
		break;
	default:
		cout << "一般" << endl;
		break;
	}

	//if 和 switch 优缺点 ，switch 结构清晰
	//switch 效率高，但只能是int 和字符串
	return 0;
}