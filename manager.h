#pragma once
#include<iostream>
#include"worker.h"

using namespace std;

class Meneger:public AbstractWorker
{
public:
	Meneger(int id, int did, string name);//����
	void showInfo();//��д���ി�麯��
	string getDeptName();//��д���ി�麯��
};