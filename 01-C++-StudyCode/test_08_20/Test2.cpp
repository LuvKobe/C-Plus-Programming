#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
using namespace std;

int main()
{
	int a = 10;

	// �﷨�ϣ���a���ռ�ȡ��һ��������û���¿��ռ�
	int& ra = a;
	ra = 20;

	// ���﷨�ϣ����ﶨ����һ��paָ�룬������4���ֽڵĿռ䣬���ڴ洢a�ĵ�ַ
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
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	//��ֵ��������Ч�ʱȽ�
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
//	// ��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc3();
//	size_t end1 = clock();
//
//	// ��������Ϊ�����ķ���ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc4();
//	size_t end2 = clock();
//
//	// �������������������֮���ʱ��
//	cout << "A TestFunc3 time:" << end1 - begin1 << endl;
//	cout << "A& TestFunc4 time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	//ֵ��������Ϊ����ֵ���͵����ܱȽ�
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
//	Swap1(&x, &y); // C����
//	Swap2(x, y); // C++����
//
//	return 0;
//}




//int main()
//{
//	const int a = 10;
//	int& ra = a; // ��������ʱ�����aΪ��������const int��int
//	const int& ra = a; // �������ȷд��
//
//	int& b = 20; // ��������ʱ�����10Ϊ����
//	const int b = 20; // ��ȷд��
//
//	double d = 12.34;
//	int& rd = d; // ��������ʱ��������Ͳ�ͬ
//	const int& rd = d; //��ȷд��
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
//	N::a = 10; // �������ռ��еĳ�Աa��ֵΪ10
//	N::b = 5.55; // ����Աb��ֵΪ5.55
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