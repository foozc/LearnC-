#include<iostream>

using namespace std;

int main() {
	int score;
	cout << "������ĵ�Ӱ����(0-10)" << endl;
	cin >> score;
	switch (score)
	{
	case 10:
	case 9:cout << "ֵ���ٿ�" << endl;
		break;
	case 8:
	case 7:
	case 6:cout << "����" << endl;
		break;
	default:
		cout << "һ��" << endl;
		break;
	}

	//if �� switch ��ȱ�� ��switch �ṹ����
	//switch Ч�ʸߣ���ֻ����int ���ַ���
	return 0;
}