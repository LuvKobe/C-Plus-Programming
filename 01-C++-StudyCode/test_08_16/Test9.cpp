#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// this = nullptr
// this指针本身不能修改,因为它是const修饰的
// this指针指向的对象可以被修改
//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	Date d3;
//
//	d1.Init(2022, 8, 16);
//	d2.Init(2022, 8, 17);
//
//	d1.Print();
//	d2.Print();
//
//	return 0;
//}

// this指针存在哪里？this指针存在栈区



// 类中有6个默认成员函数
// 分别是：构造函数和析构函数；拷贝构造和赋值重载
// 函数重载：函数名相同，参数不同
//class Date
//{
//public:
//	//Date() //构造函数 d1
//	//{
//	//	_year = 0;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	//Date(int year, int month, int day) //构造函数 d2
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	Date(int year = 1, int month = 1, int day = 1) //构造函数 d2（全缺省函数）
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//
//int main()
//{
//	Date d1; //定义对象无参数写法
//	d1.Print();
//
//	Date d2(2022, 8, 16); //定义对象有参数写法
//	d2.Print();
//
//	Date d3(2022); // 可以传一个
//	d3.Print();
//
//	Date d4(2022, 5); // 也可以传两个
//	d4.Print();
//	return 0;
//}


class Stack
{
public:
	void Psuh()
	{

	}
private:
	int* _a;
	int _top;
	int _capacity;
};