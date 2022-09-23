#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;


void TestString1() {
	/*常用的4个*/
	string s1; //构造空的string类对象s1
	string s2("hello world"); //用C格式字符串构造string类对象s2
	string s3(s2); //拷贝构造s3
	string s4(10, 'x'); //用10个'x'字符来初始化s4

	/*不常用的*/
	string s5("abcdefghijklmn", 4); //用字符串的前4个字符去初始化s5
	string s6(s2, 7, 3); //从s2字符串的第7个位置开始，取3个字符来初始化s6；假设取100个字符，那么就有多少取多少
	string s7(s2, 7); //假设不给npos，也就是从7位置开始，取42亿9千万个字符，也就是说，有多少取多少

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

	cout << endl;

	cout << s5 << endl;
	cout << s6 << endl;
	cout << s7 << endl;

}


void TestString2() {
	string s1("hello world!");

	//1.使用下标访问对象元素
	for (size_t i = 0; i < s1.size(); ++i) {
		cout << s1[i];
	}
	cout << endl;

	//2.使用下标修改对象元素
	for (size_t i = 0; i < s1.size(); ++i) {
		s1[i] = 'x';
	}
	cout << s1 << endl;
}


void TestString3() {
	string s1("hello world");

	//使用迭代器访问对象元素
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
}


void TestString4() {
	string s1("hello world!");

	//使用范围for访问对象元素
	for (auto e : s1) {
		cout << e;
	}
	cout << endl;

	//使用范围for修改对象元素
	for (auto& e : s1)
	{
		e = 'x';
	}
	cout << s1 << endl;
}

void TestString5() {
	string s1("hello world!");

	//使用范围at访问对象元素
	for (size_t i = 0; i < s1.size(); ++i) {
		cout << s1.at(i);
	}
	cout << endl;

	//使用范围for修改对象元素
	for (size_t i = 0; i < s1.size(); ++i) {
		s1.at(i) = 'x';
	}
	cout << s1 << endl;
	cout << endl;
}


void TestString6() {
	string s1("hello world");

	//使用反向迭代器访问对象元素
	string::reverse_iterator rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit;
		++rit;
	}
	cout << endl;
}

//实参传过来以后，此时形参s是实参s1的别名，因为还有个const修饰，所以s是只读的
void Func(const string& s) {
	string::const_reverse_iterator it = s.rbegin();
	while (it != s.rend())
	{
		cout << *it;
		++it;
	}
	cout << endl;
}

void TestString7() {
	string s1("hello world");
	cout << s1.capacity() << endl;
}

