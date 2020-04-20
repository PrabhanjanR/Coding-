//STL - priority queue emplace practicing program3 on 20/04/2020.
//Program to illustrate implementation of emplace() function
#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
	priority_queue<string> pq1;
	pq1.emplace("is a");
	pq1.emplace("boy");
	pq1.emplace("prabhanjan");
	pq1.emplace("good");
	// printing the priority queue
	cout << "priority queue = ";
	while (!pq1.empty())
    {
		cout << pq1.top() << " ";
		pq1.pop();
	}
	return 0;
}
