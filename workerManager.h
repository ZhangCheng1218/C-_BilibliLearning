#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include<fstream>
#include"worker.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"

using namespace std;

class workerManager
{
public:
	workerManager();
	void ShowMenu();//չʾ�˵�
	void AddWorker();//�����Ա
	void Save();//���浽txt
	int GetNum();//��ȡtxt�м�¼������
	void ExitSystem();//�˳�����
	~workerManager();
	//�ð����У������Ա�������ӵ���Ա����һ����ģ�����employee\boss\manager������÷�ͬһ�����͵�����
	//��̬����AbstractWorker*ָ��ʵ��������Ҳ����Ա���ϰ徭���࣬����������ܷ�ͬһ��������
	// ͬʱ�������ÿ��ٵ�����������Ҫnew���*����AbstractWorker**������new��*��
	// �������м�¼���������ԭ�е�����������׷�����������Ե���m_Array;
	//

	int m_ArrayNum;//��¼��������Ա����
	AbstractWorker** m_worker;
	bool m_FileIsEmpty;

};