void TestPushBack()
{
	string s;
	size_t sz = s.capacity();
	cout << "making s grow:\n";
	for (int i = 0; i < 1000; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void TestString8() {
	string s1("HelloWorld");
	//resize(n)n大于对象当前的size时，将size扩大到n，扩大的字符默认为'\0'
	s1.resize(20);
	cout << s1 << endl; //HelloWorld
	cout << s1.size() << endl; //20
	cout << s1.capacity() << endl; //31

	cout << endl;

	string s2("HelloWorld");
	//resize(n, char)n大于对象当前的size时，将size扩大到n，扩大的字符为char
	s2.resize(20, 'x');
	cout << s2 << endl; //HelloWorldxxxxxxxxxxxxxxxx
	cout << s2.size() << endl; //20
	cout << s2.capacity() << endl; //31

	cout << endl;

	string s3("HelloWorld");
	//resize(n)n小于对象当前的size时，将size缩小到n
	s3.resize(2);
	cout << s3 << endl; //He
	cout << s3.size() << endl; //2
	cout << s3.capacity() << endl; //15
}



void TestString9() {
	string s1("HelloWorld");
	cout << s1.empty() << endl; //0

	s1.clear(); //clear()删除对象的内容，该对象将变为空字符串
	cout << s1.empty() << endl; //1
}



//void TestString10(){
//	string s1("Hel");
//	string s2("lo");
//
//	//直接把s2对象拼接到s1的后面
//	s1.append(s2);
//	cout << s1 << endl;
//
//	//在s1字符串后面拼接新的字符串
//	s1.append(" World");
//	cout << s1 << endl;
//
//	//将3个字符拼接到s1对象后面
//	s1.append(3, '!');
//	cout << s1 << endl;
//}


//void TestString10() {
//	string s1("hello world");
//	s1.pop_back();
//	s1.pop_back();
//	cout << s1 << endl;
//}


//void TestString10() {
//	string s1("HelloWorld!!!");
//	
//	//从s1字符串下标为10的位置开始，往后删除3个字符
//	s1.erase(11, 2); 
//	cout << s1 << endl; //HelloWorld
//
//	//删除s1字符串的最后一个位置的元素
//	s1.erase(s1.end() - 1);
//	cout << s1 << endl; //HelloWorl
//
//	//从begin+5的位置开始(实际上要从begin+6的位置开始删除)，一直删除到end的位置
//	s1.erase(s1.begin() + 5, s1.end());
//	cout << s1 << endl; //Hello
//}


//void TestString10() {
//	string s1("https://www.cplusplus.com/reference/string/string/find/");
//
//	//在s1字符串里面，反向搜索与s2对象所匹配的字符串，并返回第一次出现的位置
//	string s2("string");
//	size_t pos1 = s1.rfind(s2);
//	cout << pos1 << endl; //43
//
//	//在s1字符串里面，反向搜索与字符串str所匹配的第一个位置
//	char str[] = "reference";
//	size_t pos2 = s1.rfind(str);
//	cout << pos2 << endl; //26
//
//	//在s1字符串里面，反向搜索与字符char所匹配的第一个位置
//	size_t pos3 = s1.rfind('/');
//	cout << pos3 << endl; //54
//}



//void TestString10() {
//	string s1("https://www.cplusplus.com/reference/string/string/find/");
//
//	//在s1字符串里面，正向搜索与s2对象所匹配的字符串，并返回第一次出现的位置
//	string s2("www");
//	size_t pos1 = s1.find(s2);
//	cout << pos1 << endl; //8
//
//	//在s1字符串里面，正向搜索与字符串str所匹配的第一个位置
//	char str[] = "cplusplus.com";
//	size_t pos2 = s1.find(str);
//	cout << pos2 << endl; //12
//
//	//在s1字符串里面，正向搜索与字符char所匹配的第一个位置
//	size_t pos3 = s1.find(':');
//	cout << pos3 << endl; //5
//}

//void TestString10() {
//	string s1("hello world");
//	string s2("hello edison");
//
//	//"hello world"和"hello edison"比较
//	//s1和s2直接比较
//	cout << s1.compare(s2) << endl; //1
//
//	//"ell"和"hello edison"比较
//	//在s1对象里面，从下标为1的位置开始（包括1位置的字符），往后数三个字符，然后与s2对象进行比较
//	cout << s1.compare(1, 3, s2) << endl; //-1
//
//	//"hello"和"hello"比较
//	//在s1对象里面，从下标为0位置开始，往后数3个字符；然后在s2对象里面，从下标为0的位置，往后数3个字符；
//	//再把它们相比较
//	cout << s1.compare(0, 4, s2, 0, 4) << endl; //0
//}


//void TestString10() {
//	string s1("hello world");
//
//	//replace(pos, len, str)将第6个位置开始的4个字符替换为字符串str
//	s1.replace(6, 4, "xxxx"); //hello xxxxd
//	cout << s1 << endl;
//
//	//replace(pos, len, n, char)将第10个位置开始的1个字符替换为3个字符!!!
//	s1.replace(10, 1, 3, '!'); //hello xxxx!!!
//	cout << s1 << endl;
//}



//void TestString10() {
//	string s1;
//	string s2("world");
//
//	//支持string类的赋值
//	s1 = s2;
//	cout << s1 << endl; //world
//
//	//支持字符串的赋值
//	s1 = "hello";
//	cout << s1 << endl;  //hello
//
//	//支持字符的赋值
//	s1 = 'x';
//	cout << s1 << endl; //x
//}


//void TestString10() {
//	string s1;
//	string s2("Captain");
//	string s3("Chinese");
//	char str[] = "America";
//	char ch = '!';
//
//	//string类 + string类
//	s1 = s2 + s3;
//	cout << s1 << endl; //CaptainChinese
//
//	//string类 + 字符串
//	s1 = s2 + str;
//	cout << s1 << endl; //CaptainAmerica
//
//	//字符串 + string类
//	s1 = str + s2;
//	cout << s1 << endl; //AmericaCaptain
//
//	//string类 + 字符
//	s1 = s2 + ch;
//	cout << s1 << endl; //Captain!
//
//	//字符 + string类
//	s1 = ch + s2;
//	cout << s1 << endl; //!Captain
//}

void TestString10() {
	string s1;

	getline(cin, s1, 'd'); //输入
	cout << s1 << endl; //输出
}


int main()
{
	TestString10();
	return 0;
}

