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
	unordered_multimap<string, int> umm1;
	// Initialization by intializer list
	unordered_multimap<string, int> umm2 ({{"prabhu", 1}, {"cricket", 2}, {"prabhu", 10}, {"red", 7},
										   {"man", 9}, {"red", 6}, {"prabhu", 1}});
	// Initialization by assignment operation
	umm1 = umm2;
	print(umm1);
	if (umm2.empty())
		cout << "unordered multimap 2 is empty\n";
	else
		cout << "unordered multimap 2 is not empty\n";
	// size returns total number of elements in container
	cout << "Size of unordered multimap 1 is " << umm1.size()
		<< endl;
	string k = "prabhu";
	// find and return any pair, associated with key
	itr it = umm1.find(k);
	if (it != umm1.end())
	{
		cout << "\nkey " << k << " is there in unordered multimap 1\n";
		cout << "\none of the value associated with " << k << " is " << it->second << endl;
	}
	else
		cout << "\nkey " << k << " is not there in unordered multimap 1\n";
	// count returns count of total number of pair associated with key
	int cnt = umm1.count(k);
	cout << "\ntotal values associated with " << k << " are " << cnt << "\n\n";
	print(umm2);
	// clear deletes all pairs from container
	umm1.clear();
	umm2.clear();
	if (umm2.empty())
		cout << "\nunordered multimap 2 is empty\n";
	else
		cout << "\nunordered multimap 2 is not empty\n";
}
