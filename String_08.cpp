#ifndef STRING_08_CPP
#define STRING_08_CPP

#include "String.h"

const char * String::c_str()
{
	return this->Str.c_str();
}
	
String String::operator = (const char * str)
{
	this->Str = str;
	return *this;
}
String String::operator = (string str)
{
	this->Str = str;
	return *this;
}
String String::operator = (String str)
{
	this->Str = str.getdata();
	return *this;
}
char & String::at(int id)
{
	return this->Str[id];
}
bool String::isEqual(string str)
{
	return this->Str == str;
}
bool String::isEqual(String str)
{
	return this->Str == str.getdata();
}
String String::lower()
{
	for (auto & it : this->Str)
	{
		if ('A' <= it && it <= 'Z') it += 'a' - 'A';
	}
	return *this;
}
String String::upper()
{
	for (auto & it : this->Str)
	{
		if ('a' <= it && it <= 'z') it += 'A' - 'a';
	}
	return *this;
}
char & String::operator [](int id)
{
	return this->Str[id];
}
int String::count(char kt)
{
	int cnt = 0;
	for (auto it : this->Str)
	{
		if (it == kt) cnt++;
	}
	return cnt;
}
int String::count(string str)
{
	map <string, int> count;
	for (int i = 0; i<this->Str.size(); i++)
	{
		string tmp = "";
		tmp += this->Str[i];
		count[tmp]++;
		for (int j = i + 1; j <= this->size(); j++)
		{
			tmp += this->Str[j];
			count[tmp]++;
		}
	}
	return count[str];
}
int String::count(String str)
{
	return this->count(str.getdata());
}
int String::find(char kt)
{
	return this->find(kt, 0);
}
int String::find(string str)
{
	return this->find(str, 0);
}
int String::find(String str)
{
	return this->find(str, 0);
}
int String::find(char kt, int start)
{
	for (int i = start; i < this->size(); i++)
	{
		if (this->Str[i] == kt) return i;
	}
	return -1;
}
int String::find(string str, int start)
{
	for (int i = start; i < this->size(); i++)
	{
		if (this->substring(i, str.length()) == str) return i;
	}
	return -1;
}
int String::find(String str, int start)
{
	return this->find(str.getdata(), start);
}
String String::reverse()
{
	string res = "";
	for (auto it : this->Str) res = it + res;
	this->Str = res;
	return *this;
}

#endif
