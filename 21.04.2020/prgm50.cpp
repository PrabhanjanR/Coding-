//STL - vector emplace practicing program3 on 21/04/2020.
//Program to illustrate the vector::emplace() function insertion at the middle
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> vec = { 100, 300, 400 };
	// insert element by emplace function in the middle
	auto it = vec.emplace(vec.begin() + 1, 200);
	// print the elements of the vector
    cout << "The vector elements are: ";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";
    cout << endl;
	return 0;
}
