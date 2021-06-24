//#include<iostream>
//#include<string>
//
//using namespace std;
//class Person
//{
//public:
//	int GetAge()
//	{
//		return *m_Age;
//	}
//	Person(int a)
//	{
//		m_Age = new int(a);
//	}
//	//重载等号
//	Person& operator=(Person& p)
//	{
//		//先判断是否有属性在堆区，如果有就先释放，再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//
//	~Person()//
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//private:
//	int* m_Age;
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;//默认的等号赋值操作,会把p1浅拷贝到p2,导致析构时候，出问题，需要用深拷贝解决；
//				//把赋值运算符重载
//	cout << "P1年龄为：" << p1.GetAge() << endl;
//	cout << "P2年龄为：" << p2.GetAge() << endl;
//	cout << "P3年龄为：" << p3.GetAge() << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}