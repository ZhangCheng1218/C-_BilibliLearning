//#include<iostream>
//#include<string>
//
//using namespace std;
////�������ʹ���������
////1�������Խ������ָ���ͷ������������⣬���������û�ж������ݣ����Բ�д���������ߴ�������
//// 2������Ҫ����ĺ���ʵ��
//// 3������Ǵ����������������ڳ����࣬�޷�ʵ����
////
//class Animal 
//{
//public :
//	virtual void Bark() = 0;
//	Animal() 
//	{
//		cout << "Animal�Ĺ��캯��" << endl;
//	}
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal����������" << endl;
//	//}
//
//	virtual ~Animal()=0;
//};
//Animal::~Animal() 
//{
//	cout << "Animal�Ĵ�����������" << endl;
//}
//class Cat :public Animal
//{
//public :
//	void Bark() 
//	{
//		cout<<*a << "������" << endl;
//	}
//	Cat()
//	{
//		a= new string("èèè��");
//		cout << "Cat�Ĺ��캯��" << endl;
//	}
//	//���������������������������ߴ����������ɸ���ָ�봴������������ͷ�ʱ�����޷��������������������
//	~Cat()
//	{
//		cout << "Cat����������" << endl;
//		if (a!=NULL)
//		{
//			delete a;
//			a = NULL;
//		}
//	}
//	string *a;
//};
//void DoBark(Animal *ani) 
//{
//	ani->Bark();
//	delete ani;
//}
//void test01() 
//{
//	DoBark(new Cat);
//}
//int main() 
//{
//	test01();
//	return 0;
//}