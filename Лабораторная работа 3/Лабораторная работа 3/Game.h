#pragma once;
#include "software.h"
#include "nik_user.h"

class Game: public Software
{
	string type;
	string name;
public:
	Game(string, string, string);

	void set_type(string);
	string get_type();

	virtual void print();
	
};