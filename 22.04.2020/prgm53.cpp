//STL - multi map emplace practicing program3 on 22/04/2020.
//Program for the illustration of multi map::emplace() function
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// initialize container
	multimap<int, int> mm;
	// insert elements in random order
	mm.emplace(2, 300);
	mm.emplace(1, 400);
	mm.emplace(2, 600);
	mm.emplace(2, 200);
	mm.emplace(1, 500);
	mm.emplace(4, 500);
	// prints the elements
	cout << "The multimap is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mm.begin(); itr != mm.end(); itr++)
		cout << itr->first << "\t" << itr->second << endl;
	return 0;
}
