#pragma once
#include<iostream>
#include<string>

using namespace std;
class AbstractWorker 
{
public:
	virtual void showInfo()=0;//纯虚函数
	virtual string getDeptName() = 0;//纯虚函数
	int m_Id;//职工编号
	int m_dId;//部门编号
	string m_Name;//职工姓名
};