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
//		this->m_Age = age;//�������ĳ�Ա�����빹�캯�����β�����һ�£���Ҫ��this->��ָ���õ����ĸ�age;
//
//	}
//	Person& AddAge(Person p) 
//	{
//		m_Age += p.m_Age;
//		//this ָ��p2��ָ�룬��*thisָ��p2��������壻
//		return *this;
//	}
//};
//
//void test01() 
//{
//	Person p1(20);
//	Person p2(10);
//	p2.AddAge(p1).AddAge(p1);//����ʵ�ֶ�μ�
//	cout << "p2�����䣺" << p2.m_Age << endl;
//}
//int main()
//{
//
//	test01();
//	return 0;
//}