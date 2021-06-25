//#include<iostream>
//#include<string>
//
//using namespace std;
////继承中同名成员处理
//class Father
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Father的static-func() " << endl;
//
//	}
//	static void func(int a)
//	{
//		cout << "Father的static-func(int a) " << endl;
//	}
//};
//int Father::m_A = 10;
//class son :public Father
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "son的static-func() " << endl;
//
//	}
//
//};
//int son::m_A = 1;
//void test01()
//{
//	//1.通过对象访问类内的静态成员
//	cout << "1、通过对象访问" << endl;
//	son s;
//	cout << "son的static-m_A: " << s.m_A << endl;
//	//如果通过子类对象访问父类中的同名成员，需要加作用域
//	cout << "Father的static-m_A: " << s.Father::m_A << endl;
//	//2.通过类名访问静态成员
//	cout << "2、通过类名访问" << endl;
//	cout << "son的static-m_A=" << son::m_A << endl;
//
//	cout << "son的static-m_A=" << son::Father::m_A << endl;
//}
//void test02()
//{
//	//1.通过对象访问静态方法
//	cout << "1、通过对象访问" << endl;
//	son s;
//	//直接调用，调用的是子类的方法
//	s.func();
//	//想调用父类的方法，仍是加作用域
//	s.Father::func();
//	//在子类有和父类同名方法时候，父类中的重载，无法直接调用，任然需要加作用域
//	s.Father::func(10);
//	//2.通过类名访问静态方法
//	cout << "2、通过类名访问" << endl;
//	son::func();
//	son::Father::func();
//	son::Father::func(10);
//}
//int main()
//{
//
//	//test01();
//	test02();
//	return 0;
//}