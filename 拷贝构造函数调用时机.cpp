//#include<iostream>
//
//using namespace std;
//
//class Person 
//{
//private:
//	int m_age;
//public:
//	Person() 
//	{
//		cout << "Person()��Ĭ�Ϲ��캯��" << endl;
//	}
//	Person(int age) 
//	{
//		cout << "Person()���вι��캯��" << endl;
//		m_age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person()�Ŀ������캯��" << endl;
//		m_age = p.m_age;
//	}
//	~Person()
//	{
//		cout << "Person()����������" << endl;
//	}
//
//};
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
// void test01() 
//{
//	 Person p1(10);
//	 Person p2(p1);
//}
////2.ֵ���ݵķ�ʽ������������ֵ
// void dowork(Person p)//ֵ���ݣ�����һ����ʱ�ĸ�������
// {
//
// }
//
// void test02() 
// {
//	 Person p;//-��Ĭ�Ϲ���
//	 dowork(p);//-��ʵ�δ����β�ʱ����ÿ������캯��
// }
////3.��ֵ��ʽ���ؾֲ�����
// Person dowork3() 
// {
//	 Person p1;//����p1����һ����ʱ�Ķ���
//	 return p1;
// }
// void test03() 
// {
//	 Person p = dowork3();
// }
//
//
//int main()
//{
//	test03();
//
//	return 0;
//}