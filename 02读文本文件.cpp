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
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//第一种
//	char buf[1024] = { 0 };
//	while (ifs>>buf)
//	{
//		cout << buf<<endl;
//	}
//	//第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//	//ifs.close();
//	//第三种
//	//string str;
//	//while (getline(ifs,str))
//	//{
//	//	cout << str << endl;
//	//}
//	//第四种-----不推荐使用，一个一个读
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