//STL - priority queue emplace practicing program1 on 20/04/2020.
//Program to illustrate implementation of emplace() function
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	priority_queue<int> pq;
	pq.emplace(15);
	pq.emplace(25);
	pq.emplace(35);
	pq.emplace(45);
	pq.emplace(55);
	pq.emplace(65);
	// queue becomes 1, 2, 3, 4, 5, 6
	// printing the priority queue
	cout << "priority queue = ";
	while (!pq.empty())
    {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
}
