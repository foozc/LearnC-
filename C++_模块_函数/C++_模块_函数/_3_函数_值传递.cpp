//文件名：_3_函数_值传递
//创建时间：2022/4/27 23:38:32

#include<iostream>
using namespace std;

void swap2(int a, int b) {
	cout << "交换前，a=" << a << ",b=" << b << endl;

	int temp = b;
	b = a;
	a = temp;
	//形参发生任何操作，实参不会发生改变

	cout << "交换后，a=" << a << ",b=" << b << endl;



	//return;返回值不需要的时候， 不需要写return
}

int main__3_函数_值传递()
//int main()
{
	int A = 1, B = 2;
	cout << "交换前，A=" <<A<< ",B=" <<B << endl;
	swap2(A, B);
	cout << "交换后，A=" << A << ",B=" << B << endl;

	//值传递时，形参是无法改变实参的
	return 0;
}