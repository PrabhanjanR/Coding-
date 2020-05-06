//STL - Array of vectors practicing program2 on 06/05/2020.
//Program to reverse Vector using reverse() in STL.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = { 10, 50, 60, 30, 20, 50 };
	reverse(v.begin(), v.end());
	for (int i; i < v.size(); i++)
		cout << v[i] << " ";
		cout << endl;
	return 0;
}
