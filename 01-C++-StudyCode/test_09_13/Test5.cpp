#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int main()
{
	//栈区开辟空间，先开辟的空间地址高
	int a = 10;
	int b = 20;
	cout << &a << endl;
	cout << &b << endl;

	//堆区开辟空间，先开辟的空间地址低
	int* c = (int*)malloc(sizeof(int) * 10);
	int* d = (int*)malloc(sizeof(int) * 10);
	cout << c << endl;
	cout << d << endl;
	return 0;
}
