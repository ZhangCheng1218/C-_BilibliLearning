//#include<iostream>
//#include<string>
//
//using namespace std;
//
////1����ͨ����
////����Ҫ׷�������㷨ʱ����Ҫ��Դ������Ӵ��룬ͬʱ��ĳһ���㷨�Ƚ��鷳
////�����У��ᳫ����ԭ��
////����չ���п��ţ����޸Ľ��йر�
//class Cal 
//{
//public:
//	int m_A, m_B;
//	int js(string a) 
//	{
//		if (a=="+")
//		{
//			return m_A + m_B;
//		}
//		else if(a=="-")
//		{
//			return m_A - m_B;
//		}
//		else if (a == "*")
//		{
//			return m_A * m_B;
//		}
//	}
//};
//
//void test01() 
//{
//	Cal c;
//	c.m_A = 10, c.m_B = 10;
//	cout << c.m_A << "+" << c.m_B << "=" << c.js("+") << endl;
//	cout << c.m_A << "-" << c.m_B << "=" << c.js("-") << endl;
//	cout << c.m_A << "*" << c.m_B << "=" << c.js("*") << endl;
//}
//
////2����̬ʵ�ּ�����
////���ĺô�
////1����֯�ṹ����
////2���ɶ���ǿ
////3������ǰ�ںͺ��ڵ���չ��ά������
//class AbstartctCal 
//{
//public:
//	virtual int ji() 
//	{
//		return 0;
//	}
//	int m_A, m_B;
//};
////�ӷ�
//class Add :public AbstartctCal 
//{
//public:
//	int ji() 
//	{
//		return m_A + m_B;
//	}
//};
////����
//class Subs :public AbstartctCal
//{
//public:
//	int ji()
//	{
//		return m_A - m_B;
//	}
//};
////�˷�
//class aaa :public AbstartctCal
//{
//public:
//	int ji()
//	{
//		return m_A * m_B;
//	}
//};
//void test02() 
//{
//	//ͨ������ָ����ִ���������
//	AbstartctCal* abs = new Add;
//	abs->m_A = 100;
//	abs->m_B = 100;
//	abs->ji();
//	cout << abs->m_A << "+" << abs->m_B << "=" << abs->ji() << endl;
//	delete abs;
//	abs = new Subs();
//	abs->m_A = 100;
//	abs->m_B = 100;
//	abs->ji();
//	cout << abs->m_A << "-" << abs->m_B << "=" << abs->ji() << endl;
//	delete abs;
//	abs = new aaa();
//	abs->m_A = 100;
//	abs->m_B = 100;
//	abs->ji();
//	cout << abs->m_A << "*" << abs->m_B << "=" << abs->ji() << endl;
//	delete abs;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}