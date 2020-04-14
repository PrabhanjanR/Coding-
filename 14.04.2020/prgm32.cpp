//STL - unordered map practicing program3 on 13/04/2020.
//Program to implement find and erase for specific key-value pair for unordered multi map.
#include <bits/stdc++.h>
using namespace std;
typedef unordered_multimap<string, int>:: iterator itr;
bool find_kv(unordered_multimap<string, int>& umm, pair<string, int> p)
{
	pair<itr, itr> it = umm.equal_range(p.first);
	itr it1 = it.first;
	pair<string, int> tmp;
	// looping over all values associated with key
	while (it1 != it.second)
	{
		tmp = *it1;
		if (tmp == p)
			return true;
		it1++;
	}
	return false;
}
// function to delete one copy of pair p from map umm
void erase_kv(unordered_multimap<string, int>& umm, pair<string, int> p)
{
	pair<itr, itr> it = umm.equal_range(p.first);
	itr it1 = it.first;
	pair<string, int> tmp;
	// looping over all values associated with key
	while (it1 != it.second)
	{
		tmp = *it1;
		if (tmp == p)
		{
			umm.erase(it1);
			break;
		}
		it1++;
	}
}
void print(unordered_multimap<string, int> umm)
{
	itr it = umm.begin();
	for (; it != umm.end(); it++)
		cout << "<" << it->first << ", " << it->second << "> ";
	cout << endl;
}
int main()
{
	// initializing multimap by initializer list
	unordered_multimap<string, int> umm ({{"prabhu", 1}, {"red", 2}, {"prabhu", 10}, {"priyanka", 7},
                                            {"cricket", 9}, {"red", 6}, {"prabhu", 1}});
	cout << "Initial content\n";
	print(umm);
	pair<string, int> kv = make_pair("apple", 1);
	cout << "\nAfter insertion of one more <apple, 1>\n";
	print(umm);
	if (find_kv(umm, kv))
		erase_kv(umm, kv);
	else
		cout << "\nkey-value pair is not there in unordered multimap\n";
	cout << "\nAfter deletion one occurrence of <apple, 1>\n";
	print(umm);
}
