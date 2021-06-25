//#include<iostream>
//#include<string>
//
//using namespace std;
////继承中同名成员处理
//class Father
//{
//public:
//	int m_A;
//	Father()
//	{
//		m_A = 10;		
//	}
//	void func() 
//	{
//		cout << "Father的func() " << endl;
//
//	}
//	void func(int a)
//	{
//		cout << "Father的func(int a) " << endl;
//	}
//};
//class son :public Father
//{
//public:
//	int m_A;
//	son()
//	{
//		m_A=1;
//	}
//	void func()
//	{
//		cout << "son的func() " << endl;
//	}
//
//};
//
//void test01()
//{
//	son s;
//	cout << "son的m_A: " << s.m_A << endl;
//	//如果通过子类对象访问父类中的同名成员，需要加作用域
//	cout << "Father的m_A: " << s.Father::m_A << endl;
//}
//void test02() 
//{
//	son s;
//	//直接调用，调用的是子类的方法
//	s.func();
//	//想调用父类的方法，仍是加作用域
//	s.Father::func();
//	//在子类有和父类同名方法时候，父类中的重载，无法直接调用，任然需要加作用域
//	s.Father::func(10);
//}
//int main()
//{
//	
//	test02();
//	return 0;
//}