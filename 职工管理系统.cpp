#include<iostream>
#include"workerManager.h"
#include"worker.h"




using namespace std;
int main()
{
	//AbstractWorker* emp = new Employee(1,1,"小张");
	//emp->showInfo();
	//delete emp;
	//emp = new Meneger(2,2,"小王");
	//emp->showInfo();
	//delete emp;
	//emp = new Boss(3,3,"老张");
	//emp->showInfo();
	//delete emp;
	workerManager wm;
	int choice = 0;
	while (true)
	{
		wm.ShowMenu();
		cout << "请输入你的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出程序	
			wm.ExitSystem();
			break;
		case 1://增加
			wm.AddWorker();
			break;
		case 2://提示
			break;
		case 3://删除
			break;
		case 4://修改
			break;
		case 5://查找
			break;
		case 6://排序
			break;
		case 7://清空
			break;
		default:
			system("cls");
			break;
		}

	}
	
	return 0;
}