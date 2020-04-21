//STL - vector emplace practicing program2 on 21/04/2020.
//Program to illustrate the vector::emplace() function insertion at the end
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = { 100, 200, 300 };
	// insert element by emplace function at the end
	auto itr = v.emplace(v.end(), 400);
	// print the elements of the vector
    cout << "The vector elements are: ";
	for (auto itr = v.begin(); itr != v.end(); ++itr)
		cout << *itr << " ";
	return 0;
}
