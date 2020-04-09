//STL - unordered set practicing program3 on 09/04/2020.
//Program to find duplicate from an array using unordered set.
#include <bits/stdc++.h>
using namespace std;
//Print in arr[0..n-1] using unordered_set
void print(int a[], int n)
{
	// declaring unordered sets for checking and storing duplicates
	unordered_set<int> us;
	unordered_set<int> d;
	// looping through array elements
	for (int i = 0; i < n; i++)
	{
		// if element is not there then insert that
		if (us.find(a[i]) == us.end())
			us.insert(a[i]);
		// if element is already there then insert into duplicate set
		else
			d.insert(a[i]);
	}
	// printing the result
	cout << "Duplicate item are : ";
	unordered_set<int> :: iterator itr;
	// iterator itr loops from begin() till end()
	for (itr = d.begin(); itr != d.end(); itr++)
		cout << *itr << " ";
}
// Driver code
int main()
{
	int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
	int n = sizeof(arr) / sizeof(int);
	print(arr, n);
	return 0;
}
