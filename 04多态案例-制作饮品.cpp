//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class AbstractDrink 
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Pull() = 0;
//	virtual void PulltoCup() = 0;
//	virtual void PullSome() = 0;
//
//	void Make() 
//	{
//		Boil();
//		Pull();
//		PulltoCup();
//		PullSome();
//	}
//};
//class Tea :public AbstractDrink 
//{
//public:
//	void Boil() 
//	{
//		cout << "煮山泉水" << endl;
//	}
//	void Pull() 
//	{
//		cout << "倒入茶叶" << endl;
//	}
//	void PulltoCup() 
//	{
//		cout << "倒入碗中" << endl;
//	}
//	void PullSome() 
//	{
//		cout << "加入佐料" << endl;
//	}
//
//};
//class Caff :public AbstractDrink
//{
//public:
//	void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	void Pull()
//	{
//		cout << "加咖啡" << endl;
//	}
//	void PulltoCup()
//	{
//		cout << "倒入碗中" << endl;
//	}
//	void PullSome()
//	{
//		cout << "加入奶糖" << endl;
//	}
//
//};
//
//void DoDrinking(AbstractDrink * abs) 
//{
//	abs->Make();
//	delete abs;
//}
//void test01() 
//{
//	DoDrinking(new Tea);
//	cout << "*****************************" << endl;
//	DoDrinking(new Caff);
//}
//int main() 
//{
//	test01();
//	return 0;
//}