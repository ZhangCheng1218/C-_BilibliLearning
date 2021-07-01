#include "workerManager.h"
#include<fstream>
#define FILENAME "ini.txt"
//构造函数
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
	cout << "已有记录人数：" << num << "人" << endl;
	this->m_ArrayNum = num;
	this->m_FileIsEmpty = false;//不为空的时候
	//开辟空间
	this->m_worker = new AbstractWorker * [m_ArrayNum];
	//把txt中记录的数据存入
	this->Ini_Worker();
	//测试代码，显示已有人员
	//for (size_t i = 0; i < m_ArrayNum; i++)
	//{
	//	cout << "职工编号："<<this->m_worker[i]->m_Id
	//		<< "\t岗位编号：" << this->m_worker[i]->m_dId 
	//		<< "\t职工姓名：" << this->m_worker[i]->m_Name << endl;
	//}
}
//析构
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
//显示菜单
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
//添加职工
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
//删除职工
void workerManager::DelWorker()
{

	if (this->m_FileIsEmpty)
	{
		cout << "没有人员记录，无法删除！" << endl;
	}
	else
	{
		int delId;
		cin >> delId;
		int res = IsExist(delId);
		if (res == -1)
		{
			cout << "需要删除的人员不存在！" << endl;
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
			cout << "删除成功！" << endl;
		}
	}
	system("pause");
	system("cls");
}
//用于删除功能，判断职工是否存在
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
//修改职工信息
void workerManager::ModWorker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "没有任何职工信息！" << endl;
	}
	else
	{
		int num;
		cout << "请输入要修改的职工编号：" << endl;
		cin >> num;
		int res = this->IsExist(num);
		if (res == -1)
		{
			cout << "该职工编号，不存在对应职工！" << endl;
		}
		else
		{
			int id;
			int did;
			string name;
			cout << "查找到职工编号为：" << num << "的职工" << endl;
			cout << "请输入新职工编号：" << endl;
			cin >> id;
			cout << "请输入新职工姓名：" << endl;
			cin >> name;
			cout << "请输入新职工岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
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
				cout << "输入员工类别有误！" << endl;
				break;
			}
			this->m_worker[res] = worker;
			this->Save();
			cout << "成功修改信息！" << endl;
		}
	}
	system("pause");
	system("cls");
}
//保存到txt文件
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
//初始化时候获取已有人数
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

	ifs.close();
	return num;
}
//显示职工
void workerManager::ShowWorker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "未录入职工！" << endl;
		return;
	}
	else
	{
		for (size_t i = 0; i < this->m_ArrayNum; ++i)
		{
			this->m_worker[i]->showInfo();//多态调用。			
		}
	}
	system("pause");
	system("cls");
}
//查找职工
void workerManager::FindWorker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "无人员记录！" << endl;
	}
	else
	{
		int select = 0;
		cout << "请输入查找方式！" << endl;
		cout << "1、按职工编号查找；\n"
			<< "2、按职工姓名查找；" << endl;
		cin >> select;
		if (select == 1)
		{
			int id;
			cout << "请输入职工编号：" << endl;
			cin >> id;
			int res = this->IsExist(id);
			if (res == -1)
			{
				cout << "查无此人！" << endl;
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
			cout << "请输入员工姓名：" << endl;
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
				cout << "未查询到相关信息！" << endl;
			}
		}
	}
	system("pause");
	system("cls");

}
//排序职工信息
void workerManager::SortWorker()
{
	if (this->m_FileIsEmpty)
	{
		cout << "未记录有数据！" << endl;
	}
	else
	{
		int select = 0;

		cout << "请输入要排序的方式：" << endl;
		cout << "1、按照职工编号升序排列" << endl;
		cout << "2、按照职工编号降序排列" << endl;
		cin >> select;
		for (size_t i = 0; i < this->m_ArrayNum; ++i)
		{
			int minOrmax = i;
			for (size_t j = i + 1; j < this->m_ArrayNum; ++j)
			{
				if (select == 1)//升序
				{
					if (this->m_worker[minOrmax]->m_Id > this->m_worker[j]->m_Id)
					{
						minOrmax = j;
					}
				}
				else//降序
				{
					if (this->m_worker[minOrmax]->m_Id < this->m_worker[j]->m_Id)
					{
						minOrmax = j;
					}
				}
			}
			if (i != minOrmax)//当设定的最小或者最大值变化时候，需要更新列表
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
//清空功能
void workerManager::EmpWorker()
{
	int select;
	cout << "确认清空记录？" << endl;
	cout << "1、确认" << endl;
	cout << "2、取消" << endl;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);//trunc---删除并新建
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
		cout << "清空成功！" << endl;
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
//初始化职工
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
//退出系统
void workerManager::ExitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}
