//STL - unordered map practicing program3 on 13/04/2020.
//Program to demonstrate various function of unordered multi map.
#include <bits/stdc++.h>
using namespace std;
//making typedef for short declaration.
typedef unordered_multimap<string, int>::iterator itr;
//Function to print unordered_multi map.
void print(unordered_multimap<string, int> umm)
{
	// begin() returns iterator to first element of map
	itr it = umm.begin();
	for (; it != umm.end(); it++)
		cout << "<" << it->first << ", " << it->second
			<< "> ";
	cout << endl;
}
int main()
{

	// Initialization by intializer list
	unordered_multimap<string, int> umm ({{"prabhu", 1}, {"cricket", 2}, {"prabhu", 10}, {"red", 7},
										   {"man", 9}, {"red", 6}, {"prabhu", 5}});
	print(umm); //printing.
}
