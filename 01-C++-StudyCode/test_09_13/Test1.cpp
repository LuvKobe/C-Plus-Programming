#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int main()
{
	//ջ�����ٿռ䣬�ȿ��ٵĿռ��ַ��
	int a = 10;
	int b = 20;
	cout << &a << endl;
	cout << &b << endl;

	//�������ٿռ䣬�ȿ��ٵĿռ��ַ��
	int* c = (int*)malloc(sizeof(int) * 10);
	int* d = (int*)malloc(sizeof(int) * 10);
	cout << c << endl;
	cout << d << endl;
	return 0;
}
