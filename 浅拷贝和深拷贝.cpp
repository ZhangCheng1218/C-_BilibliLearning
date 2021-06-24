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
//		cout << "Person()的默认构造函数" << endl;
//	}
//	Person(int age,int hight)
//	{
//		cout << "Person()的有参构造函数" << endl;
//		m_age = age;
//		m_hight = new int(hight);
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person()的拷贝构造函数" << endl;
//		m_age = p.m_age;
//		//如果不利用深拷贝在堆区创建内存，会导致浅拷贝带来的重复释放堆区问题；
//		m_hight = new int(*p.m_hight);
//	}
//	~Person()
//	{
//		cout << "Person()的析构函数" << endl;
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
//	cout << "p1年龄身高" << p1.m_age <<"、" << *p1.m_hight << endl;
// 	cout << "p2年龄身高" << p2.m_age << "、" <<* p2.m_hight << endl;
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