#include<iostream>
using namespace std;

int main12() {
	/*for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}*/
	int i = 0;
	for (;;) {
		if (i < 10) {
			cout << i++ << endl;
		}
		else {
			break;
		}
	}
	return 0;
}