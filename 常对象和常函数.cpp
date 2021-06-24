//#include<iostream>
//
//
//using namespace std;
////常函数
//class Person
//{
//public:
//	//this指针本质是一个指针常量，指针的指向是不可以修改的
//	//如果想指针指向的值也不能修改，就需要再加个const,对于成员函数，加在（）后面
//	void showPerson() const//const 修饰的是this指针，让指针指向的值也不能改，常函数
//	{
//		this->m_B = 10;//mutable修饰的即使在常函数中也是可以修改的
//		//this->m_Age = 10;//报错，const修饰this
//		//this = NULL;//this的指向不能改
//	}
//	void func() 
//	{
//	
//	}
//
//	int m_Age;
//	
//	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值
//};
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
////常对象
//void test02() 
//{
//	const Person p;//在对象前面加const,就变为常对象
//	//p.m_Age = 10;//常对象的值是不能修改的
//	p.m_B = 10;//特殊的值，在常对象下也能修改！
//	//常对象，只能调用常函数
//	p.showPerson();
//	//p.func();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性，常对象的值是不能修改的
//}
//int main()
//{
//
//	test01();
//	return 0;
//}