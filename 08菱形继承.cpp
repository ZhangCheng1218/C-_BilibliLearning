//#include<iostream>
//#include<string >
//
//using namespace std;
////���μ̳�
////�����ST���еĳ�Ա���ⲻ���������ͬʱʵ���Ͻ���Ҫһ��m_A,������������̳к󣬻������m_A;
////����̳�������ͬ�����ݣ�������Դ�˷Ѻ�������
//class Animal 
//{
//public:
//	int m_A;
//};
////������μ̳е����⣬��Ҫʹ����̳еķ�������virtual�ؼ���
////Animal���Ϊ�������,m_AҲ��ֻ��һ��
////��̳���ͨ��vbptr���������ָ�룩��ʵ��--����ͨ��������Ա�����й��߲鿴
////vbptrָ��ָ��vbtable(������)
////���м�¼��ƫ������ָ��ͨ����ƫ�����ҵ�m_A;
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
//	cout<<"ST���䣺" << st.m_A<<endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}