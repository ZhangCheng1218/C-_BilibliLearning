#pragma once
#include<iostream>
#include<string>
#include"worker.h"

using namespace std;

class Employee:public AbstractWorker
{
public :
	Employee(int id,int did,string name);//构造
	void showInfo();//重写父类纯虚函数
	string getDeptName();//重写父类纯虚函数
};

