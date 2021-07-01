#include<iostream>
#include"workerManager.h"
#include"worker.h"




using namespace std;
int main()
{
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
			wm.ShowWorker();
			break;
		case 3://删除
			wm.DelWorker();
			break;
		case 4://修改
			wm.ModWorker();
			break;
		case 5://查找
			wm.FindWorker();
			break;
		case 6://排序
			wm.SortWorker();
			break;
		case 7://清空
			wm.EmpWorker();
			break;
		default:
			system("cls");
			break;
		}

	}
	
	return 0;
}