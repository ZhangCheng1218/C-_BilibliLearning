//#include <iostream>
//#include<string>
//
//using namespace std;
////�������ּ̳У������е�˽�����Զ����޷����ʵ���
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
//		m_A = 100;//�����̳У������public��Ϊpublic
//		m_B = 100;//�����̳У������protected��δprotected
//		
//	}
//};
//class son2 :protected Father
//{
//public:
//	void fun()
//	{
//		m_A = 100;//�����̳У������public��Ϊprotected
//		m_B = 100;//�����̳У������protected��δprotected
//
//	}
//};
//class son3 :private Father
//{
//public:
//	void fun()
//	{
//		m_A = 100;//˽�м̳У������public��Ϊprivate
//		m_B = 100;//˽�м̳У������protected��δprivate
//
//	}
//};
//class gson3 :public son3 
//{
//public :
//	void fun() 
//	{
//		//m_A = 100;//son3Ϊ˽�м̳У�����������Ѿ�˽�л���gson3�޷����ʵ���
//	}
//};
//void test01() 
//{
//	son1 s1;
//	s1.fun();
//	s1.m_A;
//	//s1.m_B;//m_BΪprotected���޷����ʣ�
//	son2 s2;
//	s2.fun();
//	//s1.m_A;//Ϊprotected,�޷����ʣ�
//	//s1.m_B;//Ϊprotected,�޷����ʣ�
//	son3 s3;
//	s3.fun();
//}
//int main() 
//{
//
//	return 0;
//}