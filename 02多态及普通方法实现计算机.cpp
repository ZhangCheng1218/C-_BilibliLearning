//#include<iostream>
//#include<string>
//
//using namespace std;
//
////1、普通方法
////当需要追加其他算法时候，需要再源码里面加代码，同时找某一个算法比较麻烦
////开发中，提倡开闭原则
////对扩展进行开放，对修改进行关闭
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
////2、多态实现计算器
////多肽好处
////1、组织结构清晰
////2、可读性强
////3、对于前期和后期的扩展及维护方便
//class AbstartctCal 
//{
//public:
//	virtual int ji() 
//	{
//		return 0;
//	}
//	int m_A, m_B;
//};
////加法
//class Add :public AbstartctCal 
//{
//public:
//	int ji() 
//	{
//		return m_A + m_B;
//	}
//};
////减法
//class Subs :public AbstartctCal
//{
//public:
//	int ji()
//	{
//		return m_A - m_B;
//	}
//};
////乘法
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
//	//通过父类指针来执行子类对象
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