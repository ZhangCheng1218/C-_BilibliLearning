#pragma once
#include<iostream>
#include<string>
#include"worker.h"

using namespace std;

class Employee:public AbstractWorker
{
public :
	Employee(int id,int did,string name);//����
	void showInfo();//��д���ി�麯��
	string getDeptName();//��д���ി�麯��
};

