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
//	//����ǰ��++������������Ϊ�˶�һ�����ݽ��е�������
//	MyInt& operator++() 
//	{
//		//������++
//		m_Int++;
//		//�ٽ�������Ϊ����
//		return *this;
//	}
//	//���ú��õ���,ռλ����int��������ǰ��++�ͺ���++��־
//	//���õ�������ֵ��ǰ�õ�����������
//	MyInt& operator++(int)
//	{
//		//�� ��¼��ʱ���
//		MyInt tem = *this;
//		//�����
//		m_Int++;
//		//��󷵻ؼ�¼�Ľ��
//		return tem;
//	}
//
//private:
//	int m_Int;
//};
////����ǰ������
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