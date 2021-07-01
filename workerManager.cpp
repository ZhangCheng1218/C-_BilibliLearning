#include "workerManager.h"
#include<fstream>
#define FILENAME "ini.txt"
//���캯��
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
	cout << "���м�¼������" << num << "��" << endl;
	this->m_ArrayNum = num;
	this->m_FileIsEmpty = false;//��Ϊ�յ�ʱ��
	//���ٿռ�
	this->m_worker = new AbstractWorker * [m_ArrayNum];
	//��txt�м�¼�����ݴ���
	this->Ini_Worker();
	//���Դ��룬��ʾ������Ա
	//for (size_t i = 0; i < m_ArrayNum; i++)
	//{
	//	cout << "ְ����ţ�"<<this->m_worker[i]->m_Id
	//		<< "\t��λ��ţ�" << this->m_worker[i]->m_dId 
	//		<< "\tְ��������" << this->m_worker[i]->m_Name << endl;
	//}
}
//����
workerManager::~workerManager()
{
	if (this->m_worker != NULL)
	{
		for (size_t i = 0; i < this->m_ArrayNum; ++i)
		{
			delete this->m_worker[i];

		}
		delete[] this->m_worker;
		this->m_worker = NULL;
	}
}
//��ʾ�˵�
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
//���ְ��
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
//ɾ��ְ��
void workerManager::DelWorker()
{

	if (this->m_FileIsEmpty)
	{
		cout << "û����Ա��¼���޷�ɾ����" << endl;
	}
	else
	{
		int delId;
		cin >> delId;
		int res = IsExist(delId);
		if (res == -1)
		{
			cout << "��Ҫɾ������Ա�����ڣ�" << endl;
			return;
		}
		else
		{
			for (size_t i = res; i < this->m_ArrayNum - 1; ++i)
			{
				this->m_worker[i] = this->m_worker[i + 1];
			}
			this->m_ArrayNum -= 1;
			this->Save();
			cout << "ɾ���ɹ���" << endl;
		}
	}
	system("pause");
	system("cls");
}
//����ɾ�����ܣ��ж�ְ���Ƿ����
int workerManager::IsExist(int workerNum)
{
	int index = -1;
	for (size_t i = 0; i < this->m_ArrayNum; ++i)
	{
		if (this->m_worker[i]->m_Id == workerNum)
		{
			index = i;
			break;
		}
	}
	return index;
}
//�޸�ְ����Ϣ
void workerManager::ModWorker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "û���κ�ְ����Ϣ��" << endl;
	}
	else
	{
		int num;
		cout << "������Ҫ�޸ĵ�ְ����ţ�" << endl;
		cin >> num;
		int res = this->IsExist(num);
		if (res == -1)
		{
			cout << "��ְ����ţ������ڶ�Ӧְ����" << endl;
		}
		else
		{
			int id;
			int did;
			string name;
			cout << "���ҵ�ְ�����Ϊ��" << num << "��ְ��" << endl;
			cout << "��������ְ����ţ�" << endl;
			cin >> id;
			cout << "��������ְ��������" << endl;
			cin >> name;
			cout << "��������ְ����λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> did;

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
			this->m_worker[res] = worker;
			this->Save();
			cout << "�ɹ��޸���Ϣ��" << endl;
		}
	}
	system("pause");
	system("cls");
}
//���浽txt�ļ�
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
//��ʼ��ʱ���ȡ��������
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

	ifs.close();
	return num;
}
//��ʾְ��
void workerManager::ShowWorker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "δ¼��ְ����" << endl;
		return;
	}
	else
	{
		for (size_t i = 0; i < this->m_ArrayNum; ++i)
		{
			this->m_worker[i]->showInfo();//��̬���á�			
		}
	}
	system("pause");
	system("cls");
}
//����ְ��
void workerManager::FindWorker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "����Ա��¼��" << endl;
	}
	else
	{
		int select = 0;
		cout << "��������ҷ�ʽ��" << endl;
		cout << "1����ְ����Ų��ң�\n"
			<< "2����ְ���������ң�" << endl;
		cin >> select;
		if (select == 1)
		{
			int id;
			cout << "������ְ����ţ�" << endl;
			cin >> id;
			int res = this->IsExist(id);
			if (res == -1)
			{
				cout << "���޴��ˣ�" << endl;
			}
			else
			{
				this->m_worker[res]->showInfo();
			}
		}
		else if (select == 2)
		{
			bool flag = false;
			string name;
			cout << "������Ա��������" << endl;
			cin >> name;
			for (size_t i = 0; i < this->m_ArrayNum; ++i)
			{
				if (this->m_worker[i]->m_Name == name)
				{
					m_worker[i]->showInfo();
					flag = true;
				}
			}
			if (!flag)
			{
				cout << "δ��ѯ�������Ϣ��" << endl;
			}
		}
	}
	system("pause");
	system("cls");

}
//����ְ����Ϣ
void workerManager::SortWorker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "δ��¼�����ݣ�" << endl;
	}
	else
	{
		int select = 0;

		cout << "������Ҫ����ķ�ʽ��" << endl;
		cout << "1������ְ�������������" << endl;
		cout << "2������ְ����Ž�������" << endl;
		cin >> select;
		for (size_t i = 0; i < this->m_ArrayNum; ++i)
		{
			int minOrmax = i;
			for (size_t j = i + 1; j < this->m_ArrayNum; ++j)
			{
				if (select == 1)//����
				{
					if (this->m_worker[minOrmax]->m_Id > this->m_worker[j]->m_Id)
					{
						minOrmax = j;
					}
				}
				else//����
				{
					if (this->m_worker[minOrmax]->m_Id < this->m_worker[j]->m_Id)
					{
						minOrmax = j;
					}
				}
			}
			if (i != minOrmax)//���趨����С�������ֵ�仯ʱ����Ҫ�����б�
			{
				AbstractWorker* temp = this->m_worker[i];
				this->m_worker[i] = this->m_worker[minOrmax];
				this->m_worker[minOrmax] = temp;
			}

		}
		this->Save();
		this->ShowWorker();
	}



}
//��չ���
void workerManager::EmpWorker()
{
	int select;
	cout << "ȷ����ռ�¼��" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2��ȡ��" << endl;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);//trunc---ɾ�����½�
		ofs.close();
		if (this->m_ArrayNum != NULL)
		{
			for (size_t i = 0; i < this->m_ArrayNum; ++i)
			{
				delete this->m_worker[i];
				this->m_worker[i] = NULL;
			}
			delete[] this->m_worker;
			this->m_worker = NULL;
			m_FileIsEmpty = true;
			this->m_ArrayNum = 0;
		}
		cout << "��ճɹ���" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		system("pause");
		system("cls");
		return;
	}

}
//��ʼ��ְ��
void workerManager::Ini_Worker()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	int did;
	string name;
	int index = 0;
	while (ifs >> id && ifs >> did && ifs >> name)
	{
		AbstractWorker* worker = NULL;
		if (did == 1)
		{
			worker = new Employee(id, did, name);
		}
		else if (did == 2)
		{
			worker = new Meneger(id, did, name);
		}
		else
		{
			worker = new Boss(id, did, name);
		}

		this->m_worker[index] = worker;
		index++;
	}

}
//�˳�ϵͳ
void workerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}
