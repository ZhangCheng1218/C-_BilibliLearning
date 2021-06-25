//#include<iostream>
//#include<string>
//
//using namespace std;
//class Father 
//{
//public :
//	Father() 
//	{
//		cout << "父类构造函数" << endl;
//	}
//	~Father()
//	{
//		cout << "父类析构函数" << endl;
//	}
//};
//class son :public Father 
//{
//public:
//	son()
//	{
//		cout << "son构造函数" << endl;
//	}
//	~son()
//	{
//		cout << "son析构函数" << endl;
//	}
//
//};
//
//void test01() 
//{
//	son s;
//}
//int main() 
//{
//	//继承中的构造和析构顺序
//	//先构造父类，再构造子类
//	//析构与构造相反	
//	test01();
//	return 0;
//}