#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/*
int main()
{
	int a = 10;
	int& b = a; //b��a������
	int& c = b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	b = 50;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	c = 100;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
		 	
	return 0;
}
*/


// ���õĳ���
//int main()
//{
//	int a = 10;
//	int& b = a;
//
//	const int x = 20;
//	const int& y = x;
//
//	int c = 30;
//	const int& d = c;
//
//	return 0;
//}

//const ���ã����Դ���������������ʽ����ת��

// ��������ʹ�� ����
//void Swap(int& x, int& y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
////����Swap���������� "��������"
//
//void Swap(double& x, double& y) {
//	double tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	Swap(a, b);
//
//	double c = 1.1, d = 2.2;
//	Swap(c, d);
//
//	cout << "a = " << a << " " << "b = " << b << endl;
//
//	return 0;
//}
//// �ܽ᣺�����ô��θ�����⣬��ֱ�ۣ�


// ��һ�ε�������һ�ε��ý���ջ֡���ǵ�

// ʵ��ADD�ĺ�
#define ADD(X,Y) ((X)+(Y));

// ΪʲôC++Ҫ�� inline����Ϊ�˽���꺯����ɬ�Ѷ�������д�������
// �겻֧�ֵ���
// inline��1��debug֧�ֵ��ԡ�2��������д��������ͨ������д��
inline int Add(int x, int y) {
	int z = x + y;
	return z;
}

int main()
{
	ADD(1, 2); //


	return 0;
}