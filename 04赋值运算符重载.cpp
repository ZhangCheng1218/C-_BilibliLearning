//#include<iostream>
//#include<string>
//
//using namespace std;
//class Person
//{
//public:
//	int GetAge()
//	{
//		return *m_Age;
//	}
//	Person(int a)
//	{
//		m_Age = new int(a);
//	}
//	//���صȺ�
//	Person& operator=(Person& p)
//	{
//		//���ж��Ƿ��������ڶ���������о����ͷţ������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//
//	~Person()//
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//private:
//	int* m_Age;
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;//Ĭ�ϵĵȺŸ�ֵ����,���p1ǳ������p2,��������ʱ�򣬳����⣬��Ҫ����������
//				//�Ѹ�ֵ���������
//	cout << "P1����Ϊ��" << p1.GetAge() << endl;
//	cout << "P2����Ϊ��" << p2.GetAge() << endl;
//	cout << "P3����Ϊ��" << p3.GetAge() << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}