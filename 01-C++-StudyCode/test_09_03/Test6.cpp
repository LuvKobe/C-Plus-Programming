#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//struct Student
//{
//	void Init(const char* name, const char* gender, int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	// 这里并不是必须加_
//	// 习惯加这个，用来标识成员变量
//	char _name[20];
//	char _gender[3];
//	int _age;
//};

//class Student
//{
//public:
//	//显示基本信息
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	char _a;
//};


//class Student
//{
//public:
//	//显示基本信息
//	void Init(const char* name, const char* gender, int age);
//
//	void Print();
//
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//
//
//int main()
//{
//	Student st1;
//
//	return 0;
//}


//// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//
//// 类中什么都没有---空类
//class A3
//{};
//
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//
//	cout << sizeof(A2) << endl;
//
//	cout << sizeof(A3) << endl;
//	
//	return 0;
//}


//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	void Print(Date* this)
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//
//	void Init(Date* this, int year, int month, int day)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//
//	/*void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//
//int main()
//{
//	Date d1;
//	d1.Init(&d1, 2022, 9, 2);
//
//	Date d2;
//	d2.Init(&d2, 2022, 9, 3);
//
//	d1.Print(&d1);
//	d2.Print(&d2);
//
//	return 0;
//}


//class A
//{
//public:
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Show();
//}

// 2.下面程序编译运行结果是？  A、编译报错  B、运行崩溃  C、正常运行


class A
{
public:
	void printA()
	{
		cout << _a << endl;
	}
private:
	int _a;
};

int main()
{
	A* p = nullptr;
	p->printA();
}