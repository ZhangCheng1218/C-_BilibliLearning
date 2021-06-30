#include "workerManager.h"
#include<fstream>
#define FILENAME "ini.txt"

workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//1���ļ�������
	if (!ifs.is_open())
	{
		cout << "�ļ������ڣ�" << endl;
		ifs.close();
		this->m_FileIsEmpty = true;
		this->m_ArrayNum = 0;
		this->m_worker = NULL;
		return;
	}
	//2���ļ����ڣ�����û�м�¼
	char ch;
	ifs >> ch;//��һ���ַ�
	//Ϊtrue���Ƕ���ĩβ��
	if (ifs.eof())
	{
		cout << "�ļ���¼Ϊ�գ�" << endl;
		ifs.close();
		this->m_FileIsEmpty = true;
		this->m_ArrayNum = 0;
		this->m_worker = NULL;
		return;
	}
	//3�����ļ�������������
	int num = this->GetNum();
	cout << "���м�¼������"<<num<<"��" << endl;
	this->m_ArrayNum = num;
}
workerManager::~workerManager()
{
	if (this->m_worker != NULL)
	{
		delete[] this->m_worker;
		this->m_worker = NULL;
	}
}
void workerManager::ShowMenu()
{
	cout << "********************************************************************" << endl;
	cout << "*********************** ��ӭʹ��ְ������ϵͳ ***********************" << endl;
	cout << "*************************  0.�˳��������  *************************" << endl;
	cout << "*************************  1.����ְ����Ϣ  *************************" << endl;
	cout << "*************************  2.��ʾְ����Ϣ  *************************" << endl;
	cout << "*************************  3.ɾ����ְְ��  *************************" << endl;
	cout << "*************************  4.�޸�ְ����Ϣ  *************************" << endl;
	cout << "*************************  5.����ְ����Ϣ  *************************" << endl;
	cout << "*************************  6.���ձ������  *************************" << endl;
	cout << "*************************  7.��������ĵ�  *************************" << endl;
	cout << "********************************************************************" << endl;
	cout << endl;
}
void workerManager::AddWorker()
{

	cout << "��������Ҫ��ӵ�������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//���������Ҫ�ٶ��������¿ռ�
		AbstractWorker** newWorker = new AbstractWorker * [this->m_ArrayNum + addNum];
		//���֮ǰ���ݲ�Ϊ�գ���֮ǰ���ݼ���������
		if (this->m_worker != NULL)
		{
			for (size_t i = 0; i < this->m_ArrayNum; ++i)
			{
				newWorker[i] = this->m_worker[i];
			}

		}
		//���������
		for (size_t i = 0; i < addNum; ++i)
		{
			int id;
			int did;
			string name;
			cout << "�������" << i + 1 << "��Ա����ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "��Ա��������" << endl;
			cin >> name;
			cout << "�������" << i + 1 << "��Ա����λ��ţ�" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> did;
			//�����û���ͬ������Ҫ��ͬ�Ķ���
			AbstractWorker* worker = NULL;

			switch (did)
			{
			case 1:
				worker = new Employee(id, 1, name);
				break;
			case 2:
				worker = new Meneger(id, 2, name);
				break;
			case 3:
				worker = new Boss(id, 3, name);
				break;
			default:
				cout << "����Ա���������" << endl;
				break;
			}
			//��������Ա��ָ��ŵ�������
			newWorker[i + this->m_ArrayNum] = worker;
		}
		//���ԭ������
		delete[] this->m_worker;
		//���� �¿ռ�ָ��
		this->m_worker = newWorker;
		//���¸���
		this->m_ArrayNum = this->m_ArrayNum + addNum;
		//�����ļ���
		this->Save();
		//��ʾ��Ϣ
		cout << "�ɹ���Ӳ�����" << addNum << "��Ա����" << endl;


	}
	else
	{
		cout << "��������ȷ�����������" << endl;
		return;
	}
	system("pause");
	system("cls");
}
void workerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	//����д��txt
	for (size_t i = 0; i < this->m_ArrayNum; ++i)
	{
		ofs << this->m_worker[i]->m_Id << " "
			<< this->m_worker[i]->m_dId << " "
			<< this->m_worker[i]->m_Name << endl;
	}
	//�ر�
	ofs.close();

}
int workerManager::GetNum()
{
	int num = 0;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	int did;
	string name;
	while (ifs >> id && ifs >> did && ifs >> name)
	{
		//ͳ������
		num++;
	}

	ifs. close();
	return num;
}
void workerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}
