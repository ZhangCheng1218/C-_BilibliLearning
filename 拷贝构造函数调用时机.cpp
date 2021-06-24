//#include<iostream>
//
//using namespace std;
//
//class Person 
//{
//private:
//	int m_age;
//public:
//	Person() 
//	{
//		cout << "Person()的默认构造函数" << endl;
//	}
//	Person(int age) 
//	{
//		cout << "Person()的有参构造函数" << endl;
//		m_age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person()的拷贝构造函数" << endl;
//		m_age = p.m_age;
//	}
//	~Person()
//	{
//		cout << "Person()的析构函数" << endl;
//	}
//
//};
////1.使用一个已经创建完毕的对象来初始化一个新对象
// void test01() 
//{
//	 Person p1(10);
//	 Person p2(p1);
//}
////2.值传递的方式给函数参数传值
// void dowork(Person p)//值传递，拷贝一个临时的副本出来
// {
//
// }
//
// void test02() 
// {
//	 Person p;//-》默认构造
//	 dowork(p);//-》实参传给形参时候调用拷贝构造函数
// }
////3.以值方式返回局部对象
// Person dowork3() 
// {
//	 Person p1;//按照p1拷贝一个临时的对象
//	 return p1;
// }
// void test03() 
// {
//	 Person p = dowork3();
// }
//
//
//int main()
//{
//	test03();
//
//	return 0;
//}