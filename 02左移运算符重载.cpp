//#include<iostream>
//#include<string>
//
//using namespace std;
////�������������
//class Person
//{
//	//��Ԫʵ�ַ���˽�г�Ա
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a,int b) //���캯����˽�ж���ֵ
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	//�������ó�Ա�������أ����������
//	//ͨ���������ó�Ա���������������������Ϊ�޷�ʵ��cout�����
//	//void operator<<(cout) 
//	//{
//	//
//	//}
//	int m_A;
//	int m_B;
//};
////ֻ������ȫ�ֺ����������������
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "m_A=" << p.m_A
//		<< ",m_B=" << p.m_B;
//	return cout;
//}
//void test01()
//{
//	Person p(10,10);
//	cout << p << endl;//��ʽ���˼�룬���ص����Ʒ���ֵΪcout;
//}
//int main()
//{
//	test01();
//	return 0;
//}