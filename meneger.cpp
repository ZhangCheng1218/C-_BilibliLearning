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
	cout << "ְ����ţ�" << m_Id
		<< "\tְ��������" << m_Name
		<< "\t��λ��" << getDeptName()
		<< "\t��λְ������ϰ彻��������" << endl;

}
string Meneger::getDeptName() 
{
	return string("����");
}