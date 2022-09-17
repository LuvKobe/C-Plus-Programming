#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// vector：可以动态增长的数组

void TestVector1() {
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	vector<double> v2;
	v2.push_back(1.1);
	v2.push_back(2.2);
	v2.push_back(3.3);
	v2.push_back(4.4);

	vector<string> v3;
	v3.push_back("李白");
	v3.push_back("杜甫");
	v3.push_back("苏轼");
	v3.push_back("白居易");

	vector<int> v4(10, 5); // 用10个5来初始化v4


}

// vector遍历
void TestVector2() {
	//遍历
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	// 1、下标+[]
	for (size_t i = 0; i < v.size(); ++i) {
		v[i] += 1;
		cout << v[i] << " ";
	}
	cout << endl;


	// 2、迭代器
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		*it -= 1;
		cout << *it << " ";
		++it;
	}
	cout << endl;

	// 3、范围for
	for (auto& e : v) {
		cout << e << " ";
	}
	cout << endl;
}


int main()
{
	TestVector2();
	return 0;
}