//STL - vector emplace practicing program1 on 21/04/2020.
//Program to illustrate the vector::emplace() function insertion at front
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = { 100, 200, 300 };
	// insert element by emplace function at front
	auto itr = v.emplace(v.begin(), 50);
	// print the elements of the vector
    cout << "The vector elements are: ";
	for (auto itr = v.begin(); itr != v.end(); ++itr)
		cout << *itr << " ";
    cout << endl;
	return 0;
}
