#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// this = nullptr
// thisָ�뱾�����޸�,��Ϊ����const���ε�
// thisָ��ָ��Ķ�����Ա��޸�
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
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
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

// thisָ��������thisָ�����ջ��



// ������6��Ĭ�ϳ�Ա����
// �ֱ��ǣ����캯����������������������͸�ֵ����
// �������أ���������ͬ��������ͬ
//class Date
//{
//public:
//	//Date() //���캯�� d1
//	//{
//	//	_year = 0;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	//Date(int year, int month, int day) //���캯�� d2
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	Date(int year = 1, int month = 1, int day = 1) //���캯�� d2��ȫȱʡ������
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
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
//};
//
//int main()
//{
//	Date d1; //��������޲���д��
//	d1.Print();
//
//	Date d2(2022, 8, 16); //��������в���д��
//	d2.Print();
//
//	Date d3(2022); // ���Դ�һ��
//	d3.Print();
//
//	Date d4(2022, 5); // Ҳ���Դ�����
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