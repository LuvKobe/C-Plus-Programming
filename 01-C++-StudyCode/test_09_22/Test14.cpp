#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;


void TestString1() {
	/*���õ�4��*/
	string s1; //����յ�string�����s1
	string s2("hello world"); //��C��ʽ�ַ�������string�����s2
	string s3(s2); //��������s3
	string s4(10, 'x'); //��10��'x'�ַ�����ʼ��s4

	/*�����õ�*/
	string s5("abcdefghijklmn", 4); //���ַ�����ǰ4���ַ�ȥ��ʼ��s5
	string s6(s2, 7, 3); //��s2�ַ����ĵ�7��λ�ÿ�ʼ��ȡ3���ַ�����ʼ��s6������ȡ100���ַ�����ô���ж���ȡ����
	string s7(s2, 7); //���費��npos��Ҳ���Ǵ�7λ�ÿ�ʼ��ȡ42��9ǧ����ַ���Ҳ����˵���ж���ȡ����

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

	//1.ʹ���±���ʶ���Ԫ��
	for (size_t i = 0; i < s1.size(); ++i) {
		cout << s1[i];
	}
	cout << endl;

	//2.ʹ���±��޸Ķ���Ԫ��
	for (size_t i = 0; i < s1.size(); ++i) {
		s1[i] = 'x';
	}
	cout << s1 << endl;
}


void TestString3() {
	string s1("hello world");

	//ʹ�õ��������ʶ���Ԫ��
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

	//ʹ�÷�Χfor���ʶ���Ԫ��
	for (auto e : s1) {
		cout << e;
	}
	cout << endl;

	//ʹ�÷�Χfor�޸Ķ���Ԫ��
	for (auto& e : s1)
	{
		e = 'x';
	}
	cout << s1 << endl;
}

void TestString5() {
	string s1("hello world!");

	//ʹ�÷�Χat���ʶ���Ԫ��
	for (size_t i = 0; i < s1.size(); ++i) {
		cout << s1.at(i);
	}
	cout << endl;

	//ʹ�÷�Χfor�޸Ķ���Ԫ��
	for (size_t i = 0; i < s1.size(); ++i) {
		s1.at(i) = 'x';
	}
	cout << s1 << endl;
	cout << endl;
}


void TestString6() {
	string s1("hello world");

	//ʹ�÷�����������ʶ���Ԫ��
	string::reverse_iterator rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit;
		++rit;
	}
	cout << endl;
}

//ʵ�δ������Ժ󣬴�ʱ�β�s��ʵ��s1�ı�������Ϊ���и�const���Σ�����s��ֻ����
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
	//resize(n)n���ڶ���ǰ��sizeʱ����size����n��������ַ�Ĭ��Ϊ'\0'
	s1.resize(20);
	cout << s1 << endl; //HelloWorld
	cout << s1.size() << endl; //20
	cout << s1.capacity() << endl; //31

	cout << endl;

	string s2("HelloWorld");
	//resize(n, char)n���ڶ���ǰ��sizeʱ����size����n��������ַ�Ϊchar
	s2.resize(20, 'x');
	cout << s2 << endl; //HelloWorldxxxxxxxxxxxxxxxx
	cout << s2.size() << endl; //20
	cout << s2.capacity() << endl; //31

	cout << endl;

	string s3("HelloWorld");
	//resize(n)nС�ڶ���ǰ��sizeʱ����size��С��n
	s3.resize(2);
	cout << s3 << endl; //He
	cout << s3.size() << endl; //2
	cout << s3.capacity() << endl; //15
}



void TestString9() {
	string s1("HelloWorld");
	cout << s1.empty() << endl; //0

	s1.clear(); //clear()ɾ����������ݣ��ö��󽫱�Ϊ���ַ���
	cout << s1.empty() << endl; //1
}



//void TestString10(){
//	string s1("Hel");
//	string s2("lo");
//
//	//ֱ�Ӱ�s2����ƴ�ӵ�s1�ĺ���
//	s1.append(s2);
//	cout << s1 << endl;
//
//	//��s1�ַ�������ƴ���µ��ַ���
//	s1.append(" World");
//	cout << s1 << endl;
//
//	//��3���ַ�ƴ�ӵ�s1�������
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
//	//��s1�ַ����±�Ϊ10��λ�ÿ�ʼ������ɾ��3���ַ�
//	s1.erase(11, 2); 
//	cout << s1 << endl; //HelloWorld
//
//	//ɾ��s1�ַ��������һ��λ�õ�Ԫ��
//	s1.erase(s1.end() - 1);
//	cout << s1 << endl; //HelloWorl
//
//	//��begin+5��λ�ÿ�ʼ(ʵ����Ҫ��begin+6��λ�ÿ�ʼɾ��)��һֱɾ����end��λ��
//	s1.erase(s1.begin() + 5, s1.end());
//	cout << s1 << endl; //Hello
//}


