#include<iostream>

using namespace std;

int main11() {
	int num = 100;
	/*cout << num / 100 << endl;
	cout << num % 100 / 10 << endl;
	cout << num % 10<<endl;*/
	int a, b, c;
	do {
		//cout << num<<endl;
		a = num / 100;
		b = num  % 100 / 10;
		c = num % 10;
		if ( a*a*a+b*b*b+c*c*c ==num  ) {
			cout<<num<<endl;
		}
	} while (++num < 1000);
	return 0;
}