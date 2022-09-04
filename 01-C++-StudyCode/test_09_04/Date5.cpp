#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"

// ��ȡĳ��ĳ�µ�����
int Date::GetMonthDay(int year, int month) {
	assert(year >= 0 && month > 0 && month < 13);

	// ����ΪʲôҪ��static�أ�
	// ��Ϊ��������ᱻƵ���ĵ��ã�ÿ�ε��ö�Ҫ���ټ�ʮ���ֽڵĿռ�
	// �����������static�Ժ󣬾ʹ洢�ھ�̬�����´�����ʱ���Ͳ����ٿ��ٿռ�
	static int monthDayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))) {
		return 29;
	}
	else {
		return monthDayArray[month];
	}
}

// ȫȱʡ�Ĺ��캯��
Date::Date(int year, int month, int day) {
	if (year >= 1 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year, month)) {
		_year = year;
		_month = month;
		_day = day;
	}
	else {
		cout << "error" << endl;
	}
}


// ����+����
// d1 + 100 --> d1����ı�
Date Date::operator+(int day) {
	/*
	// �ȶ���һ��ret������ret��d1�Ŀ�������
	// ������ﲻ����ret�Ļ�����ôd1�����������վͻᱻ�޸�
	Date ret(*this); // this����d1�ĵ�ַ��*this����d1

	ret._day += day; // ��ֱ�Ӽ���day
	while (ret._day > GetMonthDay(ret._year, ret._month)) { // ��������Ժ��day�����ڱ��µ�day����ô�ͽ���ѭ��
		ret._day -= GetMonthDay(ret._year, ret._month); // �ü����Ժ��day ��ȥ ���¸��е�����
		ret._month++; // ���±����һ����
		if (ret._month == 13) { // ����·ݵ���13����ô��ʾ���Ҫ��һ����ʱ�·�Ϊһ�·�
			++ret._year;
			ret._month = 1;
		}
	}
	return ret; // ����ret�Ŀ���
	*/

	// + ȥ���� +=
	// ���ָ��ţ���Ϊ����+��һ�ο������죬����+=û�п�������
	Date ret(*this);
	ret += day;

	return ret;
}


// ����+=����
// d1+=15 --> d1 = d1 + 15 --> d1Ҫ�ı�
Date& Date::operator+=(int day) {
	// ������ϵ�������һ����������ô�൱�ڼ��������
	if (day < 0) {
		return *this -= -day;
	}

	_day += day; // ��ֱ�Ӽ���day
	while (_day > GetMonthDay(_year, _month)) { // ��������Ժ��day�����ڱ��µ�day����ô�ͽ���ѭ��
		_day -= GetMonthDay(_year, _month); // �ü����Ժ��day ��ȥ ���¸��е�����
		_month++; // ���±����һ����
		if (_month == 13) { // ����·ݵ���13����ô��ʾ���Ҫ��һ����ʱ�·�Ϊһ�·�
			++_year;
			_month = 1;
		}
	}
	return *this; // ����d1


	// �� += ȥ���� +
	// ���Ƽ����֣���Ϊ����+�����ο������죬����+=Ҳ�����ο������죨��Ϊ+=������ȥ������+��
	/*
	* this = *this + day;
	return *this;
	*/
}


// ʲôʱ���� �����أ�
// �жϷ��ص��Ǹ����󣬳��˺����������ڲ��ڣ�
// ����ڣ��͵ð����ü��ϣ�������ڣ��Ͳ��ӣ�
// ��ֵ����һ���ǶԵģ�����һ���Ǹ�Ч��

// ����-����
Date Date::operator-(int day) {
	// - ȥ���� -=
	Date ret = *this;
	ret -= day;
	return ret;
}


// ����-=����
Date& Date::operator-=(int day) {
	// �����ȥ��������һ����������ô�൱�ڼ���һ������
	if (day < 0) {
		return *this += -day;
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

// ����-���� ��������
// d1 - d2���ѵ����� d1 �� d2 �Ĵ�С��
int Date::operator-(const Date& d) {
	// Ĭ��Ϊ��d1��d2С
	int flag = 1;
	Date max = *this; // d1
	Date min = d; // d2
	if (*this < d) { // ��� d1С��d2����ô�ͽ���
		min = *this;
		max = d;
		flag = -1;
	}

	int n = 0;
	while (min != max) {
		++n;
		++min;
	}
	// ��� d1��d2С����ôflag��Ϊ1
	// ��� d1С��d2����ôflag��Ϊ-1��С-���Ϊ����
	return n * flag; 
}

//��Ԫ����
std::ostream& operator<<(std::ostream& out, const Date& d) {
	out << d._year << "-" << d._month << "-" << d._day << endl;
	return out;
}
std::istream& operator>>(std::istream& in, Date& d) {
	in >> d._year >> d._month >> d._day;
	return in;  
}


//// >���������
//bool Date::operator>(const Date& d) {
//	if (_year > d._year) {
//		return true;
//	}
//	else if (_year == d._year && _month > d._month) {
//		return true;
//	}
//	else if (_year == d._year && _month == d._month && _day > d._day) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}

//// ==���������
//bool Date::operator==(const Date& d) {
//	return _year == d._year && _month == d._month && _day == d._day;
//}
//
//
//// >=���������
//// > �� == �Ѿ�д���ˣ�����ֱ����������
//bool Date::operator >= (const Date& d) {
//	return *this > d || *this == d;
//}
//
//
//// <���������
//// С�� ȡ������ ���ڵ���
//bool Date::operator < (const Date& d) {
//	return !(*this >= d);
//}
//
//
//// <=���������
//// <= ���� С��+����
//bool Date::operator <= (const Date& d) {
//	return *this < d || *this == d;
//}
//
//
//// !=���������
//// ���� ȡ������ ������
//bool Date::operator != (const Date& d) {
//	return !(*this == d);
//}
//
//
//// ����-���� ��������
//int Date::operator-(const Date& d) {
//	return 1;
//}




