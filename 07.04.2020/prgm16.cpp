//STL - priority queue practicing program2 on 07/04/2020.
//Program for pushing and poping of priority queue.
#include <iostream>
#include <queue>
using namespace std;
void print(priority_queue < int, vector<int>, greater<int> > g)
{
	while (!g.empty())
	{
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}
int main ()
{
	priority_queue < int, vector<int>, greater<int> > pq;
	pq.push(10);
	pq.push(30);
	pq.push(20);
	pq.push(5);
	pq.push(1);
	cout << "The priority queue gquiz is : ";
	print(pq);
	cout << "pq.size() : " << pq.size();
	cout << "\npq.top() : " << pq.top();
	cout << "\npq.pop() : ";
	pq.pop();
	print(pq);
	return 0;
}
