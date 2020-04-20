//STL - priority queue emplace practicing program2 on 20/04/2020.
//Program to illustrate implementation of emplace() function
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	priority_queue<char> pq;
	pq.emplace('A');
	pq.emplace('b');
	pq.emplace('C');
	pq.emplace('d');
	pq.emplace('E');
	pq.emplace('f');
	cout << "priority queue = ";
	while (!pq.empty())
    {
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}
