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
//	//typeid���Բ鿴��������
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
//	//C���Դ�ӡ���鷽ʽ
//	for (int i = 0; i < sizeof(arry) / sizeof(int); ++i) {
//		cout << arry[i] << " ";
//	}
//	cout << endl;
//
//	// C++11��ӡ���� --> ��Χfor
//	// �����Զ�ȡarry�е����ݣ���ֵ��e���Զ��жϽ���
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
//	//C++�����ָ��ķ���
//	int* p1 = NULL;
//	int* p2 = 0;
//	int* p3 = nullptr;// �Ƽ�ʹ������
//
//
//	return 0;
//}


// ��
class Student
{
public: //����
	// ���壺�ɳ�Ա�����ͳ�Ա�������
	void Init(const char* name, const char* gender, int age) {
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}
	
	void Print() {
		cout << _name << " " << _gender << " " << _age << endl;
	}

private: //˽��
	char _name[20];
	char _gender[3];
	int _age;
};

int main()
{
	// ����
	Student s2;


	return 0;
}