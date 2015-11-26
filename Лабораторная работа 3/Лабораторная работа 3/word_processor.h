#pragma once;
#include "software.h"
#include "nik_user.h"

class WordProcessor :public Software
{
	Nik_User Admin;
	string password;

public:
	WordProcessor(string, string, int,string);

	void set_Admin(string,int);
	Nik_User get_Admin();

	void set_password(string);
	string get_password();

	virtual void print();

};

