#include<iostream>
#include"workerManager.h"
#include"worker.h"




using namespace std;
int main()
{
	//AbstractWorker* emp = new Employee(1,1,"С��");
	//emp->showInfo();
	//delete emp;
	//emp = new Meneger(2,2,"С��");
	//emp->showInfo();
	//delete emp;
	//emp = new Boss(3,3,"����");
	//emp->showInfo();
	//delete emp;
	workerManager wm;
	int choice = 0;
	while (true)
	{
		wm.ShowMenu();
		cout << "���������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�����	
			wm.ExitSystem();
			break;
		case 1://����
			wm.AddWorker();
			break;
		case 2://��ʾ
			break;
		case 3://ɾ��
			break;
		case 4://�޸�
			break;
		case 5://����
			break;
		case 6://����
			break;
		case 7://���
			break;
		default:
			system("cls");
			break;
		}

	}
	
	return 0;
}