//STL - Queue using stacks practicing program3 on 08/05/2020.
//Program to implement Queue using one stack and recursive call stack.
#include <bits/stdc++.h>
using namespace std;
struct Queue
{
	stack<int> s;
	void enq(int x)
	{
		s.push(x);
	}
	int deq()
	{
		if (s.empty())
        {
			cout << "Q is empty";
			exit(0);
		}
		int x = s.top();
		s.pop();
		if (s.empty())
			return x;
		int item = deq();
		s.push(x);
		return item;
	}
};
int main()
{
	Queue q;
	q.enq(1);
	q.enq(3);
	q.enq(5);
	cout << q.deq() << '\n';
	cout << q.deq() << '\n';
	cout << q.deq() << '\n';
	return 0;
}
