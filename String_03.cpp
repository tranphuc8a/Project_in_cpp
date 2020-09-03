#ifndef STRING_03_CPP
#define STRING_03_CPP

#include "String.h"

bool String::operator == (const string & str)
{
	return this->Str == str;
}
bool String::operator == (const String & str)
{
	return this->getdata() == str.Str;
}
bool String::operator == (const char * str)
{
	return this->Str == (string) str;	
}
bool String::operator != (const string & str)
{
	return this->Str != str;
}
bool String::operator != (const String & str)
{
	return this->Str != str.Str;
}
bool String::operator != (const char * str)
{
	return this->Str != (string) str;	
}
bool String::operator >  (const string & str)
{
	return this->Str > str;
}
bool String::operator >  (const String & str)
{
	return this->Str > str.Str;
}
bool String::operator > (const char * str)
{
	return this->Str > (string) str;	
}
bool String::operator <  (const string & str)
{
	return this->Str < str;
}
bool String::operator <  (const String & str)
{
	return this->Str < str.Str;
}
bool String::operator <  (const char * str)
{
	return this->Str < (string) str;
}
bool String::operator >= (const string & str)
{
	return this->Str >= str;
}
bool String::operator >= (const String & str)
{
	return this->Str >= str.Str;
}
bool String::operator >= (const char * str)
{
	return this->Str >= (string) str;
}
bool String::operator <= (const string & str)
{
	return this->Str <= str;
}
bool String::operator <= (const String & str)
{
	return this->Str <= str.Str;
}
bool String::operator <= (const char * str)
{
	return this->Str <= (string) str;
}

#endif
