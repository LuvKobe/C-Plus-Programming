//#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

/*

面试高频：

C语言不支持重载，C++支持重载
C++是如何支持的？为什么C语言不能支持？

编译链接的过程：f.h  f.cpp  Test.cpp

1、预处理  -->  头文件展开、宏替换、条件编译、去掉注释
生成了 f.i  test.i

2、编译 --> 检查语法，生成汇编代码
生成了 f.s  test.s

3、汇编 --> 把汇编代码转换成二进制的机器码
生成了 f.o  test.o（里面全是0 和 1）

4、链接 --> 找调用函数的地址，链接对应上，合并到一起
生成了 a.out（可执行程序）

*/



//int main()
//{
//	// b叫做a的引用，也叫做b是a的别名
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

// 引用的应用
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



// 这是C语言定义单链表的方式，实参要传指针的地址，并且形参要用二级指针接收
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


//// C++的方式一
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LTNode;
//
////这里形参部分使用了 "引用"，phead是plist的别名，phead的改变是影响plist
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

// C++的方式二
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}LTNode,*PLTNode; //这里和方法二是一样的

//这里形参部分使用了 "引用"，phead是plist的别名，phead的改变是影响plist
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