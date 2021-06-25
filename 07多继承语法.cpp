//#include<iostream>
//#include<string>
//
//using namespace std;
////多继承，实际开发不建议使用
//class Father1
//{
//public:
//	int m_A;
//	Father1()
//	{
//		m_A = 10;
//	}
//
//};
//class Father2
//{
//public:
//	int m_A;
//	Father2()
//	{
//		m_A = 20;
//	}
//
//};
//class son :public Father1, public Father2
//{
//
//};
//
//void test01()
//{
//	son s;
//	//对于不同父类中的成员，要分别指明所在作用域，实际开发中不建议使用
//	cout << "Father1的m_A= " << s.Father1::m_A << endl;
//	cout << "Father2的m_A= " << s.Father2::m_A << endl;
//}
//int main()
//{
//
//	test01();
//	return 0;
//}