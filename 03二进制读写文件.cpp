//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//class Person 
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//void test01() 
//{
//	ofstream ofs("Person.txt",ios::out|ios::binary);
//	Person per = {"�ų�",20};
//
//	ofs.write((const char *)&per,sizeof(per));
//	ofs.close();
//}
//void test02() 
//{
//	ifstream ifs("Person.txt",ios::in|ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	Person p;
//	ifs.read(( char*)&p,sizeof(Person));
//	cout << p.m_Name << p.m_Age << endl;
//	ifs.close();
//
//}
//int main()
//
//{
//	//test01();
//	test02();
//	return 0;
//}