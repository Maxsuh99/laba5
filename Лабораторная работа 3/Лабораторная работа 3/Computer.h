#pragma once
#include "software.h"
#include "Game.h"
#include "Word.h"
#include <iostream>
#include "nik_user.h"
using namespace std;
class Computer : public Software
{
public:
	static void show();  // статический метод 
	static string Admin;
	static void setAdmin(string name)
	{
		Admin = name;
	}
};
class Controller : public Computer
{
public:
	static void SearchGame()
	{
		string type;
		cout << "Enter game type: ";
		cin >> type;
		Software *p = head;
		while (p)
		{
			Game *temp = (Game*)p;
			if (temp->get_type() == type)
				p->print();
			p = p->next;
		}
	}
	static void VersionWord()
	{
		cout << "Enter version Word: ";
		int version;
		cin >> version;
		Software *p = head;
		while (p)
		{
			Word *temp = (Word*)p;
			if (temp->get_version() == version)
				p->print();
			p = p->next;
		}
	}
};