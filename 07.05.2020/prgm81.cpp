//STL - Priority queue of vectors practicing program1 on 07/05/2020.
//Program to demonstrate use of priority queue for vectors
#include <bits/stdc++.h>
using namespace std;
priority_queue<vector<int> > pq;
void printMax( vector<int> v )
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
	vector<int> v1{ 10, 20, 30, 40 };
	vector<int> v2{ 10, 20, 35, 40 };
	vector<int> v3{ 30, 25, 10, 50 };
	vector<int> v4{ 20, 10, 30, 40 };
	vector<int> v5{ 5, 10, 30, 40 };
	pq.push(v1);
	pq.push(v2);
	printMax(pq.top());
	pq.push(v3);
	printMax(pq.top());
	pq.push(v4);
	pq.push(v5);
	printMax(pq.top());
	return 0;
}
