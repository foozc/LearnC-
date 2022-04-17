#include<iostream>
using namespace std;

int main15() {

	int a = 1, b = 1;
	for (int i = 1; i < 10; i++) {
		for (int k = 1; k <= i; k++) {
			if (k*i / 10 >= 1) {
				cout << "|" << k << " X " << i << " = " << k * i << "| ";
			}
			else
			{
				cout << "|" << k << " X " << i << " = 0" << k * i << "| ";
			}
		}
		cout << endl;
	}
	return 0;
}