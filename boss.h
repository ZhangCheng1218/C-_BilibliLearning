#pragma once
#include<iostream>
#include"worker.h"

using namespace std;

class Boss :public AbstractWorker
{
public:
	Boss(int id, int did, string name);//构造
	void showInfo();//重写父类纯虚函数
	string getDeptName();//重写父类纯虚函数
};