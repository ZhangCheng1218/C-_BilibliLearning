//#include<iostream>
//#include<string >
//
//using namespace std;
////对于内置的数据类型，编译器知道如何运算
////自定义数据类型，编译器不知如何运算
////通过自己写成员函数，实现俩对象相加后返回新的对象
////编译器给给的通用名称 operator+ 表示加法；
//
//
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//	////1.通过成员函数重载加号
//	// 	 
//	//Person operator+(Person& p)
//	//{
//	//	Person tem;
//	//	tem.m_A = m_A + p.m_A;
//	//	tem.m_B = m_A + p.m_A;
//	//	return tem;
//	//}
//
//};
////2.通过全局函数重载加号运算符
//Person operator+(Person& p1, Person& p2)
//{
//	Person tem;
//	tem.m_A = p1.m_A + p2.m_A;
//	tem.m_B = p1.m_B + p2.m_B;
//	return tem;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//	//成员函数实现的本质是：Person p3=p1.operator+(p2);
//	//全局函数的本质：Person p3 =operator+(p1,p2);
//	Person p3 = p1 + p2;
//	//运算符重载可以发生函数重载
//	//Person p4 = p1 + 100;//Person +int类型
//	cout << "p3的m_A=" << p3.m_A << endl;
//	cout << "p3的m_B=" << p3.m_B << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}