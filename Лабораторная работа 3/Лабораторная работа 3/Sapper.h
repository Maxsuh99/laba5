#pragma once;
#include "Game.h"

class Sapper : public Game
{
	Nik_User Prof;
	string level;

public:
	Sapper();
	Sapper(string,string, string);
	virtual ~Sapper();

	void set_Prof(string, int);
	Nik_User get_Prof();

	void set_level(string);
	string get_level();

	virtual void print();
	
};