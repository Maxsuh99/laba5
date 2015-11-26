#include "stdafx.h"
#include "Word.h"
#include "iostream"
using namespace std;

Word::Word(int vers, string password_, string nik_, int age_, string developper_) :WordProcessor(password_,nik_,age_, developper_)
	{
		version = vers;
	}

void Word::set_version(int vers)
{
	version = vers;
}
int Word::get_version()
{
	return version;
}

void Word::print()
{	
	cout << "Word:\t" << "\n";
	cout << "Version:" << Word::get_version() << "\n";
	WordProcessor::print();
}