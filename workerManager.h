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
	//չʾ�˵�
	void ShowMenu();
	//�����Ա
	void AddWorker();
	//��ʾ����
	void ShowWorker();
	//ɾ��ְ�������ձ��
	void DelWorker();
	//����ɾ�����ܣ��ж�ְ���Ƿ����
	int IsExist(int workerNum);
	//�޸�ְ����Ϣ
	void ModWorker();
	//����ְ��
	void FindWorker();
	//����ְ����Ϣ
	void SortWorker();
	//���浽txt
	void Save();
	//��ȡtxt�м�¼������
	int GetNum();
	//��չ���
	void EmpWorker();
	//��ʼ��ְ��
	void Ini_Worker();
	//�˳�����
	void ExitSystem();
	~workerManager();
	//�ð����У������Ա�������ӵ���Ա����һ����ģ�����employee\boss\manager������÷�ͬһ�����͵�����
	//��̬����AbstractWorker*ָ��ʵ��������Ҳ����Ա���ϰ徭���࣬����������ܷ�ͬһ��������
	// ͬʱ�������ÿ��ٵ�����������Ҫnew���*����AbstractWorker**������new��*��
	// �������м�¼���������ԭ�е�����������׷�����������Ե���m_Array;
	//
	//��¼��������Ա����
	int m_ArrayNum;
	AbstractWorker** m_worker;
	bool m_FileIsEmpty;

};
