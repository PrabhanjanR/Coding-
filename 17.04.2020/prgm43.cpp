//STL - map emplace practicing program3 on 17/04/2020.
//Program for the illustration of map::emplace() function
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// initialize container
	map<int, int> m;
	// insert elements in random order
	m.emplace(2, 10);
	m.emplace(1, 20);
	m.emplace(2, 30);
	m.emplace(1, 40);
	m.emplace(4, 50);
	// prints the elements
	cout << "The map is : \n";
	cout << "KEY\tELEMENT\n";

	for (auto itr = m.begin(); itr != m.end(); itr++)
		cout << itr->first << "\t" << itr->second << endl;

	return 0;
}
