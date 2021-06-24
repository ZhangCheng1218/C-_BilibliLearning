//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building 
//{
//	//GoodGay是友元函数，可以访问类中的私有成员
//	friend void GoodGay(Building* building);
//public :
//
//	Building() 
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
////全局函数
//void GoodGay(Building* building)
//{
//	cout << "好基友全局函数 正在访问："
//		<< building->m_SittingRoom << endl;
//	cout << "好基友全局函数 正在访问："
//		<< building->m_BedRoom << endl;
//}
//void test01() 
//{
//	Building b1;
//	GoodGay(&b1);
//}
//int main() 
//{
//
//	test01();
//	return 0;
//}