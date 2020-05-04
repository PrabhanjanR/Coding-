//STL - Map of vector practicing program2 on 04/05/2020.
//Program to demonstrate use of map for vectors
#include <bits/stdc++.h>
using namespace std;
map<vector<int>, int> mv;
// Print True if vector is visited or not
void check(vector<int> v)
{
	if (mv.find(v) != mv.end())
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}
int main()
{
	//Initializing some vectors
	vector<int> v1{ 1, 2, 3, 4 };
	vector<int> v2{ 5, 10, 15 };
	vector<int> v3{ 1, 3, 5, 7, 9, 11, 13 };
	//Making some vectors as visited
	mv[v1] = 1;
	mv[v2] = 1;
	mv[v3] = 1;
	//Checking if these vectors are visited or not
	vector<int> c1 = { 5, 10, 15 };
	vector<int> c2 = { 2, 4, 6, 8, 10, 12 };
	check(c1);
	check(c2);
	return 0;
}
