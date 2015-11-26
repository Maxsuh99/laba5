#include "stdafx.h"
#include "software.h"
#include "Game.h"
#include "iostream"

using namespace std;

Game::Game(string name_, string type_, string developper_): Software(developper_)
{
	type = type_;
	name = name_;
}

void Game::set_type(string FPS_)
{
	type = FPS_;
}
string Game::get_type()
{
	return type;
}

void Game::print()
{
	cout << "Game: " << name << "\n";
	Software::print();
	cout << "Type: " << Game::get_type().c_str() << endl;
}

