//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	//���캯��
//	//�޲ι��죨Ĭ�Ϲ��죩
//	Person() 
//	{
//		cout << "Person�Ĺ��캯��" << endl;
//	}
//	//�вι���
//	Person(int a)
//	{
//		cout << "Person�Ĺ��캯��" << endl;
//	}
//	//�������캯����ע��д��
//	Person(const Person &p)
//	{
//		//������������ϵ��������ԣ�������������
//		age = p.age;
//		cout << "Person�Ŀ������캯��" << endl;
//	}
//	//��������
//	~Person() 
//	{
//		cout << "Person����������" << endl;	
//	}
//	int age;
//
//};
//void test01() 
//{
//	//1�����ŷ�
//	Person p1;//Ĭ�Ϲ��캯������
//	Person p2(10);//�вι��캯��;
//	Person p3(p2);//�������캯��
//	//ע�����
//	//	����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
//	//	��Ϊ	Person p1();	���֣�����������Ϊ��һ��������������������Ϊ�ڴ�������
//
//	//2����ʾ��
//	Person p1;
//	Person p2 = Person(10);//�вι��� 
//							//�Ⱥ��ұߵ� Person(10);�����������ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
//	Person p3 = Person(p2);//�������죬��Ҫ���ÿ������캯������ʼ����������
//						   //����������ΪPerson(p3);�ȼ���Person p3; ��Ϊ�Ƕ���������
//	//3����ʽת����
//	Person p4 = 10;			//�൱��Person(p4)=Person(10);
//	Person p5 = p4;			//��������
//
//
//}
//
//int mainsdafasdd() 
//{
//
//	return 0;
//}