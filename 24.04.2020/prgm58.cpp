//STL - multi set emplace practicing program1 on 24/04/2020.
//Program to demonstrate difference between emplace and insert
#include<bits/stdc++.h>
using namespace std;
int main()
{
	multiset<pair<char, int>> m;
	//using emplace() to insert pair in-place
	m.emplace('A', 12);
	m.insert(make_pair('B', 24));
	m.emplace('C', 36);
	m.insert(make_pair('D', 48));
	// printing the multi set
	for (auto it = m.begin(); it != m.end(); ++it)
		cout << " " << (*it).first << " " << (*it).second << endl;
    cout << endl;
	return 0;
}
