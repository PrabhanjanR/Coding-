//STL - vector practicing program4 on 15/04/2020.
//Program to illustrate the Modifiers in vector
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	v.assign(5, 10);
	cout << "The vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	// inserts 15 to the last position
	v.push_back(15);
	int n = v.size();
	cout << "\nThe last element is: " << v[n - 1];
	v.pop_back(); // removes last element
	cout << "\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	v.insert(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];
	v.erase(v.begin());
	cout << "\nThe first element is: " << v[0];
	v.emplace(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];
	v.emplace_back(20);
	n = v.size();
	cout << "\nThe last element is: " << v[n - 1];
	v.clear();
	cout << "\nVector size after erase(): " << v.size();
}
