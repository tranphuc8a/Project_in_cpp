#ifndef STRING_02_CPP
#define STRING_02_CPP

#include "String.h"

template <class T>
String StringFunction::to_String(T data)
{
	if (typeid(T) == typeid(String)) return data;
	else if (typeid(T) == typeid(string)) return String(data);
	else return String(std::to_string(data));
}
string to_string(String str)
{
	return str.to_string();
}
int StringFunction::stoi(String str)
{
	return std::stoi(str.to_string());
}
long StringFunction::stol(String str)
{
	return std::stol(str.to_string());
}
float StringFunction::stof(String str)
{
	return std::stof(str.to_string());
}
double StringFunction::stod(String str)
{
	return std::stod(str.to_string());
}
long long StringFunction::stoll(String str)
{
	return std::stoll(str.to_string());
}
long double StringFunction::stold(String str)
{
	return std::stold(str.to_string());
}

int StringFunction::len(String str)
{
	return str.size();
}
int StringFunction::len(string str)
{
	return str.size();
}

void StringFunction::swap(String & str1, String & str2)
{
	String tmp = str1;
	str1 = str2;
	str2 = tmp;
}


#endif
