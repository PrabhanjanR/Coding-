//STL - queue emplace practicing program3 on 23/04/2020.
//Program to illustrate implementation of string queue using emplace() function
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<string> q;
	q.emplace("This");
	q.emplace("is");
	q.emplace("Prabhanjan");
	q.emplace("working in");
	q.emplace("LGSI.");
	while (!q.empty())
    {
		cout<< q.front() << ' ' ;
		q.pop();
	}
	cout << endl;
	return 0;
}
