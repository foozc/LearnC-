//�ļ�����swap
//����ʱ�䣺2022/5/8 0:13:08

#include"swap.h"
using namespace std;

void swap(int a,int b)
{
	int temp = b;
	b = a;
	a = temp;
	cout <<"a="<< a<<endl;
	cout <<"b="<< b << endl;
}