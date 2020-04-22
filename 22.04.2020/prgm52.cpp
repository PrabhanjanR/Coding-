//STL - list emplace practicing program2 on 22/04/2020.
//Program to illustrate the list::emplace() function
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// declaration of list
	list<pair<int, char> > l;
	// inserts at the beginning of the list
	auto itr = l.emplace(l.begin(), 300, 'Z');
	// inserts at the beginning of the list
	l.emplace(itr, 100, 'A');
	l.emplace(itr, 200, 'K');
	cout << "List: ";
	for (auto itr : l)
		cout << "(" << itr.first << ", " << itr.second << ") ";
    cout << endl;
	return 0;
}
