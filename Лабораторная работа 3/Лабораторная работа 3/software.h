#pragma once;
#include <string>
using namespace std;

class Software
{
	string developer;
protected:
	static Software *head;  // статическая компонента 
public:
	Software *next;
	Software(){};
	Software(string);
	virtual ~Software(){};
	void set_developer(string);
	string get_developer();
	virtual void print();
	void add();
};