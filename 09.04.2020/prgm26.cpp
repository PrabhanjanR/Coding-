//STL - unordered set practicing program4 on 09/04/2020.
//Program to demonstrate various function of unordered multi set
#include <bits/stdc++.h>
using namespace std;
typedef unordered_multiset<int>::iterator umit;
//Utility function to print unordered multi set
void print(unordered_multiset<int> ums)
{
	//begin() returns iterator to first element of set
	umit it = ums.begin();
	for (; it != ums.end(); it++)
		cout << *it << " ";
	cout << endl;
}
// Driver program to check all function
int main()
{
	unordered_multiset<int> ums1; // empty initialization
	unordered_multiset<int> ums2 ({1, 3, 1, 7, 2, 3, 4, 1, 6}); // Initialization by intialiser list
	ums1 = {2, 7, 2, 5, 0, 3, 7, 5};// Initialization by assignment
	// empty() function return true if set is empty otherwise false
	if (ums1.empty())
		cout << "unordered multiset 1 is empty\n";
	else
		cout << "unordered multiset 1 is not empty\n";
	cout << "The size of unordered multiset 2 is : "
		<< ums2.size() << endl;
	print(ums1);
	ums1.insert(7);
	print(ums1);
	int v = 3;

	if (ums1.find(v) != ums1.end()) //Find function returns iterator to first position of val
		cout << "unordered multiset 1 contains "
			<< v << endl;
	else
		cout << "unordered multiset 1 does not contains "
			<< v << endl;
	v = 5;
	int cnt = ums1.count(v);
	cout << v << " appears " << cnt
		<< " times in unordered multiset 1 \n";
	v = 9;
	if (ums1.count(v))
		cout << "unordered multiset 1 contains "
			<< v << endl;
	else
		cout << "unordered multiset 1 does not contains "
			<< v << endl;
	v = 1;
	pair<umit, umit> erange_it = ums2.equal_range(v); //Equal_range returns a pair
	if (erange_it.first != erange_it.second)
		cout << v << " appeared atleast once in unoredered_multiset \n";
	print(ums2);
	ums2.erase(v);// erase function deletes all instances of val
	print(ums2);
	ums1.clear();//Clear function deletes all entries from set
	ums2.clear();
	if (ums1.empty())
		cout << "unordered multiset 1 is empty\n";
	else
		cout << "unordered multiset 1 is not empty";
}
