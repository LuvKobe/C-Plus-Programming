#define _CRT_SECURE_NO_WARNINGS 1

#include <string> // string的头文件
#include <iostream>
using namespace std;
// string --> 用来管理动态增长的字符数组，这个字符串以 \0 结尾


void TestString1() {
	string s1; // 无参的构造函数（里面啥都没有，但是有一个 \0）

	string s2("hello world"); // 带参的构造函数
	s2 += " haha!!!"; // 直接对s2进行扩容

	string s3(s2); // 拷贝构造
	string s4 = s2; // 拷贝构造

	string s5("qwertyuiopasdf", 4); // 用前4个初始化s5


	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	cout << "s4: " << s4 << endl;
	cout << "s5: " << s5 << endl;

	string s6(10, 'w');
	cout << "s6: " << s6 << endl;

	string s7(s2, 6, 3); // 从s2的第6个位置开始，拷贝3个字符
	cout << "s7: " << s7 << endl;
}


void TestString2() {
	string s1("hello");
	string s2("world");

	s1 = s2;
	s1 = "xxx";
	s1 = 'y';
}


void TestString3() {
	// 遍历string的每一个字符
	string s1("ab-cd");

	// 第一种：下标+[]
	// 可以使用重载运算符，为什么要重载呢？
	// 因为运算符只支持内置类型，重载可以，可以让自定义类型和内置类型一样，用起来很舒服
	for (size_t i = 0; i < s1.size(); i++) {
		// s1[i] 等价于 s1.operator[](i)
		cout << s1[i] << " ";
	}
	cout << endl;


	// 第二种：迭代器
	string::iterator it = s1.begin();
	while (it != s1.end()) // end是结束位置的下一个位置(也就是\0)
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

int main()
{
	TestString3();

	return 0;
}