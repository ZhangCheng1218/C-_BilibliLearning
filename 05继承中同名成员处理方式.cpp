//#include<iostream>
//#include<string>
//
//using namespace std;
////�̳���ͬ����Ա����
//class Father
//{
//public:
//	int m_A;
//	Father()
//	{
//		m_A = 10;		
//	}
//	void func() 
//	{
//		cout << "Father��func() " << endl;
//
//	}
//	void func(int a)
//	{
//		cout << "Father��func(int a) " << endl;
//	}
//};
//class son :public Father
//{
//public:
//	int m_A;
//	son()
//	{
//		m_A=1;
//	}
//	void func()
//	{
//		cout << "son��func() " << endl;
//	}
//
//};
//
//void test01()
//{
//	son s;
//	cout << "son��m_A: " << s.m_A << endl;
//	//���ͨ�����������ʸ����е�ͬ����Ա����Ҫ��������
//	cout << "Father��m_A: " << s.Father::m_A << endl;
//}
//void test02() 
//{
//	son s;
//	//ֱ�ӵ��ã����õ�������ķ���
//	s.func();
//	//����ø���ķ��������Ǽ�������
//	s.Father::func();
//	//�������к͸���ͬ������ʱ�򣬸����е����أ��޷�ֱ�ӵ��ã���Ȼ��Ҫ��������
//	s.Father::func(10);
//}
//int main()
//{
//	
//	test02();
//	return 0;
//}