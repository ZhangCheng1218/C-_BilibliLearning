//#include<iostream>
//#include<string>
//
//using namespace std;
////虚析构和纯虚析构：
////1、都可以解决父类指针释放子类对象的问题，如果子类中没有堆区数据，可以不写虚析构或者纯虚析构
//// 2、都需要具体的函数实现
//// 3、如果是纯虚析构，该类属于抽象类，无法实例化
////
//class Animal 
//{
//public :
//	virtual void Bark() = 0;
//	Animal() 
//	{
//		cout << "Animal的构造函数" << endl;
//	}
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal的析构函数" << endl;
//	//}
//
//	virtual ~Animal()=0;
//};
//Animal::~Animal() 
//{
//	cout << "Animal的纯虚析构函数" << endl;
//}
//class Cat :public Animal
//{
//public :
//	void Bark() 
//	{
//		cout<<*a << "喵喵叫" << endl;
//	}
//	Cat()
//	{
//		a= new string("猫猫猫：");
//		cout << "Cat的构造函数" << endl;
//	}
//	//如果父类的析构不采用虚析构或者纯虚析构，由父类指针创建的子类对象释放时候是无法进入子类的析构函数的
//	~Cat()
//	{
//		cout << "Cat的析构函数" << endl;
//		if (a!=NULL)
//		{
//			delete a;
//			a = NULL;
//		}
//	}
//	string *a;
//};
//void DoBark(Animal *ani) 
//{
//	ani->Bark();
//	delete ani;
//}
//void test01() 
//{
//	DoBark(new Cat);
//}
//int main() 
//{
//	test01();
//	return 0;
//}