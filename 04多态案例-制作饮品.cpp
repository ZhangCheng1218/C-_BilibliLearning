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
//		cout << "��ɽȪˮ" << endl;
//	}
//	void Pull() 
//	{
//		cout << "�����Ҷ" << endl;
//	}
//	void PulltoCup() 
//	{
//		cout << "��������" << endl;
//	}
//	void PullSome() 
//	{
//		cout << "��������" << endl;
//	}
//
//};
//class Caff :public AbstractDrink
//{
//public:
//	void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	void Pull()
//	{
//		cout << "�ӿ���" << endl;
//	}
//	void PulltoCup()
//	{
//		cout << "��������" << endl;
//	}
//	void PullSome()
//	{
//		cout << "��������" << endl;
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