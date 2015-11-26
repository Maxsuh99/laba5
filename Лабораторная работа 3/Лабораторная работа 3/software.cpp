#include "stdafx.h"
#include "software.h"
#include "iostream"


using namespace std;


Software::Software(string developer_)
{
	developer = developer_;
}

void Software::set_developer(string developer_)
{
	developer = developer_;
}
string Software::get_developer()
{
	return developer;
}
void Software::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Software *p = head;
		if (p->next == NULL)
		{
			p->next = this;
			this->next = NULL;
		}
		else
		{
			while (p->next != NULL)
				p = p->next;
		}
		p->next = this;
		this->next = NULL;
	}
}

void Software::print()
{
	cout << "Developper:" << Software::get_developer().c_str() << "\n";
}