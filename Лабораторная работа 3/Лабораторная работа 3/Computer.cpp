#include "stdafx.h"
#include "Computer.h"
#include <iostream>
using namespace std;
void Computer::show()
{
	cout << "My Computer" << endl;
	cout << "Admin: " << Admin << endl;
	Software *p = head;
	while (p)
	{
		p->print();
		std::cout << endl;
		p = p->next;
	}
}
