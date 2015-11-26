#pragma once;
#include <string>

using namespace std;

class Nik_User
{
	string nik;
	int age;

public:
	Nik_User()
	{
		nik = "";
		age = 0;
	}
	Nik_User(string, int);
	

	void set_nik(string);
	string get_nik();

	void set_age(int);
	int get_age();

	virtual void print();


};