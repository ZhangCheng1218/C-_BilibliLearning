//#include<iostream>
//#include<string >
//
//using namespace std;
//class Father 
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class son1 :public Father 
//{
//public:
//	int m_S;
//};
//void test01() 
//{   //16个字节
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中的私有成员属性，是被编译器隐藏了。因此是访问不到的，但是确实是被继承下去了；
//	
//	
//	//通过VS开发人员命令提示工具检验：
//	//cd命令跳转到项目所在目录-->cl /d1 reportSingleClassLayoutson1 "03继承中的对象模型.cpp"
//	//
//	cout << "son1所占内存空间：" << sizeof(son1) << endl;
//}
//int main() 
//{
//	test01();
//	return 0;
//}