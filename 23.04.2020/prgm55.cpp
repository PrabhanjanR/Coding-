//STL - queue emplace practicing program2 on 23/04/2020.
//Program to illustrate implementation of emplace() function
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<char> q;
	q.emplace('a');
	q.emplace('b');
	q.emplace('c');
	q.emplace('d');
	q.emplace('e');
	q.emplace('f');
	// queue becomes a, b, c, d, e, f
	while (!q.empty())
    {
		cout<< q.front() << ' ' ;
		q.pop();
	}
	cout << endl;
	return 0;
}
