//STL - queue emplace practicing program1 on 23/04/2020.
//Program to illustrate implementation of emplace() function
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<int> q;
	q.emplace(10);
	q.emplace(20);
	q.emplace(30);
	q.emplace(40);
	q.emplace(50);
	q.emplace(60);
	// queue becomes 10, 20, 30, 40, 50, 60
	while (!q.empty())
    {
		cout << q.front() << ' ' ;
		q.pop();
	}
	cout << endl;
	return 0;
}
