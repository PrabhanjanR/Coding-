//STL - Array of vectors practicing program1 on 06/05/2020.
//Program to sort Vector using sort() in STL
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = { 1, 3, 6, 2, 4, 5 };
	sort(v.begin(), v.end());
	for (int i; i < v.size(); i++)
		cout << v[i] << " ";
	return 0;
}
