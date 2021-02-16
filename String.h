#ifndef STRING_H
#define STRING_H

//  This is project of Phuc


// This is changed in newBranch

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <typeinfo>



using namespace std;

class String
{
private:
	string Str;
public:
	String();
	String(const char *);
	String(const char *, int, int);
	String(string);
	String(string, int, int);
	String(vector <char>);
	String(vector <char>::iterator, vector <char>::iterator);
	
	~String();
public:
	class iterator
	{
	public:
		char * it;
		iterator();
		iterator(char * it);
		~iterator();
		bool operator == (String::iterator);
		bool operator != (String::iterator);
		bool operator == (char *);
		bool operator != (char *);
		iterator operator = (char * it);
		iterator operator + (int x);
		iterator operator ++(int);
		iterator operator ++();
		iterator operator - (int x);
		iterator operator --(int);
		iterator operator --();
		char operator * ();
	};
public:
	int size();
	int length();
	string getdata();
	
	iterator begin();
	iterator end();
	
	char & front();
	char & back();
public:	
	String trim();
	vector <String> split(char kt);
	vector <String> split(string kt);
	vector <String> split(const char * str)
	{
		return this->split((string) str);
	}
	bool contains(char kt);
	bool contains(string str);
	bool contains(const char * str)
	{
		return this->contains((string) str);
	}
	bool in(String str);
	bool in(string str);
	bool in(const char * str)
	{
		return this->in((string) str);
	}
	int compare(String str);
	int compare(string str);
	int compare(const char * str)
	{
		return this->compare((string) str);
	}
	String concat(String str);
	String concat(string str);
	String concat(const char * str)
	{
		return this->concat((string) str);
	}
	
	int indexOf(char kt)
	{
		return this->indexOf(kt, 0);
	}
	int indexOf(String str)
	{
		return this->indexOf(str, 0);
	}
	int indexOf(string str)
	{
		return this->indexOf(str, 0);
	}
	int indexOf(const char * str)
	{
		return this->indexOf((string) str);
	}
	
	int indexOf(char kt, int start);
	int indexOf(String str, int start);
	int indexOf(string str, int start);
	int indexOf(const char * str, int start)
	{
		return this->indexOf((string) str, start);
	}
	int lastIndexOf(char kt);
	int lastIndexOf(String str);
	int lastIndexOf(string str);
	int lastIndexOf(const char * str)
	{
		return this->lastIndexOf((string) str);
	}
	bool empty();
	
	String insert(char kt, int id);
	String insert(String str, int id);
	String insert(string str, int id);
	String insert(const char * str, int id);
	String remove(int id);
	String remove(int id, int len);
	String remove_from_to(int from, int to);
	String erase(int id);
	String erase(int id, int len);
	String erase_from_to(int from, int to);
	String substring(int start, int len);
	String substring_from_to(int from, int to);
	String append(String str);
	String append(char kt);
	String append(string str);
	String append(const char * str)
	{
		return this->append((string) str);
	}
	String assign(string str);
	String assign(String str);
	String assign(const char * str)
	{
		return this->assign((string) str);
	}
	String copy(String str);
	String copy(string str);
	String copy(const char * str)
	{
		return this->copy((string) str);
	}
	String clear();
	String resize(int newsize, char newkt);
	
	const char * c_str();
	
	String operator = (const char * str);
	String operator = (string str);
	String operator = (String str);
	char & at(int id);
	bool isEqual(string str);
	bool isEqual(String str);
	bool isEqual(const char * str)
	{
		return this->isEqual((string) str);
	}
	String lower();
	String upper();
	char & operator [](int id);
	int count(char kt);
	int count(string str);
	int count(String str);
	int find(char kt);
	int find(string str);
	int find(String str);
	int find(const char * str)
	{
		return this->find((string) str);
	}
	int find(char kt, int start);
	int find(string str, int start);
	int find(String str, int start);
	int find(const char * str, int start)
	{
		return this->find((string) str, start);
	}
	String reverse();
	int toInt();
	long toLong();
	long long toLongLong();
	float toFloat();
	double toDouble();
	long double toLongDouble();
	String operator * (const int & id);
	String operator + (const char & kt);
	String operator + (const string & str);
	String operator + (const String & str);
	String operator + (const char * str)
	{
		return *this + (string) str;
	}
	friend String operator + (const char &kt, const String &str);
	friend String operator + (const char * str1, const String &str2);
	friend String operator + (const string &str1, const String &str2);
	String operator += (const char & kt);
	String operator += (const string & str);
	String operator += (const String & str);
	String operator += (const char * str)
	{
		return *this += (string) str;
	}
	String push_back(char kt);
	String push_back(string str);
	String push_back(String str);
	String push_back(const char * str)
	{
		return this->push_back((string) str);
	}
	String pop_back();
	String push_front(char kt);
	String push_front(string str);
	String push_front(String str);
	String push_front(const char * str)
	{
		return this->push_back((string) str);
	}
	String pop_front();
	friend istream & getline(istream & in, String & str);
	friend ostream & operator << (ostream & out, const String & str);
	friend istream & operator >> (istream & in, String & str);
	String replace(char kt1, char kt2);
	String replace(string str1, string str2);
	void swap(String & str);
	string to_string();
	
	bool operator == (const string & str);
	bool operator == (const String & str);
	bool operator == (const char * str);
	bool operator != (const string & str);
	bool operator != (const String & str);
	bool operator != (const char * str);
	bool operator >  (const string & str);
	bool operator >  (const String & str);
	bool operator >  (const char * str);
	bool operator <  (const string & str);
	bool operator <  (const String & str);
	bool operator <  (const char * str);
	bool operator >= (const string & str);
	bool operator >= (const String & str);
	bool operator >= (const char * str);
	bool operator <= (const string & str);
	bool operator <= (const String & str);
	bool operator <= (const char * str);
	
};

namespace StringFunction
{
	template <class T>
	String to_String(T data);
	string to_string(String str);
	int stoi(String str);
	long stol(String str);
	float stof(String str);
	double stod(String str);
	long long stoll(String str);
	long double stold(String str);
	
	int len(String str);
	int len(string str);
	
	void swap(String & str1, String & str2);
};

using namespace StringFunction;

#endif
