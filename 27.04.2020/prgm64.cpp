//STL - unordered multi map emplace practicing program4 on 27/04/2020.
//Program to illustrate unordered multi map::emplace
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
	// declaration
	unordered_multimap<string, string> mm;
	// inserts key and elements
	mm.emplace("Color", "Black");
	mm.emplace("Height", "5'4");
	mm.emplace("Age", "23");
	mm.emplace("DOB", "01/02/1997");
    mm.emplace("Name", "Prabhanjan");
	for (auto itr = mm.begin(); itr != mm.end(); itr++)
		cout << itr->first << ":" << itr->second << endl ;
	return 0;
}
