//#include<iostream>
//#include<string >
//
//using namespace std;
////�������õ��������ͣ�������֪���������
////�Զ����������ͣ���������֪�������
////ͨ���Լ�д��Ա������ʵ����������Ӻ󷵻��µĶ���
////������������ͨ������ operator+ ��ʾ�ӷ���
//
//
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//	////1.ͨ����Ա�������ؼӺ�
//	// 	 
//	//Person operator+(Person& p)
//	//{
//	//	Person tem;
//	//	tem.m_A = m_A + p.m_A;
//	//	tem.m_B = m_A + p.m_A;
//	//	return tem;
//	//}
//
//};
////2.ͨ��ȫ�ֺ������ؼӺ������
//Person operator+(Person& p1, Person& p2)
//{
//	Person tem;
//	tem.m_A = p1.m_A + p2.m_A;
//	tem.m_B = p1.m_B + p2.m_B;
//	return tem;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//	//��Ա����ʵ�ֵı����ǣ�Person p3=p1.operator+(p2);
//	//ȫ�ֺ����ı��ʣ�Person p3 =operator+(p1,p2);
//	Person p3 = p1 + p2;
//	//��������ؿ��Է�����������
//	//Person p4 = p1 + 100;//Person +int����
//	cout << "p3��m_A=" << p3.m_A << endl;
//	cout << "p3��m_B=" << p3.m_B << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}