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
			wm.ShowWorker();
			break;
		case 3://ɾ��
			wm.DelWorker();
			break;
		case 4://�޸�
			wm.ModWorker();
			break;
		case 5://����
			wm.FindWorker();
			break;
		case 6://����
			wm.SortWorker();
			break;
		case 7://���
			wm.EmpWorker();
			break;
		default:
			system("cls");
			break;
		}

	}
	
	return 0;
}