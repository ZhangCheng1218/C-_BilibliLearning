//#include<iostream>
//#include<string>
//
//using namespace std;
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//让visit函数可以访问Building中的私有成员
//	void visit2();//让visit2不可以访问Building中的私有成员
//	Building* building;
//};
//class Building
//{
//	//GoodGay下面的visit作为友元函数，可以访问类中的私有成员
//	friend	void GoodGay::visit();
//public:
//	Building();
//	string m_SittingRoom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
////类外实现成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "visit正在访问："
//		<< building->m_SittingRoom << endl;
//	cout << "visit正在访问："
//		<< building->m_BedRoom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2正在访问："
//		<< building->m_SittingRoom << endl;
//	//cout << "visit2正在访问："
//	//	<< building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//int main()
//{
//	test01();
//	return 0;
//}