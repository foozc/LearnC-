#include<iostream>
using namespace std;

int main1() {
	int score;
	
	cout << "�����뿼�Է���" << endl;
	cin >> score;
	cout << "���ķ���Ϊ" << score<<",�������Ĵ�ѧΪ";
	if (score >= 600) {
		cout << "һ����ѧ";
	}
	else {
		cout << "������ѧ";
	}
	cout << endl;
	return 0;	
}
