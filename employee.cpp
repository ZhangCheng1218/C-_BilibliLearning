#include"employee.h"
#include<iostream>
#include<string>
using namespace std;

Employee::Employee(int id, int did, std::string name)
{
	this->m_dId = did;
	this->m_Id = id;
	this->m_Name = name;
}
void Employee::showInfo()
{
	cout << "职工编号：" << m_Id
		<< "\t职工姓名：" << m_Name
		<< "\t岗位：" << getDeptName()
		<< "\t岗位职责：完成经理交给的任务！" << endl;

}
string Employee::getDeptName()
{
	return string("普通职工");
}
