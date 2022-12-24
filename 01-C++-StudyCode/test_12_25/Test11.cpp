#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <assert.h>
using namespace std;


//class Date
//{
//public:
//	//���캯��
//	Date()
//	{
//
//	}
//	//��ʼ��
//	void Init(int year, int month, int day) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//��ӡ
//	void Print() {
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};



//class Date
//{
//public:
//	//ȫȱʡ�Ĺ��캯��
//	Date(int year = 1, int month = 1, int day = 1) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//��ӡ
//	void Print() {
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	Date d2(2000, 10, 1);
//	d2.Print();
//	return 0;
//}


////ջ
//class Stack
//{
//public:
//    //���캯��
//    Stack(int capacity = 10) {
//        _a = (int*)malloc(sizeof(int) * capacity);
//        if (_a == NULL) {
//            exit(-1);
//        }
//
//        _top = 0;
//        _capacity = capacity;
//    }
//private:
//    int* _a;
//    int _top;
//    int _capacity;
//};
//
////����
//class MyQueue {
//public:
//    void push(int x) {
//        //���� ...
//    }
//
//    int pop() {
//        //���� ...
//    }
//private:
//    Stack _st1;
//    Stack _st2;
//    int _size;
//};
//
//int main()
//{
//    MyQueue q;
//
//    return 0;
//}




//class Stack
//{
//public:
//	Stack(int capacity = 10)
//	{
//		_a = (int*)malloc(sizeof(int)*capacity);
//		assert(_a);
//
//		_top = 0;
//		_capacity = capacity;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class MyQueue 
//{
//public:
//	// Ĭ�����ɹ��캯���Ϳ�������
//	void push(int x) {
//	}
//
//	int pop() {
//	}
//private:
//	Stack _st1;
//	Stack _st2;
//};
//
//int main()
//{
//	MyQueue q;
//
//	return 0;
//}


//class Date
//{
//public:
//	//���캯��
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//��������
//	Date(const Date& d) {
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2021, 5, 31);
//	Date d2(d1); // ���Ѵ��ڵĶ���d1��������d2
//
//	return 0;
//}



class Date
{
public:
	//��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month) {
		int MonthDayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
			return 29;
		}
		else {
			return MonthDayArray[month];
		}
	}

	//���캯��
	Date(int year = 1, int month = 1, int day = 1) {
		if (year >= 1 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year, month)) {
			_year = year;
			_month = month;
			_day = day;
		}
		else {
			cout << "���ڷǷ�" << endl;
		}
	}

	//�������캯��
	Date(const Date& d) {
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	//��ֵ���������
	Date& operator=(const Date& d) {
		if (this != &d) {
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}

	//��������
	//~Date();

	//==���������
	bool operator==(const Date& d) {
		return _year == d._year && _month == d._month && _day == d._day;
	}

	//>���������
	// d1.operator>(&d1, d2)
	bool operator>(const Date& d) {
		if (_year > d._year) {
			return true;
		}
		else if (_year == d._year && _month > d._month) {
			return true;
		}
		else if (_year == d._year && _month == d._month && _day > d._day) {
			return true;
		}
		else {
			return false;
		}
	}

	// >=���������
	bool operator>=(const Date& d) {
		return *this > d || *this == d;
	}

	// <�����
	// >=ȡ������<
	bool operator<(const Date& d) {
		return !(*this >= d);
	}

	// <=�����
	bool operator<=(const Date& d) {
		return !(*this > d);
	}

	//!=�����
	bool operator!=(const Date& d) {
		return !(*this == d);
	}

	//���� += ����
	Date& operator+=(int day) {
		if (day < 0) {
			return *this -= day;
		}
		_day += day;
		while (_day > GetMonthDay(_year, _month)) {
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (_month == 13) {
				++_year;
				_month = 1;
			}
		}
		return *this;
	}

	//���� + ����
	Date operator+(int day) {
		Date ret(*this);
		ret += day;

		return ret;
	}

	//���� -= ����
	Date& operator-=(int day) {
		//�����ȥ��������һ����������ô�൱�ڼ���һ������
		if (day < 0) {
			return *this += day;
		}

		_day -= day;
		while (_day <= 0) {
			--_month;
			if (_month == 0) {
				_month = 12;
				--_year;
			}
			_day += GetMonthDay(_year, _month);
		}
		return *this;
	}

	//���� - ����
	Date operator-(int day) {
		Date ret(*this);
		ret -= day;

		return ret;
	}

	//���� - ����
	int operator-(const Date& d) {
		Date max = *this;
		Date min = d;
		int flag = 1;
		if (*this < d) {
			min = *this;
			max = d;
			flag = -1;
		}

		int n = 0;
		while (min != max) {
			++n;
			++min;
		}
		return n * flag;
	}

	//ǰ��++
	Date& operator++() {
		*this += 1;
		return *this;
	}

	//����++
	Date operator++(int) {
		Date tmp(*this);
		*this += 1;
		return tmp;
	}

	//ǰ��--
	Date& operator--() {
		*this -= 1;
		return *this;
	}

	//����--
	Date operator--(int) {
		Date tmp(*this);
		*this -= 1;
		return tmp;
	}

	//��ӡ
	void Print() {
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};


/*
* ����+���� �� ����-���� ������ı�ԭ�����ڵ�ֵ 
*/

int main()
{
	Date d1(2022, 10, 1);
	Date d2(2022, 10, 1);

	d1+=31;
	d1.Print();

	/*if (d1 > d2) {
		cout << ">" << endl;
	}

	if (d1 < d2) {
		cout << "<" << endl;
	}

	if (d1 == d2) {
		cout << "==" << endl;
	}*/


	return 0;
}