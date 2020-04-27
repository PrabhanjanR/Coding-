//STL - unordered map emplace practicing program1 on 27/04/2020.
//Program for the illustration of unordered_map::emplace() function
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//initialize container
	unordered_map<int, int> m;
	//insert elements in random order
	m.emplace(2, 30);
	m.emplace(1, 30);
	m.emplace(2, 20);
	m.emplace(1, 60);
	m.emplace(4, 20);
	//prints the elements
	for (auto itr = m.begin(); itr != m.end(); itr++)
		cout << itr->first << "--->" << itr->second << "\n";
    cout << endl;
}
