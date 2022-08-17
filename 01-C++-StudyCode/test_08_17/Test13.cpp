#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
using namespace std;

int main()
{
	int a = 10;

	// 语法上，给a这块空间取了一个别名，没有新开空间
	int& ra = a;
	ra = 20;

	// 在语法上，这里定义了一个pa指针，开辟了4个字节的空间，用于存储a的地址
	int* pa = &a;
	*pa = 20;

	cout << "&a = " << &a << endl;
	cout << "&ra = " << &ra << endl;
	cout << "&pa = " << &pa << endl;

	return 0;
}


//int main()
//{
//	int a = 10;
//	int& ra = a;
//
//	cout << "&a = " << &a << endl;
//	cout << "&ra = " << &ra << endl;
//
//	return 0;
//}





//#include <time.h>
//struct A {
//	int a[10000];
//};
//
//A a;
//
//void TestFunc1(A a) {}
//
//void TestFunc2(A& a) {}
//
//void TestRefAndValue()
//{
//	A a;
//
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	//传值、传引用效率比较
//	TestRefAndValue();
//
//	return 0;
//}


//struct A { 
//	int a[10000]; 
//};
//
//A a;
//
//A TestFunc3() { 
//	return a; 
//}
//
//A& TestFunc4() { 
//	return a; 
//}
//
//void TestReturnByRefOrValue()
//{
//	// 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc3();
//	size_t end1 = clock();
//
//	// 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc4();
//	size_t end2 = clock();
//
//	// 计算两个函数运算完成之后的时间
//	cout << "A TestFunc3 time:" << end1 - begin1 << endl;
//	cout << "A& TestFunc4 time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	//值和引用作为返回值类型的性能比较
//	TestReturnByRefOrValue();
//
//	return 0;
//}



//int& Add(int a, int b)
//{
//	static int c = a + b;
//	return c;
//}
//
//int main()
//{
//	int ret1 = Add(1, 2);
//	int ret2 = Add(3, 4);
//
//	cout << "Add(1, 2) is :" << ret1 << endl;
//	cout << "Add(3, 4) is :" << ret2 << endl;
//
//	return 0;
//}



//void Swap1(int* p1, int* p2) {
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//void Swap2(int& rx, int& ry) {
//	int temp = rx;
//	rx = ry;
//	ry = temp;
//}
//
//int main()
//{
//	int x = 3, y = 5;
//
//	Swap1(&x, &y); // C传参
//	Swap2(x, y); // C++传参
//
//	return 0;
//}




//int main()
//{
//	const int a = 10;
//	int& ra = a; // 该语句编译时会出错，a为常量，由const int到int
//	const int& ra = a; // 这才是正确写法
//
//	int& b = 20; // 该语句编译时会出错，10为常量
//	const int b = 20; // 正确写法
//
//	double d = 12.34;
//	int& rd = d; // 该语句编译时会出错，类型不同
//	const int& rd = d; //正确写法
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	int& b = a;
//
//	int c = 20;
//	b = c;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	
//	cout << " " << endl;
//
//	b = 20;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	return 0;
//}



//extern "C" int Add(int left, int right);
//
//int main()
//{
//	Add(1, 2);
//
//	return 0;
//}

//int Test(int a, int b) {
//	return a + b;
//}
//
//double Test(double a, double b) {
//	return a + b;
//}
//
//double Test(int a, double b) {
//	return a + b;
//}
//
//int main()
//{
//	cout << Test(10, 20) << endl;
//	cout << Test(5.5, 5.5) << endl;
//	cout << Test(10, 5.5) << endl;
//
//	return 0;
//}


//void Test(int a = 1, int b = 2, int c = 3)
//{
//    cout << a << " " << b << " " << c << endl;
//}
//
//int main()
//{
//    Test();
//    Test(10);
//    Test(10, 20);
//    Test(10, 20, 30);
//
//    return 0;
//}

//void Test(int a = 0) {
//	cout << a << endl;
//}
//
//int main()
//{
//	Test(); 
//
//	Test(10); 
//
//	return 0;
//}

//int main()
//{
//	int a;
//	float b;
//	char c;
//
//	cin >> a; 
//	cin >> b; 
//	cin >> c; 
//
//	cout << endl;
//
//	cout << a << endl;
//	cout << b << endl; 
//	cout << c << endl; 
//
//	return 0;
//}

//int main()
//{
//	cout << "hello world!" << endl;
//
//	return 0;
//}

//#include <stdio.h>
//namespace N
//{
//	int a;
//	float b;
//}
//using namespace N; 
//
//int main()
//{
//	a = 10; 
//
//	printf("%d\n", a);
//	return 0;
//}


//namespace N
//{
//	int a;
//	float b;
//}
//
//using N::a;
//using N::b;
//
//int main()
//{
//	a = 10;
//	b = 5.55;
//
//	printf("%d\n", a);
//	printf("%.2f\n", b);
//
//	return 0;
//}


//namespace N
//{
//	int a;
//	float b;
//}
//
//int main()
//{
//	N::a = 10; // 将命名空间中的成员a赋值为10
//	N::b = 5.55; // 将成员b赋值为5.55
//
//	printf("%d\n", N::a);
//	printf("%.2f\n", N::b);
//
//	return 0;
//}



//namespace N1
//{
//	int a;
//	int Add(int x, int y) {
//		return x + y;
//	}
//}
//
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}
//
//
//namespace N1
//{
//	int a;
//	int b;
//	namespace N2
//	{
//		int c;
//		int d;
//	}
//}