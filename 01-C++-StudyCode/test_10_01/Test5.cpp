#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>

using namespace std;



void TestVector1() {
	//定义容器v
	vector<int> v;

	//使用push_back插入4个数据
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//正向迭代器遍历容器
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend()) {
		cout << *rit << " ";
		rit++;
	}
	cout << endl;
}

void TestVector2() {
	//定义容器v
	vector<int> v(10, 5);

	//获取当前容器中的有效元素个数
	cout << v.size() << endl; 
	
	//获取当前容器的最大容量
	cout << v.capacity() << endl; 
}

void TestVector3() {
	//初始化容器
	vector<int> v(10, 5);

	//打印size和capacity
	cout << v.size() << endl; //10
	cout << v.capacity() << endl; //10

	cout << endl;

	//改变容器的capacity为20，size不变
	v.reserve(20); 
	cout << v.size() << endl; //10
	cout << v.capacity() << endl; //20

	cout << endl;

	//改变容器的size为15，capacity不变
	v.resize(15); 
	cout << v.size() << endl; //15
	cout << v.capacity() << endl; //20
}

void TestVector4() {
	vector<int> v1(10, 5);
	cout << v1.empty() << endl;

	vector<int> v2;
	cout << v2.empty() << endl;
}

void TestVector5() {
	//定义容器v
	vector<int> v;

	//使用push_back尾插5个数据
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//使用pop_back尾删4个数据
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();

	//打印
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}


void TestVector6() {
	//定义容器v
	vector<int> v;

	//使用push_back尾插5个数据
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//在容器开头插入0
	v.insert(v.begin(), 0);

	//在容器开头插入3个-1
	v.insert(v.begin(), 3, -1);

	//删除容器中的第一个元素
	v.erase(v.begin());

	//删除在该迭代器区间内的元素（左闭右开]
	v.erase(v.begin(), v.begin() + 3);

	//打印
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}

void TestVector7() {
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	// 使用find获取值为3所在位置的iterator
	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
	// 在pos位置之前插入30
	v.insert(pos, 30);

	//打印
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;

	//使用find获取值为4所在位置的iterator
	pos = find(v.begin(), v.end(), 4);
	// 删除pos位置的数据
	v.erase(pos);

	//打印
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}

void TestVector8() {
	//定义v1容器
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	//定义v2容器
	vector<int> v2;
	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(7);

	//交换v1和v2的数据
	v1.swap(v2);

	//打印v1
	for (auto e1 : v1) {
		cout << e1 << " ";
	}
	cout << endl;

	//打印v2
	for (auto e2 : v2) {
		cout << e2 << " ";
	}
	cout << endl;
}


void TestVector9() {
	//定义v1容器
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(7);
	v.push_back(9);


	// 通过[]读写第0个位置。
	cout << v[0] << endl;

	// 通过[i]的方式遍历vector
	for (size_t i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}


void TestVector10() {
	//定义v1容器
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(7);
	v.push_back(9);

	// C++11支持的新式范围for遍历
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}



int main()
{
	TestVector10();
	return 0;
}