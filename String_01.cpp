#ifndef STRING_01_CPP
#define STRING_01_CPP

#include "String.h"

String::String()
{
	this->Str = string("");
}
String::String(const char * str)
{
	this->Str = str;
}
String::String(const char * str, int from, int to)
{
	this->Str = "";
	for (int i = from; i <= to; i++)
	{
		this->Str += *(str + i);
	}
}
String::String(string str)
{
	this->Str = str;
}
String::String(string str, int from, int to)
{
	this->Str = "";
	for (int i = from; i<=to; i++)
	{
		this->Str += str[i];
	}
}
String::String(vector <char> str)
{
	for (auto it : str) this->Str += it;
}
String::String(vector <char>::iterator st1, vector <char>::iterator st2)
{
	this->Str = "";
	for (auto it = st1; it != st2; it++)
	{
		this->Str += *it;
	}
}

String::~String(){};


#endif
