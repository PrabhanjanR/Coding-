//STL - Joining of vectors practicing program3 on 04/05/2020.
//Program to join two Vectors using set_union() in STL
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Get the vector
	vector<int> v1 = { 1, 3, 5, 7, 9, 11 };
	vector<int> v2 = { 2, 4, 6, 8, 10, 12 };
	//Sort the vector
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	//Print the vector
	cout << "First Vector: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	cout << "Second Vector: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << endl;
	//Initialize a vector to store the common values and an iterator to traverse this vector
	vector<int> v(v1.size() + v2.size());
	vector<int>::iterator it, itr;
	it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	cout << "\nAfter joining:\n";
	for (itr = v.begin(); itr != it; ++itr)
		cout << *itr << ", ";
	cout << endl;
	return 0;
}
