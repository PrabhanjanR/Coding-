//STL - unordered set practicing program2 on 09/04/2020.
//Program to delete one copy from unordered multi set.
#include<iostream>
#include<set>
#include <bits/stdc++.h>
using namespace std;
typedef unordered_multiset<int>::iterator umit;
//Utility function to print unordered_multi set
void print(unordered_multiset<int> ums)
{
	//begin() returns iterator to first element of set
	umit it = ums.begin();
	for (; it != ums.end(); it++)
		cout << *it << " ";
	cout << endl;
}
//Function to delete one copy of val from set
void erase(unordered_multiset<int>& ums, int v)
{
	//Find returns iterator to first position
	umit it = ums.find(v);
	//If element is there then erasing that
	if (it != ums.end())
	ums.erase(it);
}
//Driver program to check above function
int main()
{
	//Initializing multi set by initializer list
	unordered_multiset<int> ums ({1, 3, 1, 7, 2, 3, 4, 1, 6});
	int v = 1;
	print(ums);
	erase(ums, v);
	print(ums);
}
