//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building;
////类做友元
//class GoodGay 
//{
//public:
//	GoodGay();
//	void visit();//参观函数，访问Building中的属性
//	Building* building;
//
//};
//class Building 
//{
//	friend class GoodGay;//友元，可访问私有成员
//public :
//	Building();
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
////类外写成员函数
//Building::Building() 
//{
//	m_BedRoom = "卧室";
//	m_SittingRoom = "客厅";
//}
//GoodGay::GoodGay() 
//{
//	//创建建筑物的对象
//	building = new Building;
//
//}
//void GoodGay::visit() 
//{
//	cout << "好基友类正在访问："
//		<< building->m_SittingRoom << endl;
//	cout << "好基友类正在访问："
//		<< building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//
//	test01();
//	return 0;
//}