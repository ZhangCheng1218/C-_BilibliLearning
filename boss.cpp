#include<iostream>
#include<string>
#include"boss.h"

using namespace std;

Boss::Boss(int id, int did, string name)
{
	this->m_Id = id;
	this->m_dId = did;
	this->m_Name = name;
}
void Boss::showInfo()
{
	cout << "ְ����ţ�" << m_Id
		<< "\tְ��������" << m_Name
		<< "\t��λ��" << getDeptName()
		<< "\t��λְ���·�����" << endl;

}
string Boss::getDeptName()
{
	return string("�ϰ�");
}