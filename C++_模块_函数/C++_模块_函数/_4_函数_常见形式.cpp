//文件名：_4_函数_常见形式
//创建时间：2022/4/27 23:45:40

#include<iostream>
using namespace std;

//有参有返
int add1(int a, int b) {
	return a + b;
}
//有参无返
void swap1(int a, int b) {
	int temp = b;
	b = a;
	a = temp;
}

//无参有饭
int num() {
	return 1;
}

//无参午饭
void test() {
	cout << "helloWorld" << endl;
}


int main__4_函数_常见形式()
//int main()
{
	int a = 1, b = 2;
	int c = num();
	int d = add1(a , b);
	test();


	
	return 0;
}