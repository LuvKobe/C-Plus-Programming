#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"

// 获取某年某月的天数
int Date::GetMonthDay(int year, int month) {
	assert(year >= 0 && month > 0 && month < 13);

	// 这里为什么要加static呢？
	// 因为这个函数会被频繁的调用，每次调用都要开辟几十个字节的空间
	// 所以这里加上static以后，就存储在静态区，下次再用时，就不会再开辟空间
	static int monthDayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))) {
		return 29;
	}
	else {
		return monthDayArray[month];
	}
}

// 全缺省的构造函数
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


// 日期+天数
// d1 + 100 --> d1不会改变
Date Date::operator+(int day) {
	/*
	// 先定义一个ret出来，ret是d1的拷贝构造
	// 如果这里不定义ret的话，那么d1本来的年月日就会被修改
	Date ret(*this); // this就是d1的地址，*this就是d1

	ret._day += day; // 先直接加上day
	while (ret._day > GetMonthDay(ret._year, ret._month)) { // 如果加完以后的day，大于本月的day，那么就进入循环
		ret._day -= GetMonthDay(ret._year, ret._month); // 拿加完以后的day 减去 本月该有的天数
		ret._month++; // 本月变成下一个月
		if (ret._month == 13) { // 如果月份等于13，那么表示年份要加一，此时月份为一月份
			++ret._year;
			ret._month = 1;
		}
	}
	return ret; // 返回ret的拷贝
	*/

	// + 去复用 +=
	// 这种更优，因为调用+有一次拷贝构造，调用+=没有拷贝构造
	Date ret(*this);
	ret += day;

	return ret;
}


// 日期+=天数
// d1+=15 --> d1 = d1 + 15 --> d1要改变
Date& Date::operator+=(int day) {
	// 如果加上的天数是一个负数，那么相当于减了这个数
	if (day < 0) {
		return *this -= -day;
	}

	_day += day; // 先直接加上day
	while (_day > GetMonthDay(_year, _month)) { // 如果加完以后的day，大于本月的day，那么就进入循环
		_day -= GetMonthDay(_year, _month); // 拿加完以后的day 减去 本月该有的天数
		_month++; // 本月变成下一个月
		if (_month == 13) { // 如果月份等于13，那么表示年份要加一，此时月份为一月份
			++_year;
			_month = 1;
		}
	}
	return *this; // 返回d1


	// 让 += 去复用 +
	// 不推荐这种，因为调用+有两次拷贝构造，调用+=也有两次拷贝构造（因为+=里面又去复用了+）
	/*
	* this = *this + day;
	return *this;
	*/
}


// 什么时候用 引用呢？
// 判断返回的那个对象，出了函数作用域还在不在？
// 如果在，就得把引用加上；如果不在，就不加！
// 传值返回一定是对的，但不一定是高效的

// 日期-天数
Date Date::operator-(int day) {
	// - 去复用 -=
	Date ret = *this;
	ret -= day;
	return ret;
}


// 日期-=天数
Date& Date::operator-=(int day) {
	// 如果减去的天数是一个负数，那么相当于加了一个正数
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

// 日期-日期 返回天数
// d1 - d2，难点在于 d1 和 d2 的大小？
int Date::operator-(const Date& d) {
	// 默认为：d1大，d2小
	int flag = 1;
	Date max = *this; // d1
	Date min = d; // d2
	if (*this < d) { // 如果 d1小，d2大，那么就交换
		min = *this;
		max = d;
		flag = -1;
	}

	int n = 0;
	while (min != max) {
		++n;
		++min;
	}
	// 如果 d1大，d2小，那么flag就为1
	// 如果 d1小，d2大，那么flag就为-1，小-大就为负数
	return n * flag; 
}

//友元函数
std::ostream& operator<<(std::ostream& out, const Date& d) {
	out << d._year << "-" << d._month << "-" << d._day << endl;
	return out;
}
std::istream& operator>>(std::istream& in, Date& d) {
	in >> d._year >> d._month >> d._day;
	return in;  
}


//// >运算符重载
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

//// ==运算符重载
//bool Date::operator==(const Date& d) {
//	return _year == d._year && _month == d._month && _day == d._day;
//}
//
//
//// >=运算符重载
//// > 和 == 已经写好了，可以直接拿来复用
//bool Date::operator >= (const Date& d) {
//	return *this > d || *this == d;
//}
//
//
//// <运算符重载
//// 小于 取反就是 大于等于
//bool Date::operator < (const Date& d) {
//	return !(*this >= d);
//}
//
//
//// <=运算符重载
//// <= 就是 小于+等于
//bool Date::operator <= (const Date& d) {
//	return *this < d || *this == d;
//}
//
//
//// !=运算符重载
//// 等于 取反就是 不等于
//bool Date::operator != (const Date& d) {
//	return !(*this == d);
//}
//
//
//// 日期-日期 返回天数
//int Date::operator-(const Date& d) {
//	return 1;
//}




