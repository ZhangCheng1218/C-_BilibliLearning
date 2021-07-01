#pragma once//防止头文件重复包含
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
	//展示菜单
	void ShowMenu();
	//添加人员
	void AddWorker();
	//显示功能
	void ShowWorker();
	//删除职工，按照编号
	void DelWorker();
	//用于删除功能，判断职工是否存在
	int IsExist(int workerNum);
	//修改职工信息
	void ModWorker();
	//查找职工
	void FindWorker();
	//排序职工信息
	void SortWorker();
	//保存到txt
	void Save();
	//获取txt中记录的人数
	int GetNum();
	//清空功能
	void EmpWorker();
	//初始化职工
	void Ini_Worker();
	//退出程序
	void ExitSystem();
	~workerManager();
	//该案例中，添加人员会存在添加的人员不是一个类的，比如employee\boss\manager，数组得放同一个类型的数据
	//多态，用AbstractWorker*指向实例化对象，也就是员工老板经理类，这样数组就能放同一类数据了
	// 同时这个数组得开辟到堆区，就需要new这个*，用AbstractWorker**来接收new的*；
	// 人数得有记录，会出现在原有的人数基础上追加人数，所以得有m_Array;
	//
	//记录数组中人员数量
	int m_ArrayNum;
	AbstractWorker** m_worker;
	bool m_FileIsEmpty;

};
