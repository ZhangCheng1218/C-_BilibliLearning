//#include<iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	int m_age;
//	int* m_hight;
//public:
//	Person()
//	{
//		cout << "Person()��Ĭ�Ϲ��캯��" << endl;
//	}
//	Person(int age,int hight)
//	{
//		cout << "Person()���вι��캯��" << endl;
//		m_age = age;
//		m_hight = new int(hight);
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person()�Ŀ������캯��" << endl;
//		m_age = p.m_age;
//		//�������������ڶ��������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ������⣻
//		m_hight = new int(*p.m_hight);
//	}
//	~Person()
//	{
//		cout << "Person()����������" << endl;
//		if (m_hight!=NULL)
//		{
//			delete m_hight;
//			m_hight = NULL;
//		}
//		
//	}
//
//};
//
//void test01()
//{
//	Person p1(18,180);
//	Person p2(p1);
//	cout << "p1�������" << p1.m_age <<"��" << *p1.m_hight << endl;
// 	cout << "p2�������" << p2.m_age << "��" <<* p2.m_hight << endl;
//}
//
//
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}