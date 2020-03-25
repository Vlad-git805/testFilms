
#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <Windows.h>
#include "Films.h"



using namespace std;

void main()
{
	int a = 0;
	do
	{
		cout << "1 - Add new film" << endl;
		cout << "2 - list of films" << endl;
		cout << "3 - list employee by surname" << endl;
		cout << "4 - list employee by age" << endl;
		cout << "5 - list employee by first letter of surname" << endl;
		cout << "0 - exit" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "Add Film" << endl;
			addFilm();
		}
		break;
		case 2:
		{
			cout << "List of films" << endl;
			showFilm();
		}
		break;
		case 3:
		{
			cout << "List employee by surname" << endl;

		}
		break;
		case 4:
		{
			cout << "List employee by age" << endl;

		}
		break;
		case 5:
		{
			cout << "List employee by first letter of surname" << endl;

		}
		break;
		case 6:
		{
			cout << "Delete employee" << endl;

		}
		break;
		case 0:
		{
			exit(0);
		}
		break;
		default:
			break;
		}
	} while (a != 0);
	system("pause");
}