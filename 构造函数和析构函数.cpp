//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	//构造函数
//	//无参构造（默认构造）
//	Person() 
//	{
//		cout << "Person的构造函数" << endl;
//	}
//	//有参构造
//	Person(int a)
//	{
//		cout << "Person的构造函数" << endl;
//	}
//	//拷贝构造函数，注意写法
//	Person(const Person &p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "Person的拷贝构造函数" << endl;
//	}
//	//析构函数
//	~Person() 
//	{
//		cout << "Person的析构函数" << endl;	
//	}
//	int age;
//
//};
//void test01() 
//{
//	//1、括号法
//	Person p1;//默认构造函数调用
//	Person p2(10);//有参构造函数;
//	Person p3(p2);//拷贝构造函数
//	//注意事项：
//	//	调用默认构造函数的时候，不要加()
//	//	因为	Person p1();	这种，编译器会认为是一个函数的声明，不会认为在创建对象
//
//	//2、显示法
//	Person p1;
//	Person p2 = Person(10);//有参构造 
//							//等号右边的 Person(10);是匿名对象，特点：当前行执行结束后，系统会立即回收掉匿名对象；
//	Person p3 = Person(p2);//拷贝构造，不要利用拷贝构造函数来初始化匿名对象
//						   //编译器会认为Person(p3);等价于Person p3; 认为是对象声明；
//	//3、隐式转换法
//	Person p4 = 10;			//相当于Person(p4)=Person(10);
//	Person p5 = p4;			//拷贝构造
//
//
//}
//
//int mainsdafasdd() 
//{
//
//	return 0;
//}