#include "stdafx.h"
#include "word_processor.h"
#include "Word.h"
#include "Sapper.h"
#include "Computer.h"
#include "nik_user.h"
Software* Software::head = NULL; // инициализация головы списка
string Computer::Admin = "";
int main()
{
	string name;
	int age;
	setlocale(LC_ALL, "RUS");
	cout << "Enter user name: ";
	cin >> name;
	Computer::setAdmin(name);
	Game w1("Game1", "Arcade", "Microsoft");
	Game w2("Game2", "Action", "Lunix");
	Word v(11, "543", "Bond", 22, "Microsoft");

	w1.add();
	w2.add();
	v.add();
		
	Computer::show();
	Controller::SearchGame();
	cout << endl;
	Controller::VersionWord();
	system("pause");
	return 0;
}
