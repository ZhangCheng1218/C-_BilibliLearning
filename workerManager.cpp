#include "workerManager.h"
#include<fstream>
#define FILENAME "ini.txt"

workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//1、文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在！" << endl;
		ifs.close();
		this->m_FileIsEmpty = true;
		this->m_ArrayNum = 0;
		this->m_worker = NULL;
		return;
	}
	//2、文件存在，但是没有记录
	char ch;
	ifs >> ch;//读一个字符
	//为true就是读到末尾了
	if (ifs.eof())
	{
		cout << "文件记录为空！" << endl;
		ifs.close();
		this->m_FileIsEmpty = true;
		this->m_ArrayNum = 0;
		this->m_worker = NULL;
		return;
	}
	//3、当文件存在且有数据
	int num = this->GetNum();
	cout << "已有记录人数："<<num<<"人" << endl;
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
	cout << "*********************** 欢迎使用职工管理系统 ***********************" << endl;
	cout << "*************************  0.退出管理程序  *************************" << endl;
	cout << "*************************  1.增加职工信息  *************************" << endl;
	cout << "*************************  2.显示职工信息  *************************" << endl;
	cout << "*************************  3.删除离职职工  *************************" << endl;
	cout << "*************************  4.修改职工信息  *************************" << endl;
	cout << "*************************  5.查找职工信息  *************************" << endl;
	cout << "*************************  6.按照编号排序  *************************" << endl;
	cout << "*************************  7.清空所有文档  *************************" << endl;
	cout << "********************************************************************" << endl;
	cout << endl;
}
void workerManager::AddWorker()
{

	cout << "请输入需要添加的人数：" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//新输入后，需要再堆区开辟新空间
		AbstractWorker** newWorker = new AbstractWorker * [this->m_ArrayNum + addNum];
		//如果之前数据不为空，把之前数据加入新数组
		if (this->m_worker != NULL)
		{
			for (size_t i = 0; i < this->m_ArrayNum; ++i)
			{
				newWorker[i] = this->m_worker[i];
			}

		}
		//添加新数据
		for (size_t i = 0; i < addNum; ++i)
		{
			int id;
			int did;
			string name;
			cout << "请输入第" << i + 1 << "个员工编号：" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个员工姓名：" << endl;
			cin >> name;
			cout << "请输入第" << i + 1 << "个员工岗位编号：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> did;
			//根据用户不同创建需要不同的对象
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
				cout << "输入员工类别有误！" << endl;
				break;
			}
			//将创建的员工指针放到数组中
			newWorker[i + this->m_ArrayNum] = worker;
		}
		//清空原有数组
		delete[] this->m_worker;
		//更新 新空间指向
		this->m_worker = newWorker;
		//更新个数
		this->m_ArrayNum = this->m_ArrayNum + addNum;
		//存入文件中
		this->Save();
		//提示信息
		cout << "成功添加并保存" << addNum << "名员工！" << endl;


	}
	else
	{
		cout << "请输入正确的添加人数！" << endl;
		return;
	}
	system("pause");
	system("cls");
}
void workerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	//数据写入txt
	for (size_t i = 0; i < this->m_ArrayNum; ++i)
	{
		ofs << this->m_worker[i]->m_Id << " "
			<< this->m_worker[i]->m_dId << " "
			<< this->m_worker[i]->m_Name << endl;
	}
	//关闭
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
		//统计人数
		num++;
	}

	ifs. close();
	return num;
}
void workerManager::ExitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}
