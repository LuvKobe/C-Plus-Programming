#include <iostream>
using namespace std;

//int TestAuto() {
//	return 10;
//}
//
//int main()
//{
//	int a = 10;
//	auto b = &a;
//	auto c = 'a';
//	auto d = TestAuto();
//
//	//typeid可以查看变量类型
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//
//	return 0;
//}


//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//
//	*a = 20;
//	*b = 30;
//	c = 40;
//
//	return 0;
//}

//int main()
//{
//	int arry[] = { 1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < sizeof(arry) / sizeof(int); ++i) {
//		arry[i] *= 2;
//	}
//
//	//C语言打印数组方式
//	for (int i = 0; i < sizeof(arry) / sizeof(int); ++i) {
//		cout << arry[i] << " ";
//	}
//	cout << endl;
//
//	// C++11打印数组 --> 范围for
//	// 依次自动取arry中的数据，赋值给e，自动判断结束
//	for (auto& e : arry) {
//		e /= 2;
//	}
//
//	for (auto e : arry) {
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}


//int main()
//{
//	//C++定义空指针的方法
//	int* p1 = NULL;
//	int* p2 = 0;
//	int* p3 = nullptr;// 推荐使用这种
//
//
//	return 0;
//}


// 类
//class Student
//{
//public: //共有
//	// 类体：由成员函数和成员变量组成
//	void Init(const char* name, const char* gender, int age) {
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	
//	void Print() {
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//private: //私有
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//
//int main()
//{
//	// 对象
//	Student s2;
//
//
//	return 0;
//}


//// C语言中 --> 数据和方法是分离的
//struct Stack
//{
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//void StackInit(struct Stack* ps)
//{}
//
//void StackPush(struct Stack* ps, int x)
//{}
//
//void StackPop(struct Stack* ps)
//{}
//
//int main()
//{
//
//	return 0;
//}


// C++的类定义
// 封装：
// 1、数据和方法封装到一起，类里面
// 2、想给你自由访问的设计成公有，不想给你直接访问的就设置成私有
// 一般情况下设计类，成员数据都是私有或者保护，而想给你访问的函数是共有，不想给你访问时，私有或保护
//class Stack
//{
//public:
//	void Init()
//	{}
//
//	void Push(int x)
//	{}
//
//	void Top()
//	{}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//
//// 低耦合，高内聚
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//	st.Push(5);
//
//	cout << st.Top() << endl;
//
//	return 0;
//}