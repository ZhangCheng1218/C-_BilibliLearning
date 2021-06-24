//#include<iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	int 	m_Age;
//public :
//	Person(int age) 
//	{
//	
//		m_Age = age;
//		this->m_Age = age;//如果定义的成员变量与构造函数的形参名字一致，需要用this->来指明用的是哪个age;
//
//	}
//	Person& AddAge(Person p) 
//	{
//		m_Age += p.m_Age;
//		//this 指向p2的指针，而*this指向p2这个对象本体；
//		return *this;
//	}
//};
//
//void test01() 
//{
//	Person p1(20);
//	Person p2(10);
//	p2.AddAge(p1).AddAge(p1);//可以实现多次加
//	cout << "p2的年龄：" << p2.m_Age << endl;
//}
//int main()
//{
//
//	test01();
//	return 0;
//}