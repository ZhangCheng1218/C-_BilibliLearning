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
	void ShowMenu();//展示菜单
	void AddWorker();//添加人员
	void Save();//保存到txt
	int GetNum();//获取txt中记录的人数
	void ExitSystem();//退出程序
	~workerManager();
	//该案例中，添加人员会存在添加的人员不是一个类的，比如employee\boss\manager，数组得放同一个类型的数据
	//多态，用AbstractWorker*指向实例化对象，也就是员工老板经理类，这样数组就能放同一类数据了
	// 同时这个数组得开辟到堆区，就需要new这个*，用AbstractWorker**来接收new的*；
	// 人数得有记录，会出现在原有的人数基础上追加人数，所以得有m_Array;
	//

	int m_ArrayNum;//记录数组中人员数量
	AbstractWorker** m_worker;
	bool m_FileIsEmpty;

};
