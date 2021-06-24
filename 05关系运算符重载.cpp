//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person
//{
//private:
//	string m_Name;
//	int m_Age;
//public:
//	string GetName()
//	{
//		return m_Name;
//	}
//	int GetAge()
//	{
//		return m_Age;
//	}
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(Person&p) 
//	{
//		if (m_Age==p.m_Age&&m_Name==p.m_Name)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//
//void test01()
//{
//	Person p1("zc", 38);
//	Person p2("zc", 38);
//	if (p1==p2)
//	{
//		cout << "p1 和 p2 是同一个人" << endl;
//	}
//	else 
//	{
//		cout << "p1 和 p2 不是同一个人" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}