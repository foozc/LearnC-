#include<iostream>
#include<string>

using namespace std;

int main5() {
	//三只小猪称重，选出最重的那一个
	int num1,num2,num3;
	cout << "依次输入三只小猪A、B、C体重 "<<endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cout << endl;
	cout << "三只小猪A、B、C体重分别为" << num1 << "," << num2 << "," << num3 << endl;
	cout << "最重的小猪为";
	if (num1 == num2) {
		if (num2 == num3) {
			cout << "三只小猪一样重";
		}
		else if (num1 > num3) {
			cout << "小猪A和B一样最重";
		}
		else {
			cout << "小猪C最重";
		}
	}
	else if(num2 == num3) {
		if(num1>num2){
			cout << "小猪A最重";
		}
		else {
			cout << "小猪B和C一样最重";
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