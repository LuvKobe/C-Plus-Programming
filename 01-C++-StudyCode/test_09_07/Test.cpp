#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

/*

如何看待C++一系列操作：函数重载、引用、new/delete、流插入/流提取运算符、类和对象...

构造函数和析构函数，对内置类型不做处理，对自定义类型会去调用它的构造和析构

*/




//struct ListNode
//{
//	ListNode* _prev;
//	ListNode* _next;
//	int _val;
//
//	// 在构造函数里面使用初始化列表
//  // 初始化列表：成员初始化的地方
//	ListNode(int val = 0)
//		:_next(nullptr)
//		,_val(val)
//	{}
//};

//class Stack
//{
//public:
//	// 构造函数
//	Stack(int capacity = 10)
//	{
//		_a = new int[capacity]; // 开辟了10个int类型的空间
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	// 析构函数
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
//	// malloc失败，返回空指针
//	Stack* ps1 = (Stack*)malloc(sizeof(Stack));
//	if (ps1 == NULL) {
//		exit(-1);
//	}
//
//	// new失败，会抛异常
//	Stack* ps2 = new Stack; // new做了两件事：开空间和调用构造函数初始化
//
//	free(ps1);
//	delete ps2; // delete：调用析构函数清理资源 和 释放空间
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



//// 类模板
//template<class T> // T不是唯一的，只是T是temp的缩写，大写的原因是和其他变量区分
//class Stack
//{
//public:
//	// 构造函数
//	Stack(int capacity = 0)
//	{
//		_a = new T[capacity]; // 开辟了10个int类型的空间
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	void Push(const T& x) // 函数传值传参会调用拷贝构造，所以要加引用，并且加了引用不改变，还要加上const
//	{}
//
//	// 析构函数
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
//	Stack<int> st1; // 整型Stack
//	st1.Push(1);
//
//	Stack<double> st2; // 浮点型Stack
//	st2.Push(2.2);
//
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//
//	cout << "请输入撒比这三个小猪的体重:> ";
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
