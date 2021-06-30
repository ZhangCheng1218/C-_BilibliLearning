//#include<iostream>
//#include<string>
//
//using namespace std;
////纯虚函数写法  virtual 返回类型 函数名()=0;
////类中只要有一个纯虚函数就是抽象类
////抽象类特定：
////1、无法实例化对象
//// 2、抽象类的子类 必须重写父类的纯虚函数，不然子类也是抽象类
////
//class Father
//{
//public:
//	virtual void func() = 0;
//};
//
//class Son :public Father 
//{
//public:
//	void func() 
//	{
//	
//	}
//};
//void test01() 
//{
//	Father* f = new Son;
//	f->func();
//}
//int main() 
//{
//	test01();
//	return 0;
//}