#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>

using namespace std;



void TestVector1() {
	//��������v
	vector<int> v;

	//ʹ��push_back����4������
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//�����������������
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend()) {
		cout << *rit << " ";
		rit++;
	}
	cout << endl;
}

void TestVector2() {
	//��������v
	vector<int> v(10, 5);

	//��ȡ��ǰ�����е���ЧԪ�ظ���
	cout << v.size() << endl; 
	
	//��ȡ��ǰ�������������
	cout << v.capacity() << endl; 
}

void TestVector3() {
	//��ʼ������
	vector<int> v(10, 5);

	//��ӡsize��capacity
	cout << v.size() << endl; //10
	cout << v.capacity() << endl; //10

	cout << endl;

	//�ı�������capacityΪ20��size����
	v.reserve(20); 
	cout << v.size() << endl; //10
	cout << v.capacity() << endl; //20

	cout << endl;

	//�ı�������sizeΪ15��capacity����
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
	//��������v
	vector<int> v;

	//ʹ��push_backβ��5������
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//ʹ��pop_backβɾ4������
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();

	//��ӡ
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}


void TestVector6() {
	//��������v
	vector<int> v;

	//ʹ��push_backβ��5������
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//��������ͷ����0
	v.insert(v.begin(), 0);

	//��������ͷ����3��-1
	v.insert(v.begin(), 3, -1);

	//ɾ�������еĵ�һ��Ԫ��
	v.erase(v.begin());

	//ɾ���ڸõ����������ڵ�Ԫ�أ�����ҿ�]
	v.erase(v.begin(), v.begin() + 3);

	//��ӡ
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}

void TestVector7() {
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));

	// ʹ��find��ȡֵΪ3����λ�õ�iterator
	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
	// ��posλ��֮ǰ����30
	v.insert(pos, 30);

	//��ӡ
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;

	//ʹ��find��ȡֵΪ4����λ�õ�iterator
	pos = find(v.begin(), v.end(), 4);
	// ɾ��posλ�õ�����
	v.erase(pos);

	//��ӡ
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}

void TestVector8() {
	//����v1����
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	//����v2����
	vector<int> v2;
	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(7);

	//����v1��v2������
	v1.swap(v2);

	//��ӡv1
	for (auto e1 : v1) {
		cout << e1 << " ";
	}
	cout << endl;

	//��ӡv2
	for (auto e2 : v2) {
		cout << e2 << " ";
	}
	cout << endl;
}


void TestVector9() {
	//����v1����
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(7);
	v.push_back(9);


	// ͨ��[]��д��0��λ�á�
	cout << v[0] << endl;

	// ͨ��[i]�ķ�ʽ����vector
	for (size_t i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}


void TestVector10() {
	//����v1����
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(7);
	v.push_back(9);

	// C++11֧�ֵ���ʽ��Χfor����
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