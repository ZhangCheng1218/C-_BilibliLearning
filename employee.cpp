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
	cout << "ְ����ţ�" << m_Id
		<< "\tְ��������" << m_Name
		<< "\t��λ��" << getDeptName()
		<< "\t��λְ����ɾ�����������" << endl;

}
string Employee::getDeptName()
{
	return string("��ְͨ��");
}
