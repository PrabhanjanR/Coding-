//STL - Array of vectors practicing program3 on 06/05/2020.
//Program to find sum, max and min element of Vector using STL
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = { 5, 9, 7, 15, 20, 18 };
	cout << "\nsum of vector: "
		<< accumulate(v.begin(), v.end(), 0);
	cout << "\nMaximum element in vector: "
		<< *max_element(v.begin(), v.end());
	cout << "\nMinimum element in vector: "
		<< *min_element(v.begin(), v.end());
    cout << endl;
	return 0;
}
