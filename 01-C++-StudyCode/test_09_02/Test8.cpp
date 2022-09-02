#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

void f(int) {
	cout << "f(int)" << endl;

}

void f(int*) {
	cout << "f(int*)" << endl;
}

int main()
{
	f(0);
	f(NULL);
	f((int*)NULL);

	return 0;
}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	// 将数组元素值全部乘以2
//	for (auto& e : arr) {
//		e *= 2;
//	}
//
//	// 打印数组中的所有元素
//	for (auto e : arr) {
//		cout << e << " ";
//	}
//
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	// 将数组元素值全部乘以2
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		arr[i] *= 2;
//	}
//
//	// 打印数组中的所有元素
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		cout << arr[i] << " ";
//	}
//
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	auto a = 1, b = 2;
//
//	auto c = 3, d = 3.14; // 编译器报错：“auto”必须始终推导为同一类型
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	auto b = &a; 
//	auto* c = &a; 
//	auto& d = a; 
//
//	cout << typeid(b).name() << endl; 
//	cout << typeid(c).name() << endl; 
//	cout << typeid(d).name() << endl; 
//
//	return 0;
//}

//double Test() {
//	return 3.14;
//}
//
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'A';
//	auto d = Test();
//
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	return 0;
//}


//inline int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = 0;
//	ret = Add(1, 2);
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year, int month, int day) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 8, 21);
//
//	return 0;
//}