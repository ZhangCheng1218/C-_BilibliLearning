//#include<iostream>
//#include<string>
//
//using namespace std;
////�̳���ͬ����Ա����
//class Father
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Father��static-func() " << endl;
//
//	}
//	static void func(int a)
//	{
//		cout << "Father��static-func(int a) " << endl;
//	}
//};
//int Father::m_A = 10;
//class son :public Father
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "son��static-func() " << endl;
//
//	}
//
//};
//int son::m_A = 1;
//void test01()
//{
//	//1.ͨ������������ڵľ�̬��Ա
//	cout << "1��ͨ���������" << endl;
//	son s;
//	cout << "son��static-m_A: " << s.m_A << endl;
//	//���ͨ�����������ʸ����е�ͬ����Ա����Ҫ��������
//	cout << "Father��static-m_A: " << s.Father::m_A << endl;
//	//2.ͨ���������ʾ�̬��Ա
//	cout << "2��ͨ����������" << endl;
//	cout << "son��static-m_A=" << son::m_A << endl;
//
//	cout << "son��static-m_A=" << son::Father::m_A << endl;
//}
//void test02()
//{
//	//1.ͨ��������ʾ�̬����
//	cout << "1��ͨ���������" << endl;
//	son s;
//	//ֱ�ӵ��ã����õ�������ķ���
//	s.func();
//	//����ø���ķ��������Ǽ�������
//	s.Father::func();
//	//�������к͸���ͬ������ʱ�򣬸����е����أ��޷�ֱ�ӵ��ã���Ȼ��Ҫ��������
//	s.Father::func(10);
//	//2.ͨ���������ʾ�̬����
//	cout << "2��ͨ����������" << endl;
//	son::func();
//	son::Father::func();
//	son::Father::func(10);
//}
//int main()
//{
//
//	//test01();
//	test02();
//	return 0;
//}