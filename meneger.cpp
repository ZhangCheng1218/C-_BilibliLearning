#include<iostream>
#include<string>
#include"manager.h"

using namespace std;

Meneger::Meneger(int id, int did, string name) 
{
	this->m_Id = id;
	this->m_dId = did;
	this->m_Name = name;
}
void Meneger::showInfo() 
{
	cout << "职工编号：" << m_Id
		<< "\t职工姓名：" << m_Name
		<< "\t岗位：" << getDeptName()
		<< "\t岗位职责：完成老板交给的任务！" << endl;

}
string Meneger::getDeptName() 
{
	return string("经理");
}