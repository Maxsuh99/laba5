#include "stdafx.h"
#include "software.h"
#include "iostream"
#include "virus.h"

using namespace std;

Virus::Virus(string hacker_, string  nik_, int age_, string developer_):Software(developer_)
{
	hacker = hacker_;
	Admin.set_nik(nik_);
	Admin.set_age(age_);
}

void Virus::set_Admin(string nik_, int age_)
{
	Nik_User::Nik_User(nik_, age_);
};
Nik_User Virus::get_Admin()
{
	return Admin;
}

void Virus::set_hacker(string hacker_)
{
	hacker = hacker_;
}
string Virus::get_hacker()
{
	return hacker;
}

void Virus::print()
{
	Software::print();
	cout << "Virus:" << "\n";
	Admin.print();
	cout << "hacker:" <<Virus::get_hacker().c_str();
}
