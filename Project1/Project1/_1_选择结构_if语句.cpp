#include<iostream>
using namespace std;

int main1() {
	int score;
	
	cout << "请输入考试分数" << endl;
	cin >> score;
	cout << "您的分数为" << score<<",所以您的大学为";
	if (score >= 600) {
		cout << "一本大学";
	}
	else {
		cout << "其他大学";
	}
	cout << endl;
	return 0;	
}
