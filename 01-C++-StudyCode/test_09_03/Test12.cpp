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
//	// ���ﲢ���Ǳ����_
//	// ϰ�߼������������ʶ��Ա����
//	char _name[20];
//	char _gender[3];
//	int _age;
//};

//class Student
//{
//public:
//	//��ʾ������Ϣ
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
//	//��ʾ������Ϣ
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


//// ���м��г�Ա���������г�Ա����
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// ���н��г�Ա����
//class A2 {
//public:
//	void f2() {}
//};
//
//// ����ʲô��û��---����
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
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
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

// 2.�������������н���ǣ�  A�����뱨��  B�����б���  C����������


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