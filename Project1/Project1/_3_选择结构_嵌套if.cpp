#include<iostream>
#include<string>
using namespace std;

int main3() {
	int score;
	string result;
	cout << "�����뿼�Է���" << endl;
	cin >> score;
	cout << "���ķ���Ϊ" << score << ",�������Ĵ�ѧΪ";
	//result = (score >= 400) ? ((score >= 500) ? ((score >= 600) ? "һ��" : "����") : "����") : "δ���ϴ�ѧ";
	result = score >= 400 ? score >= 500 ? score >= 600 ? (score >= 650 ? (score > 700 ? "����" : "�廪") : ("�˴�")) : "����" : "����" : "δ���ϴ�ѧ";
	cout << result;
	cout << endl;
	return 0;
}