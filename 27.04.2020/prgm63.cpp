//STL - unordered multi map emplace practicing program3 on 27/04/2020.
//Program to illustrate unordered multi map::emplace()
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
	unordered_multimap<int, int> mm;
	// inserts key and elements
	mm.emplace(1, 2);
	mm.emplace(1, 2);
	mm.emplace(2, 4);
	mm.emplace(4, 9);
	mm.emplace(6, 9);
	cout << "Key and Elements: \n";
	for (auto itr = mm.begin(); itr != mm.end(); itr++)
		cout << "{" << itr->first << " : " << itr->second << "}\n";
	return 0;
}
