#define _CRT_SECURE_NO_WARNINGS 1

#include <string> // string��ͷ�ļ�
#include <iostream>
using namespace std;
// string --> ��������̬�������ַ����飬����ַ����� \0 ��β


void TestString1() {
	string s1; // �޲εĹ��캯��������ɶ��û�У�������һ�� \0��

	string s2("hello world"); // ���εĹ��캯��
	s2 += " haha!!!"; // ֱ�Ӷ�s2��������

	string s3(s2); // ��������
	string s4 = s2; // ��������

	string s5("qwertyuiopasdf", 4); // ��ǰ4����ʼ��s5


	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	cout << "s4: " << s4 << endl;
	cout << "s5: " << s5 << endl;

	string s6(10, 'w');
	cout << "s6: " << s6 << endl;

	string s7(s2, 6, 3); // ��s2�ĵ�6��λ�ÿ�ʼ������3���ַ�
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
	// ����string��ÿһ���ַ�
	string s1("ab-cd");

	// ��һ�֣��±�+[]
	// ����ʹ�������������ΪʲôҪ�����أ�
	// ��Ϊ�����ֻ֧���������ͣ����ؿ��ԣ��������Զ������ͺ���������һ���������������
	for (size_t i = 0; i < s1.size(); i++) {
		// s1[i] �ȼ��� s1.operator[](i)
		cout << s1[i] << " ";
	}
	cout << endl;


	// �ڶ��֣�������
	string::iterator it = s1.begin();
	while (it != s1.end()) // end�ǽ���λ�õ���һ��λ��(Ҳ����\0)
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