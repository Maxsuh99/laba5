#pragma once;
#include "stdafx.h"
#include "string"
#include "word_processor.h"

using namespace std;

class Word : public WordProcessor
{
	int version;

public:
	Word();
	Word(int, string, string, int, string);
	virtual ~Word(){};

	void set_version(int);
	int get_version();

	virtual void print();
	


};