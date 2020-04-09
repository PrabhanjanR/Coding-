//STL - unordered set practicing program1 on 09/04/2020.
//Program to demonstrate various function of unordered_set.
#include<iostream>
#include<set>
#include<unordered_set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// declaring set
	unordered_set <string> us ;
	// inserting various string
	us.insert("code") ;
	us.insert("in") ;
	us.insert("c++") ;
	us.insert("is") ;
	us.insert("fast") ;
	string k = "slow" ;
	// find returns end iterator if key is not found,
	// else it returns iterator to that key
	if (us.find(k) == us.end())
		cout << k << " not found" << endl << endl ;
	else
		cout << "Found " << k << endl << endl ;
	k = "c++";
	if (us.find(k) == us.end())
		cout << k << " not found\n" ;
	else
		cout << "Found " << k << endl ;
	//Iterating over whole set and printing its content
	cout << "\nAll elements : ";
	unordered_set<string> :: iterator itr;
	for (itr = us.begin(); itr != us.end(); itr++)
		cout << (*itr) << endl;
    return 0;
}
