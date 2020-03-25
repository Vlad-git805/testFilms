#pragma once
#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

struct Actor
{
	string name;
	int reting;
};

struct Films
{
	string nameFilm;
	Actor *actors;
	int countActors;
};

void addFilm();
void showFilm();