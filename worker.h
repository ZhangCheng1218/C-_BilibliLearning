#pragma once
#include<iostream>
#include<string>

using namespace std;
//������
class AbstractWorker 
{
public:
	virtual void showInfo()=0;//���麯��
	virtual string getDeptName() = 0;//���麯��
	//ְ�����
	int m_Id;
	//���ű��
	int m_dId;
	//ְ������
	string m_Name;
};