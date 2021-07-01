#pragma once
#include<iostream>
#include<string>

using namespace std;
//抽象父类
class AbstractWorker 
{
public:
	virtual void showInfo()=0;//纯虚函数
	virtual string getDeptName() = 0;//纯虚函数
	//职工编号
	int m_Id;
	//部门编号
	int m_dId;
	//职工姓名
	string m_Name;
};