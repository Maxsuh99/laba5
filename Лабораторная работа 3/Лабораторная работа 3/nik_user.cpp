#include "stdafx.h"
#include "nik_user.h"
#include <iostream>

Nik_User::Nik_User(string nik_, int age_)
{
	nik=nik_;
	age = age_;
}

void Nik_User::set_nik(string nik_)
{
	nik = nik_;
}
string Nik_User::get_nik()
{
	return nik;
}

void Nik_User::set_age(int age_)
{
	age = age_;
}
int Nik_User::get_age()
{
	return age;
}

void Nik_User::print()
{
	cout << "Polzovatel`:\n";
	cout << "Name:" << get_nik() << "\n";
	cout << "Age:" << get_age() << "\n";
}