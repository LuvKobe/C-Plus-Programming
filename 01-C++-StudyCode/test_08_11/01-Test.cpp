//#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

/*

���Ը�Ƶ��

C���Բ�֧�����أ�C++֧������
C++�����֧�ֵģ�ΪʲôC���Բ���֧�֣�

�������ӵĹ��̣�f.h  f.cpp  Test.cpp

1��Ԥ����  -->  ͷ�ļ�չ�������滻���������롢ȥ��ע��
������ f.i  test.i

2������ --> ����﷨�����ɻ�����
������ f.s  test.s

3����� --> �ѻ�����ת���ɶ����ƵĻ�����
������ f.o  test.o������ȫ��0 �� 1��

4������ --> �ҵ��ú����ĵ�ַ�����Ӷ�Ӧ�ϣ��ϲ���һ��
������ a.out����ִ�г���

*/



//int main()
//{
//	// b����a�����ã�Ҳ����b��a�ı���
//	int a = 10;
//	int& b = a;
//	int& c = a;
//	int& d = b;
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//
//	return 0;
//}

// ���õ�Ӧ��
//void Swap(int& r1, int& r2) {
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//
//int main()
//{
//	int x = 1, y = 2;
//	Swap(x, y);
//
//	cout << x << endl;
//	cout << y << endl;
//	return 0;
//}



// ����C���Զ��嵥����ķ�ʽ��ʵ��Ҫ��ָ��ĵ�ַ�������β�Ҫ�ö���ָ�����
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LTNode;
//
//void LTPushBack(LTNode** pphead, int x) {
//	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
//	if (*pphead == NULL) {
//		exit(-1);
//	}
//	*pphead == newnode;
//}
//
//int main()
//{
//	LTNode* plist;
//	LTPushBack(&plist, 1);
//	return 0;
//}


//// C++�ķ�ʽһ
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LTNode;
//
////�����ββ���ʹ���� "����"��phead��plist�ı�����phead�ĸı���Ӱ��plist
//void LTPushBack_CPP(LTNode*& phead, int x) {
//	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
//	if (phead == NULL) {
//		exit(-1);
//	}
//	phead = newnode;
//}
//
//int main()
//{
//	LTNode* plist = NULL;
//	
//	LTPushBack_CPP(plist, 1);
//
//	return 0;
//}

// C++�ķ�ʽ��
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}LTNode,*PLTNode; //����ͷ�������һ����

//�����ββ���ʹ���� "����"��phead��plist�ı�����phead�ĸı���Ӱ��plist
void LTPushBack_CPP(PLTNode& phead, int x) {
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (phead == NULL) {
		exit(-1);
	}
	phead = newnode;
}

int main()
{
	LTNode* plist = NULL;

	LTPushBack_CPP(plist, 1);

	return 0;
}