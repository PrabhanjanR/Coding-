//STL - Queue of pairs practicing program2 on 07/05/2020.
//Program to demonstrate the working of STL queue of pairs
#include <bits/stdc++.h>
using namespace std;
void print(pair<int, int> p)
{
	int f = p.first;
	int s = p.second;
	cout << "(" << f << ", " << s << ") ";
}
void show(queue<pair<int, int> > q)
{
	while (!q.empty())
    {
		print(q.front());
		q.pop();
	}
	cout << '\n';
}
int main()
{
	queue<pair<int, int> > q;
	q.push({ 10, 20 });
	q.push({ 15, 5 });
	q.push({ 1, 5 });
	q.push({ 5, 10 });
	q.push({ 7, 9 });
	cout << "Queue of Pairs: ";
	show(q);
	cout << "\nSize of Queue of Pairs: " << q.size();
	cout << "\nFront of Queue of Pairs: ";
	print(q.front());
	cout << "\nBack of Queue of Pairs: ";
	print(q.back());
	cout << "\n\nRemoving the Front pair\n";
	q.pop();
	cout << "Current Queue of Pairs: ";
	show(q);
	return 0;
}
