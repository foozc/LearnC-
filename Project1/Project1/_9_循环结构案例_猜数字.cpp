#include<iostream>
//������������time
#include<ctime>
using namespace std;


int main() {
	//1.�����������  
	//2.��ҽ��в²�
	//3.�жϲ²Ⲣ���������ʾ
	srand((unsigned int)time(NULL));
	cout << (unsigned int)time(NULL) << endl;

	int result = rand() % 100 + 1;//rand()%n ����0-n�������//ÿ�ζ���42����Ҫ������������
	cout << rand() << endl;
	cout << rand() << endl;
	int num1 = result + 1;
	int numMax = 100;
	int numMin = 1;
	int numt = 1;
	cout << "������²�����"<< endl;
	cin >> num1;//50
	cout << "�²�����:" << num1 << endl;
	while (result != num1) {
		if (result > num1 && num1 > numMin) {
			numMin = num1;
		}
		else if (num1 < numMax) {
			numMax = num1;//
		}
		cout << "�²����,��ȷֵ��" << numMin << "��" << numMax << "�������²²�����." << endl;
		cin >> num1;//50
		cout << "�²�����:" << num1 << endl;
		numt++;
	}
	cout << "��ϲ��¶��ˣ����Ϊ:" << result<<"���²������"<<numt;
	return 0;
}