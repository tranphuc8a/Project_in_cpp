#ifndef STRING_06_CPP
#define STRING_06_CPP

#include "String.h"

typedef String::iterator str_it, Str_it;

int String::size()
{
	return this->Str.size();
}
int String::length()
{
	return this->Str.size();
}
string String::getdata()
{
	return this->Str;
}
str_it String::begin()
{
	return str_it(&this->Str[0]);
}
str_it String::end()
{
	return str_it(&this->Str[this->size()]);
}
char & String::front()
{
	return this->Str[0];
}
char & String::back()
{
	return this->Str[this->size() - 1];
}

#endif
