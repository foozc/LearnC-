#include<iostream>
using namespace std;

int main13() {
	int i = 1;
	/*while (i <= 100) {
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0) {
			cout << i<<endl;
		}
		i++;
	}*/

	/*do {
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0) {
			cout << i << endl;
		}
	} while (i++<=100);*/

	for (; i <= 100; i++) {
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0) {
			cout << i << endl;
		}
	}

	return 0;
}