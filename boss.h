#pragma once
#include<iostream>
#include"worker.h"

using namespace std;

class Boss :public AbstractWorker
{
public:
	Boss(int id, int did, string name);//����
	void showInfo();//��д���ി�麯��
	string getDeptName();//��д���ി�麯��
};