//void TestString10() {
//	string s1("https://www.cplusplus.com/reference/string/string/find/");
//
//	//��s1�ַ������棬����������s2������ƥ����ַ����������ص�һ�γ��ֵ�λ��
//	string s2("string");
//	size_t pos1 = s1.rfind(s2);
//	cout << pos1 << endl; //43
//
//	//��s1�ַ������棬�����������ַ���str��ƥ��ĵ�һ��λ��
//	char str[] = "reference";
//	size_t pos2 = s1.rfind(str);
//	cout << pos2 << endl; //26
//
//	//��s1�ַ������棬�����������ַ�char��ƥ��ĵ�һ��λ��
//	size_t pos3 = s1.rfind('/');
//	cout << pos3 << endl; //54
//}



//void TestString10() {
//	string s1("https://www.cplusplus.com/reference/string/string/find/");
//
//	//��s1�ַ������棬����������s2������ƥ����ַ����������ص�һ�γ��ֵ�λ��
//	string s2("www");
//	size_t pos1 = s1.find(s2);
//	cout << pos1 << endl; //8
//
//	//��s1�ַ������棬�����������ַ���str��ƥ��ĵ�һ��λ��
//	char str[] = "cplusplus.com";
//	size_t pos2 = s1.find(str);
//	cout << pos2 << endl; //12
//
//	//��s1�ַ������棬�����������ַ�char��ƥ��ĵ�һ��λ��
//	size_t pos3 = s1.find(':');
//	cout << pos3 << endl; //5
//}

//void TestString10() {
//	string s1("hello world");
//	string s2("hello edison");
//
//	//"hello world"��"hello edison"�Ƚ�
//	//s1��s2ֱ�ӱȽ�
//	cout << s1.compare(s2) << endl; //1
//
//	//"ell"��"hello edison"�Ƚ�
//	//��s1�������棬���±�Ϊ1��λ�ÿ�ʼ������1λ�õ��ַ����������������ַ���Ȼ����s2������бȽ�
//	cout << s1.compare(1, 3, s2) << endl; //-1
//
//	//"hello"��"hello"�Ƚ�
//	//��s1�������棬���±�Ϊ0λ�ÿ�ʼ��������3���ַ���Ȼ����s2�������棬���±�Ϊ0��λ�ã�������3���ַ���
//	//�ٰ�������Ƚ�
//	cout << s1.compare(0, 4, s2, 0, 4) << endl; //0
//}


//void TestString10() {
//	string s1("hello world");
//
//	//replace(pos, len, str)����6��λ�ÿ�ʼ��4���ַ��滻Ϊ�ַ���str
//	s1.replace(6, 4, "xxxx"); //hello xxxxd
//	cout << s1 << endl;
//
//	//replace(pos, len, n, char)����10��λ�ÿ�ʼ��1���ַ��滻Ϊ3���ַ�!!!
//	s1.replace(10, 1, 3, '!'); //hello xxxx!!!
//	cout << s1 << endl;
//}



//void TestString10() {
//	string s1;
//	string s2("world");
//
//	//֧��string��ĸ�ֵ
//	s1 = s2;
//	cout << s1 << endl; //world
//
//	//֧���ַ����ĸ�ֵ
//	s1 = "hello";
//	cout << s1 << endl;  //hello
//
//	//֧���ַ��ĸ�ֵ
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
//	//string�� + string��
//	s1 = s2 + s3;
//	cout << s1 << endl; //CaptainChinese
//
//	//string�� + �ַ���
//	s1 = s2 + str;
//	cout << s1 << endl; //CaptainAmerica
//
//	//�ַ��� + string��
//	s1 = str + s2;
//	cout << s1 << endl; //AmericaCaptain
//
//	//string�� + �ַ�
//	s1 = s2 + ch;
//	cout << s1 << endl; //Captain!
//
//	//�ַ� + string��
//	s1 = ch + s2;
//	cout << s1 << endl; //!Captain
//}

void TestString10() {
	string s1;

	getline(cin, s1, 'd'); //����
	cout << s1 << endl; //���
}


int main()
{
	TestString10();
	return 0;
}

