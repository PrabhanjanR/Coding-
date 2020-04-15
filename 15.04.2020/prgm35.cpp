//STL - vector practicing program3 on 15/04/2020.
// C++ program to illustrate the element accessor in vector
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	for (int i = 1; i <= 10; i++)
		v.push_back(i * 10);
	cout << "\nReference operator [2] = " << v[2];
	cout << "\nat 4 = " << v.at(4);
	cout << "\nfront() = " << v.front();
	cout << "\nback()) = " << v.back();
	// pointer to the first element
	int* pos = v.data();
	cout << "\nThe first element is " << *pos;
	return 0;
}
