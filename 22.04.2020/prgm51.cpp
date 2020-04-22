//STL - list emplace practicing program1 on 22/04/2020.
//Program to illustrate the list::emplace() function
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//declaration of list
	list<int> l = { 5, 6, 7, 8, 9, 10 };
	auto itr = l.emplace(l.begin(), 4);
	//inserts at the beginning of the list
	l.emplace(itr, 3);
	cout << "List: ";
	for (auto itr = l.begin(); itr != l.end(); ++itr)
		cout << *itr << " ";
    cout << endl;
	return 0;
}
