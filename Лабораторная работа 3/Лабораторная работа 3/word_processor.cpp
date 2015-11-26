#include "stdafx.h"
#include "word_processor.h"
#include "iostream"

using namespace std;

WordProcessor::WordProcessor(string password_, string  nik_, int age_, string developer_) :Software(developer_)
{
	password = password_;
	Admin.set_nik(nik_);
	Admin.set_age(age_);
}

void WordProcessor::set_Admin(string nik_, int age_)
{
	Nik_User::Nik_User(nik_, age_);
}
Nik_User WordProcessor::get_Admin()
{
	return Admin;
}

void WordProcessor::set_password(string password_)
{
	password = password_;
}
string WordProcessor::get_password()
{
	return password;
}

void WordProcessor::print()
{
	Software::print();
	cout << "Word Processor:\t" << "\n";
	Admin.print();
	cout << "Password:" <<WordProcessor::get_password().c_str() << endl;
}
