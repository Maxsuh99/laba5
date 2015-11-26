#pragma once;
#include "software.h"
#include "nik_user.h"

class Virus : public Software
{
	Nik_User Admin;
	string hacker;
public:

	Virus(string, string, int, string);

	void set_Admin(string, int);
	Nik_User get_Admin();

	void set_hacker(string);
	string get_hacker();

	virtual void print();
	
};