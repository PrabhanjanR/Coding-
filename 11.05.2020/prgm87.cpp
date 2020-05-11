//STL - Array using stack practicing program2 on 11/05/2020.
//Program to sort an array using stack
#include <bits/stdc++.h>
using namespace std;
stack<int> Sortstack(stack<int> s)
{
	stack<int> temp;
	while (!s.empty())
	{
		int tmp = s.top();
		s.pop();
		while (!temp.empty() && temp.top() < tmp)
		{
			s.push(temp.top());
			temp.pop();
		}
		temp.push(tmp);
	}
	return temp;
}
void sorting(int arr[], int n)
{
	stack<int> s1;
	for (int i=0; i<n; i++)
	s1.push(arr[i]);
	stack<int> temp1 = Sortstack(s1);
	for (int i=0; i<n; i++)
	{
		arr[i] = temp1.top();
		temp1.pop();
	}
}
int main()
{
	int arr[] = {10, 40, 30, 20};
	int n = sizeof(arr)/sizeof(arr[0]);
	sorting(arr, n);
	for (int i=0; i<n; i++)
	cout << arr[i] << " ";
	cout << endl;
	return 0;
}
