//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//
//void test01() 
//{
//	ifstream ifs;
//	ifs.open("1.txt",ifs.in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//��һ��
//	char buf[1024] = { 0 };
//	while (ifs>>buf)
//	{
//		cout << buf<<endl;
//	}
//	//�ڶ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//	//ifs.close();
//	//������
//	//string str;
//	//while (getline(ifs,str))
//	//{
//	//	cout << str << endl;
//	//}
//	//������-----���Ƽ�ʹ�ã�һ��һ����
//	//char c;
//	//while ((c=ifs.get())!=EOF)
//	//{
//	//	cout << c;
//	//}
//}
//int main()
//
//{
//	test01();
//	return 0;
//}