//#include <iostream>
//#include<string>
//
//using namespace std;
////不论哪种继承，父类中的私有属性都是无法访问到的
//class Father 
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class son1 :public Father 
//{
//public:
//	void fun() 
//	{
//		m_A = 100;//公共继承，父类的public变为public
//		m_B = 100;//公共继承，父类的protected仍未protected
//		
//	}
//};
//class son2 :protected Father
//{
//public:
//	void fun()
//	{
//		m_A = 100;//保护继承，父类的public变为protected
//		m_B = 100;//保护继承，父类的protected仍未protected
//
//	}
//};
//class son3 :private Father
//{
//public:
//	void fun()
//	{
//		m_A = 100;//私有继承，父类的public变为private
//		m_B = 100;//私有继承，父类的protected仍未private
//
//	}
//};
//class gson3 :public son3 
//{
//public :
//	void fun() 
//	{
//		//m_A = 100;//son3为私有继承，父类的属性已经私有化，gson3无法访问到；
//	}
//};
//void test01() 
//{
//	son1 s1;
//	s1.fun();
//	s1.m_A;
//	//s1.m_B;//m_B为protected，无法访问；
//	son2 s2;
//	s2.fun();
//	//s1.m_A;//为protected,无法访问；
//	//s1.m_B;//为protected,无法访问；
//	son3 s3;
//	s3.fun();
//}
//int main() 
//{
//
//	return 0;
//}