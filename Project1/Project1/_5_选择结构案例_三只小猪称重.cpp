#include<iostream>
#include<string>

using namespace std;

int main5() {
	//��ֻС����أ�ѡ�����ص���һ��
	int num1,num2,num3;
	cout << "����������ֻС��A��B��C���� "<<endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cout << endl;
	cout << "��ֻС��A��B��C���طֱ�Ϊ" << num1 << "," << num2 << "," << num3 << endl;
	cout << "���ص�С��Ϊ";
	if (num1 == num2) {
		if (num2 == num3) {
			cout << "��ֻС��һ����";
		}
		else if (num1 > num3) {
			cout << "С��A��Bһ������";
		}
		else {
			cout << "С��C����";
		}
	}
	else if(num2 == num3) {
		if(num1>num2){
			cout << "С��A����";
		}
		else {
			cout << "С��B��Cһ������";
		}
	}
	else if (num1 > num2) {
		if (num1 > num3) {
			cout << "A";
		}
		else 
		{
			cout << "C";
		}
	}
	else if (num2 > num3) {
		cout << "B";
	}
	else {
		cout << "C";
	}
	return 0;
}