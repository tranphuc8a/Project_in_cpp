#ifndef STRING_04_CPP
#define STRING_04_CPP

#include "String.h"

String String::trim()
{
	while (this->back() == ' ') this->pop_back();
	while (this->front() == ' ') this->pop_front();
	return *this;
}
vector <String> String::split(char kt)
{
	vector <String> res;
	string tmp = "";
	for (int i = 0; i<this->Str.size(); i++)
	{
		if (this->Str[i] == kt)
		{
			if (tmp != "") res.push_back(tmp);
			tmp = "";
		}
		else
		{
			tmp += this->Str[i];
		}
	}
	if (tmp != "") res.push_back(tmp);
	return res;
}
vector <String> String::split(string kt)
{
	if (kt.size() == 1)
	{
		return this->split(kt[0]);
	}

	set <char> form;
	for (auto it : kt) form.insert(it);
	
	vector <String> res;
	String tmp = "";
	for (auto it : this->Str)
	{
		if (form.count(it) > 0)
		{
			if (tmp != "") res.push_back(tmp);
			tmp = "";
		}
		else
		{
			tmp += it;
		}
	}
	if (tmp != "") res.push_back(tmp);
	return res;
}
bool String::contains(char kt)
{
	for (auto it : this->Str) if (it == kt) return true;
	return false;
}
bool String::contains(string str)
{
	map <string, int> check;
	for (int i = 0; i < this->size(); i++)
	{
		string tmp = "";
		tmp += this->Str[i];
		check[tmp]++;
		for (int j = i + 1; j < this->size(); j++)
		{
			tmp += this->Str[j];
			check[tmp]++;
		}
	}
	return check[str] >= 1;
}
bool String::in(String str)
{
	return str.contains(this->Str);
}
bool String::in(string str)
{
	return String(str).contains(this->Str);
}
int String::compare(String str)
{
	return this->Str.compare(str.getdata());
}
int String::compare(string str)
{
	return this->Str.compare(str);
}
String String::concat(String str)
{
	this->Str += str.getdata();
	return *this;
}
String String::concat(string str)
{
	this->Str += str;
	return *this;
}
int String::indexOf(char kt, int start)
{
	for (int i = start; i<this->size(); i++)
	{
		if (kt == this->Str[i]) return i;
	}
	return -1;
}
int String::indexOf(String str, int start)
{
	return this->indexOf(str.getdata(), start);
}
int String::indexOf(string str, int start)
{
	for (int i = 0; i < this->size(); i++)
	{
		string tmp = "";
		tmp += this->Str[i];
		if (tmp == str) return i;
		for (int j = i + 1; j < this->size(); j++)
		{
			tmp += this->Str[j];
			if (tmp == str) return i;
		}
	}
	return -1;
}
int String::lastIndexOf(char kt)
{
	for (int i = this->size() - 1; i >= 0; i--) if (this->Str[i] == kt) return i;
}
int String::lastIndexOf(String str)
{
	return this->lastIndexOf(str.getdata());
}
int String::lastIndexOf(string str)
{
	for (int i = this->size() - 1; i >= 0; i--)
	{
		string tmp = "";
		tmp = this->Str[i] + tmp;
		if (tmp == str) return i;
		for (int j = i - 1; j>=0; j--)
		{
			tmp = this->Str[j] + tmp;
			if (tmp == str);
			return j;
		}
	}
	return -1;
}
bool String::empty()
{
	return this->size() == 0;
}


#endif
