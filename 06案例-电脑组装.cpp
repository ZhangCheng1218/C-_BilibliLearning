//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class CPU
//{
//public:
//	virtual void Calc() = 0;
//};
//class GPU
//{
//public:
//	virtual void Disp() = 0;
//};
//class RAM
//{
//public:
//	virtual void Mem() = 0;
//};
//
//class InterCPU :public CPU
//{
//public:
//	void Calc()
//	{
//		cout << "Inter-CPU��ʼ������" << endl;
//	}
//
//};
//class InterGPU :public GPU
//{
//public:
//	void Disp()
//	{
//		cout << "Inter-DPU��ʼ��Ⱦ��" << endl;
//	}
//
//};
//class InterRAM :public RAM
//{
//public:
//	void Mem()
//	{
//		cout << "Inter-RAM��ʼ�洢��" << endl;
//	}
//
//};
//
//class ZCCPU :public CPU
//{
//public:
//	void Calc()
//	{
//		cout << "ZC-CPU��ʼ������" << endl;
//	}
//
//};
//class ZCGPU :public GPU
//{
//public:
//	void Disp()
//	{
//		cout << "ZC-DPU��ʼ��Ⱦ��" << endl;
//	}
//
//};
//class ZCRAM :public RAM
//{
//public:
//	void Mem()
//	{
//		cout << "ZC-RAM��ʼ�洢��" << endl;
//	}
//
//};
//class Comp
//{
//public:
//	Comp(CPU* a_cpu, GPU* a_gpu, RAM* a_ram)
//	{
//		m_CPU = a_cpu;
//		m_GPU = a_gpu;
//		m_RAM = a_ram;
//	}
//	void DoWork()
//	{
//		m_CPU->Calc();
//		m_GPU->Disp();
//		m_RAM->Mem();
//	}
//	~Comp()
//	{
//		if (m_CPU!=NULL)
//		{
//			delete m_CPU;
//			m_CPU = NULL;
//		}
//		if (m_GPU != NULL)
//		{
//			delete m_GPU;
//			m_GPU = NULL;
//		}
//		if (m_RAM != NULL)
//		{
//			delete m_RAM;
//			m_RAM = NULL;
//		}
//	}
//private:
//	CPU* m_CPU;
//	GPU* m_GPU;
//	RAM* m_RAM;
//};
//
//void test01()
//{
//	InterCPU* acpu = new InterCPU;
//	InterGPU* agpu = new InterGPU;
//	InterRAM* aram = new InterRAM;
//
//	Comp* cc1 = new Comp(acpu, agpu, aram);	
//	cc1->DoWork();
//	delete cc1;//�����ͷ�������������ı�����������Comp���������ͷ�
//	cout << "***********************************" << endl;
//	Comp* cc2 = new Comp(new ZCCPU, new ZCGPU, new ZCRAM);
//	cc2->DoWork();
//	delete cc2;
//}
//int main()
//{
//	test01();
//	return 0;
//}