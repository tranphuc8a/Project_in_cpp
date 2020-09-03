#ifndef STRING_09_CPP
#define STRING_09_CPP

#include "String.h"

int String::toInt()
{
	return std::stoi(this->Str);
}
long String::toLong()
{
	return std::stol(this->Str);
}
long long String::toLongLong()
{
	return std::stoll(this->Str);
}
float String::toFloat()
{
	return std::stof(this->Str);
}
double String::toDouble()
{
	return std::stod(this->Str);
}
long double String::toLongDouble()
{
	return std::stold(this->Str);
}
String String::operator * (const int & id)
{
	string tmp = "";
	for (int i = 1; i<=id; i++) tmp += this->Str;
	this->Str = tmp;
	return *this;
}
String String::operator + (const char & kt)
{
	String res(this->Str + kt);
	return res;
}
String String::operator + (const string & str)
{
	return String(this->Str + str);
}
String String::operator + (const String & str)
{
	return String(this->Str + str.Str);
}
String operator + (const char & kt, const String & str)
{
	return String(kt + str.Str);
}
String operator + (const char * str1, const String &str2)
{
	return (string) str1 + str2.Str;
}
String operator + (const string &str1, const String &str2)
{
	return str1 + str2.Str;
}
String String::operator += (const char & kt)
{
	this->Str += kt;
	return *this;
}
String String::operator += (const string & str)
{
	this->Str += str;
	return *this;
}
String String::operator += (const String & str)
{
	this->Str += str.Str;
	return *this;
}
String String::push_back(char kt)
{
	this->Str += kt;
	return *this;
}
String String::push_back(string str)
{
	this->Str += str;
	return *this;
}
String String::push_back(String str)
{
	this->Str += str.getdata();
	return *this;
}
String String::pop_back()
{
	if (!this->empty()) this->Str.pop_back();
	return *this;
}
String String::push_front(char kt)
{
	this->Str = kt + this->Str;
	return *this;
}
String String::push_front(string str)
{
	this->Str = str + this->Str;
	return *this;
}
String String::push_front(String str)
{
	this->Str = str.getdata() + this->Str;
	return *this;
}
String String::pop_front()
{
	this->Str = this->substring(1, this->size() - 1).to_string();
	return *this;
}
istream & getline(istream & in, String & str)
{
	getline(in, str.Str);
	return in;
}
ostream & operator << (ostream & out, const String & str)
{
	out << str.Str;
	return out;
}
istream & operator >> (istream & in, String & str)
{
	in >> str.Str;
	return in;
}
String String::replace(char kt1, char kt2)
{
	if (kt1 == kt2) return *this;
	while (this->contains(kt1)) this->Str[this->find((char) kt1)] = kt2;
	return *this;
}
String String::replace(string str1, string str2)
{
	if (str1 == str2) return *this;
	while (this->contains(str1))
	{
		int id = this->find(str1);
		this->erase(id, str1.length());
		this->insert(str2, id);
	}
	return *this;
}
void String::swap(String & str)
{
	string tmp = this->Str;
	this->Str = str.getdata();
	str = String(tmp);
}
string String::to_string()
{
	return this->Str;
}


#endif
