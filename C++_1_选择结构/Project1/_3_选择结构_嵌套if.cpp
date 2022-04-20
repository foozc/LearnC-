#include<iostream>
#include<string>
using namespace std;

int main3() {
	int score;
	string result;
	cout << "请输入考试分数" << endl;
	cin >> score;
	cout << "您的分数为" << score << ",所以您的大学为";
	//result = (score >= 400) ? ((score >= 500) ? ((score >= 600) ? "一本" : "二本") : "三本") : "未考上大学";
	result = score >= 400 ? score >= 500 ? score >= 600 ? (score >= 650 ? (score > 700 ? "北大" : "清华") : ("人大")) : "二本" : "三本" : "未考上大学";
	cout << result;
	cout << endl;
	return 0;
}