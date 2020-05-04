//STL - Set of vector practicing program1 on 04/05/2020.
//Program to demonstrate use of set for vectors
#include <bits/stdc++.h>
using namespace std;
set<vector<int> > sv;
// Print elements of Vector
void print(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
    {
		cout << v[i] << " ";
	}
	cout << endl;
	return;
}
int main()
{
	// Initializing some vectors
	vector<int> v1{ 1, 2, 3, 4 };
	vector<int> v2{ 5, 10, 15, 20 };
	vector<int> v3{ 3, 6, 9, 12, 15, 18, 21 };
	vector<int> v4{ 4, 8, 12 };
	vector<int> v5{ 5, 10, 15, 20 };
	// Inserting vectors into set
	sv.insert(v1);
	sv.insert(v2);
	sv.insert(v3);
	sv.insert(v4);
	sv.insert(v5);
	// printing all the unique vectors in set
	cout << "Set of Vectors: \n";
	for (auto itr = sv.begin(); itr != sv.end(); itr++)
    {
		print(*itr);
	}
	return 0;
}
