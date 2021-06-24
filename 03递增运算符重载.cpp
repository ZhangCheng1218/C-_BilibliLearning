//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class MyInt
//{
//	friend	ostream& operator<<(ostream& out, MyInt a);
//public:
//	MyInt(int a)
//	{
//		m_Int = a;
//	}
//	//重置前置++，返回引用是为了对一个数据进行递增操作
//	MyInt& operator++() 
//	{
//		//先运算++
//		m_Int++;
//		//再将自身作为返回
//		return *this;
//	}
//	//重置后置递增,占位参数int就是区分前置++和后置++标志
//	//后置递增返回值，前置递增返回引用
//	MyInt& operator++(int)
//	{
//		//先 记录当时结果
//		MyInt tem = *this;
//		//后递增
//		m_Int++;
//		//最后返回记录的结果
//		return tem;
//	}
//
//private:
//	int m_Int;
//};
////重载前置左移
//ostream& operator<<(ostream& out, MyInt a)
//{
//	out << a.m_Int ;
//	return out;
//}
////void test01()
////{
////	MyInt mI1(5);
////	cout << ++(++mI1) << endl;
////}
//void test02()
//{
//	MyInt mI2(1);
//	cout << mI2++ << endl;
//	cout << mI2 << endl;
//}
//int main()
//{
//	test02();
//	return 0;
//}