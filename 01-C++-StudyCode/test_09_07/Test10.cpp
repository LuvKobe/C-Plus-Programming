#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

/*

��ο���C++һϵ�в������������ء����á�new/delete��������/����ȡ���������Ͷ���...

���캯�����������������������Ͳ����������Զ������ͻ�ȥ�������Ĺ��������

*/




//struct ListNode
//{
//	ListNode* _prev;
//	ListNode* _next;
//	int _val;
//
//	// �ڹ��캯������ʹ�ó�ʼ���б�
//  // ��ʼ���б���Ա��ʼ���ĵط�
//	ListNode(int val = 0)
//		:_next(nullptr)
//		,_val(val)
//	{}
//};

//class Stack
//{
//public:
//	// ���캯��
//	Stack(int capacity = 10)
//	{
//		_a = new int[capacity]; // ������10��int���͵Ŀռ�
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	// ��������
//	~Stack()
//	{
//		delete[] _a;
//		_capacity = _top = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	// mallocʧ�ܣ����ؿ�ָ��
//	Stack* ps1 = (Stack*)malloc(sizeof(Stack));
//	if (ps1 == NULL) {
//		exit(-1);
//	}
//
//	// newʧ�ܣ������쳣
//	Stack* ps2 = new Stack; // new���������£����ռ�͵��ù��캯����ʼ��
//
//	free(ps1);
//	delete ps2; // delete��������������������Դ �� �ͷſռ�
//
//	return 0;
//}


//template<typename T>
//
//void Swap(T& left, T& right)
//{
//	T tmp = left;
//	left = right;
//	right = tmp;
//}
//
//int main()
//{
//	int a = 0, b = 1;
//	char c = 'a', d = 'b';
//
//	swap(a, b);
//	swap(c, d);
//
//	cout << a << " " << b << endl;
//	cout << c << " " << d << endl;
//
//	return 0;
//}



//// ��ģ��
//template<class T> // T����Ψһ�ģ�ֻ��T��temp����д����д��ԭ���Ǻ�������������
//class Stack
//{
//public:
//	// ���캯��
//	Stack(int capacity = 0)
//	{
//		_a = new T[capacity]; // ������10��int���͵Ŀռ�
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	void Push(const T& x) // ������ֵ���λ���ÿ������죬����Ҫ�����ã����Ҽ������ò��ı䣬��Ҫ����const
//	{}
//
//	// ��������
//	~Stack()
//	{
//		delete[] _a;
//		_capacity = _top = 0;
//	}
//private:
//	T* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	Stack<int> st1; // ����Stack
//	st1.Push(1);
//
//	Stack<double> st2; // ������Stack
//	st2.Push(2.2);
//
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//
//	cout << "����������������С�������:> ";
//	cin >> a >> b >> c;
//
//	if ((a == b) && (a == c)) {
//		cout << "equal" << endl;
//	}
//	else {
//		if ((a > c) && (a > b)) {
//			cout << "a" << endl;
//		}
//		else if ((b > a) && (b > c)) {
//			cout << "b" << endl;
//		}
//		else {
//			cout << "c" << endl;
//		}
//	}
//}
