#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream> // 等价于 <stdio.h>
using namespace std; // std 是封C++库的命名空间

//把std这个命名空间定义的东西给放出来
// 命名冲突 ———— 因为C语言没有很好的解决这个问题，所以cpp引入namespace是为了解决命名冲突的问题

//1. 同名的命名空间是可以同时存在的，编译器编译时会合并
//2. 命名空间可以嵌套

//int main()
//{
//	cout << "hello world" << endl;
//
//	int a = 0;
//	cin >> a; // >> 流提取运算符
//	cout << a; // << 流插入运算符
//	return 0;
//}


int main()
{
	int a;
	double d;
	
	cin >> a >> d; 

	cout << a <<" "<< d << endl;
	cout << a << d << endl; // endl 可以换行，等价于 '\n'

	/*向cout控制台去插入一个字符串hello world，再插入一个换行*/
	cout << "hello world" << endl;
}
