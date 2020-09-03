#ifndef STRING_05_CPP
#define STRING_05_CPP

#include "String.h"

typedef String::iterator str_it, Str_it;

String::iterator::iterator()
{
	String::iterator::it = NULL;
}
String::iterator::iterator(char * it)
{
	String::iterator::it = it;
}
String::iterator::~iterator(){}
String::iterator String::iterator::operator = (char * it)
{
	String::iterator::it = it;
}
String::iterator String::iterator::operator + (int x)
{
	return String::iterator(it + x);
}
String::iterator String::iterator::operator ++(int)
{
	String::iterator::it++;
	return String::iterator(it);
}
String::iterator String::iterator::operator ++()
{
	String::iterator IT = String::iterator(it);
	String::iterator::it++;
	return IT;
}
String::iterator String::iterator::operator - (int x)
{
	return String::iterator::it - x;
}
String::iterator String::iterator::operator --(int)
{
	String::iterator::it++;
	return String::iterator(it);
}
String::iterator String::iterator::operator --()
{
	String::iterator IT = String::iterator(it);
	it--;
	return IT;
}
char String::iterator::operator * ()
{
	return *String::iterator::it;
}

bool str_it::operator == (String::iterator it)
{
	return str_it::it == it.it;
}
bool str_it::operator != (String::iterator it)
{
	return str_it::it != it.it;
}
bool str_it::operator == (char * it)
{
	return str_it::it == it;
}
bool str_it::operator != (char * it)
{
	return str_it::it != it;
}


#endif

