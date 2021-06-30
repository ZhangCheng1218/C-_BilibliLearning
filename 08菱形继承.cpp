//#include<iostream>
//#include<string >
//
//using namespace std;
////菱形继承
////会出现ST类中的成员语意不明的情况，同时实际上仅需要一个m_A,但是用作用域继承后，会出现俩m_A;
////子类继承两份相同的数据，导致资源浪费和无意义
//class Animal 
//{
//public:
//	int m_A;
//};
////解决菱形继承的问题，需要使用虚继承的方法，加virtual关键字
////Animal类变为了虚基类,m_A也就只有一份
////虚继承是通过vbptr（即虚基类指针）来实现--》可通过开发人员命令行工具查看
////vbptr指针指向vbtable(虚基类表)
////表中记录有偏移量，指针通过该偏移量找到m_A;
//
//class Sheep:virtual public Animal{};
//class Tuo :virtual public Animal{};
//class ST :public Sheep, public Tuo {};
//void test01()
//{
//	ST st;
//	st.Tuo::m_A = 1;
//	st.Sheep::m_A = 2;
//	st.m_A = 22;
//	cout<<"ST年龄：" << st.m_A<<endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}