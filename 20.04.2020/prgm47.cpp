//STL - priority queue emplace practicing program4 on 20/04/2020.
//Program to demonstrate difference between emplace and insert
#include<bits/stdc++.h>
using namespace std;
int main()
{
	// declaring priority queue
	priority_queue<pair<char, int>> pq;
	//using emplace() to insert pair in-place
	pq.emplace('P', 35);
	//using push() to insert pair
	pq.push(make_pair('A', 45));
    //printing the priority_queue
	while (!pq.empty())
	{
		pair<char, int> p = pq.top();
		cout << p.first << " " << p.second << endl;
		pq.pop();
	}
	return 0;
}
