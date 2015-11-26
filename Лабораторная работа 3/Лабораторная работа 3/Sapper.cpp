#include "stdafx.h"
#include "Sapper.h"
#include "iostream"

using namespace std;

Sapper::Sapper(string name_,string FPS_, string developper_) :Game(name_, FPS_,developper_)
{
	level = name_;
}
Sapper::~Sapper()
{
	cout << "~Sapper\t" << "\n";
}

void Sapper::set_Prof(string nik_, int age_)
{
	Nik_User::Nik_User(nik_, age_);
}
Nik_User Sapper::get_Prof()
{
	return Prof;
}

void Sapper::set_level(string level_)
{
	level = level_;
}
string Sapper::get_level()
{
	return level;
}

void Sapper::print()
{
	Game::print();
	cout << "Sapper:\t" << "\n";
	Prof.print();
	cout << "LEvel:\t" <<Sapper::get_level().c_str();
}