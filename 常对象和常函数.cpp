//#include<iostream>
//
//
//using namespace std;
////������
//class Person
//{
//public:
//	//thisָ�뱾����һ��ָ�볣����ָ���ָ���ǲ������޸ĵ�
//	//�����ָ��ָ���ֵҲ�����޸ģ�����Ҫ�ټӸ�const,���ڳ�Ա���������ڣ�������
//	void showPerson() const//const ���ε���thisָ�룬��ָ��ָ���ֵҲ���ܸģ�������
//	{
//		this->m_B = 10;//mutable���εļ�ʹ�ڳ�������Ҳ�ǿ����޸ĵ�
//		//this->m_Age = 10;//����const����this
//		//this = NULL;//this��ָ���ܸ�
//	}
//	void func() 
//	{
//	
//	}
//
//	int m_Age;
//	
//	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
//};
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
////������
//void test02() 
//{
//	const Person p;//�ڶ���ǰ���const,�ͱ�Ϊ������
//	//p.m_Age = 10;//�������ֵ�ǲ����޸ĵ�
//	p.m_B = 10;//�����ֵ���ڳ�������Ҳ���޸ģ�
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸����ԣ��������ֵ�ǲ����޸ĵ�
//}
//int main()
//{
//
//	test01();
//	return 0;
//}