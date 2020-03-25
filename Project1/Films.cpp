#include "Films.h"
#include <iostream>
#include <string>
#include <fstream>


Films *films;
int countFilms = 0;

void addFilm()
{
	ofstream fout;
	fout.open("Films.txt", fstream::app);
	bool isOpen = fout.is_open();
	if (isOpen == true)
	{
		Films *temp = new Films[countFilms + 1];
		for (int i = 0; i < countFilms; i++)
		{
			temp[i] = films[i];
		}

		int countActors = 0;
		//¬носимо данн≥ про новий ф≥льм
		cout << "Enter name for film ->";
		cin >> temp[countFilms].nameFilm;
		cout << "Enter count actors for this film ->";
		cin >> countActors;
		temp[countFilms].countActors = countActors;
		temp[countFilms].actors = new Actor[countActors];
		for (int i = 0; i < countActors; i++)
		{
			cout << "enter name for actor" << endl;
			cin >> temp[countFilms].actors[i].name;
			cout << "enter raating for actor" << endl;
			cin >> temp[countFilms].actors[i].reting;
		}

		fout << temp[countFilms].nameFilm;
		fout << temp[countFilms].countActors;
		for (int i = 0; i < temp[countFilms].countActors; i++)
		{
			fout << temp[countFilms].actors[i].name;
			fout << temp[countFilms].actors[i].reting;
		}
		fout.close();
		countFilms++;
		delete films;
		films = temp;
	}
	else
	{
		cout << "Error" << endl;
	}
}

void showFilm()
{
	for (int i = 0; i < countFilms; i++)
	{
		cout << films[i].nameFilm << endl;
		for (int j = 0; j < films[i].countActors; j++)
		{
			cout << films[i].actors[j].name 
				<< " -> " <<
				films[i].actors[j].reting << endl;
		}
	}
}
