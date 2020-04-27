//STL - unordered map emplace practicing program2 on 27/04/2020.
//Program for the illustration of unordered_map::emplace() function
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s = "Prabhanjan";
	unordered_map<char, int> m;
	for (int i = 0; i < s.length(); i++)
		m.emplace(s[i], i);
	for (auto itr = m.begin(); itr != m.end(); itr++)
		cout << itr->first << "--->" << itr->second << "\n";
}
