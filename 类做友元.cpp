//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building;
////������Ԫ
//class GoodGay 
//{
//public:
//	GoodGay();
//	void visit();//�ιۺ���������Building�е�����
//	Building* building;
//
//};
//class Building 
//{
//	friend class GoodGay;//��Ԫ���ɷ���˽�г�Ա
//public :
//	Building();
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
////����д��Ա����
//Building::Building() 
//{
//	m_BedRoom = "����";
//	m_SittingRoom = "����";
//}
//GoodGay::GoodGay() 
//{
//	//����������Ķ���
//	building = new Building;
//
//}
//void GoodGay::visit() 
//{
//	cout << "�û��������ڷ��ʣ�"
//		<< building->m_SittingRoom << endl;
//	cout << "�û��������ڷ��ʣ�"
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