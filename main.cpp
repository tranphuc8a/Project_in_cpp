
#include "String.h"

int main()
{
	String Phuc = "            Anh Phuc        10A2          ";
	Phuc.trim();
	Phuc.replace("  ", " ");
//	Phuc.remove(0, 2);
//	Phuc.insert("Thiep ", 4);
//	cout << Phuc.find('u');
	Phuc.push_back(" hihi");
	Phuc += " hihi 8a";
	cout << Phuc << endl;
	
	Phuc.front() += 'a' - 'A';
	
	cout << Phuc << endl;
	
	for (auto it = Phuc.begin(); it != Phuc.end(); it++)
	{
		cout << *it;
	}

	
//	vector <String> res = Phuc.split("0h");
//	for (auto it : res) cout << it << " - ";
	return 0;
}
