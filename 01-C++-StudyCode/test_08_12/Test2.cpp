#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

/*
int main()
{
	int a = 10;
	int& b = a; //b是a的引用
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


// 引用的场景
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

//const 引用：可以传变量、常量、隐式类型转换

// 交换函数使用 引用
//void Swap(int& x, int& y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
////两个Swap函数运用了 "函数重载"
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
//// 总结：用引用传参更好理解，更直观！


// 下一次调用是上一次调用建立栈帧覆盖的

// 实现ADD的宏
#define ADD(X,Y) ((X)+(Y));

// 为什么C++要出 inline？是为了解决宏函数晦涩难懂，容易写错的问题
// 宏不支持调试
// inline：1、debug支持调试。2、不容易写错，就是普通函数的写法
inline int Add(int x, int y) {
	int z = x + y;
	return z;
}

int main()
{
	ADD(1, 2); //


	return 0;
}