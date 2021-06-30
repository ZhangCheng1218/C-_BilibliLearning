//#include<iostream>
//#include<string>
//
//using namespace std;
////动态多态满足条件
////1、有继承关系
////2、子类重写父类的虚函数
////动态多态使用
////父类的指针或者引用  执行子类对象
////动态多态本质
////当你在父类建立虚函数的时候，该类中会增加vfptr-虚函数表指针，也叫虚函数指针，该指针指向vftable-虚函数表
//// 父类的虚函数表中记录着父类虚函数的地址
////在子类继承父类后，会把父类中的vfptr及vftable继承下来，
////当子类重写父类的虚函数后，子类中虚函数表中的父类虚函数地址会被重写的子类虚函数地址替代掉，从而实现了动态多态
////可通过  开发人员命令工具行实现
//class Animal
//{
//	
//public:
//	virtual void bark() 
//	{
//		cout << "啦啦啦啦啦啦" << endl;
//	}
//};
////子类猫
//class Cat:public Animal 
//{
//public:
//	//对父类虚函数的重写，重写需要函数的返回值、函数名、形参都一致；
//	//同时virtual关键字可写可不写
//	void bark() 
//	{
//		cout << "喵喵" << endl;
//	}
//};
////子类狗
//class Dog :public Animal
//{
//public:
//	void bark()
//	{
//		cout << "汪汪" << endl;
//	}
//};
//
//void Dobark(Animal & ani) 
//{
//	ani.bark();
//}
////父类成员函数没写virtual关键字时候，test01中的Dobark无法实现"喵喵"叫，因为这个是地址早绑定，编译器编译时候就绑定好了。
////想要实现不同类，通过公共函数实现不同叫，需要给父类的同名方法加上virtual关键字，实现虚函数，地址晚绑定
//
//
//void test01() 
//{
//	Cat cat;
//	Dobark(cat);
//}
//int main() 
//{
//	test01();
//	return 0;
//}