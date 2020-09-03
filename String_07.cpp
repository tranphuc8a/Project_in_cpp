#ifndef STRING_07_CPP
#define STRING_07_CPP

#include "String.h"

String String::insert(char kt, int id)
{
	string newstr = "";
	for (string::iterator it = this->Str.begin(); it != this->Str.end(); it++)
	{
		if (it - this->Str.begin() == id) newstr += kt;
		newstr += *it;
	}
	this->Str = newstr;
	return *this;
}
String String::insert(String str, int id)
{
	string newstr = "";
	for (string::iterator it = this->Str.begin(); it != this->Str.end(); it++)
	{
		if (it - this->Str.begin() == id) newstr += str.getdata();
		newstr += *it;
	}
	this->Str = newstr;
	return *this;
}
String String::insert(string str, int id)
{
	string newstr = "";
	for (string::iterator it = this->Str.begin(); it != this->Str.end(); it++)
	{
		if (it - this->Str.begin() == id) newstr += str;
		newstr += *it;
	}
	this->Str = newstr;
	return *this;
}
String String::insert(const char * str, int id)
{
	return this->insert((string) str, id);
}
String String::remove(int id)
{
	if (id >= this->size() || id < 0) return *this;
	this->Str.erase(id);
	return *this;
}
String String::remove(int id, int len)
{
	if (id >= this->size() || id < 0) return *this;
	if (id + len - 1 >= this->size()) return *this;
	this->Str.erase(id, len);
	return *this;
}
String String::remove_from_to(int from, int to)
{
	if (from >= this->size() || from < 0) return *this;
	if (to >= this->size() || to < 0) return *this;
	this->Str.erase(from, to - from + 1);
	return *this;
}
String String::erase(int id)
{
	return this->remove(id);
}
String String::erase(int id, int len)
{
	return this->remove(id, len);
}
String String::erase_from_to(int from, int to)
{
	return this->remove_from_to(from, to);
}
String String::substring(int start, int len)
{
	string tmp = "";
	for (int i = 1, j = start; i <= len && j < this->size(); i++, j++) tmp += this->Str[j];
	return String(tmp);
}
String String::substring_from_to(int from, int to)
{
	string tmp = "";
	for (int i = from; i <= to && i < this->length(); i++) tmp += this->Str[i];
	return String(tmp);
}
String String::append(String str)
{
	*this += str;
	return *this;
}
String String::append(char kt)
{
	this->Str += kt;
	return *this;
}
String String::append(string str)
{
	this->Str += str;
	return *this;
}
String String::assign(string str)
{
	this->Str = str;
	return *this;
}
String String::assign(String str)
{
	return *this = str;
}
String String::copy(String str)
{
	return this->assign(str);
}
String String::copy(string str)
{
	return this->assign(str);
}
String String::clear()
{
	this->Str = "";
	return *this;
}
String String::resize(int newsize, char newkt = ' ')
{
	if (newsize > this->size())
		for (int i = 1; i<=newsize - this->size(); i++) this->Str += newkt;
	else while (this->size() > newsize && !this->empty()) this->pop_back();
	return *this;
}

#endif
