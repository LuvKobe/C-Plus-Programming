#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream> // �ȼ��� <stdio.h>
using namespace std; // std �Ƿ�C++��������ռ�

//��std��������ռ䶨��Ķ������ų���
// ������ͻ �������� ��ΪC����û�кܺõĽ��������⣬����cpp����namespace��Ϊ�˽��������ͻ������

//1. ͬ���������ռ��ǿ���ͬʱ���ڵģ�����������ʱ��ϲ�
//2. �����ռ����Ƕ��

//int main()
//{
//	cout << "hello world" << endl;
//
//	int a = 0;
//	cin >> a; // >> ����ȡ�����
//	cout << a; // << �����������
//	return 0;
//}


int main()
{
	int a;
	double d;
	
	cin >> a >> d; 

	cout << a <<" "<< d << endl;
	cout << a << d << endl; // endl ���Ի��У��ȼ��� '\n'

	/*��cout����̨ȥ����һ���ַ���hello world���ٲ���һ������*/
	cout << "hello world" << endl;
}
