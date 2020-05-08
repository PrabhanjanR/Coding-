//STL - Queue using stacks practicing program2 on 08/05/2020.
//Program to implement Queue using two stacks with costly deQueue()
#include <bits/stdc++.h>
using namespace std;
struct Queue
{
	stack<int> s1, s2;
	void enq(int x)
	{
		s1.push(x);
	}
	int deq()
	{
		if (s1.empty() && s2.empty())
        {
			cout << "Q is empty";
			exit(0);
		}
		if (s2.empty())
		{
			while (!s1.empty())
            {
				s2.push(s1.top());
				s1.pop();
			}
		}
		int x = s2.top();
		s2.pop();
		return x;
	}
};
int main()
{
	Queue q;
	q.enq(15);
	q.enq(25);
	q.enq(35);
	cout << q.deq() << '\n';
	cout << q.deq() << '\n';
	cout << q.deq() << '\n';
	return 0;
}
