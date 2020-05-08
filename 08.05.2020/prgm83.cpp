//STL - Queue using stacks practicing program1 on 08/05/2020.
//Program to implement Queue using two stacks with costly enQueue()
#include <bits/stdc++.h>
using namespace std;
struct Queue
{
	stack<int> s1, s2;
	void enq(int x)
	{
		while (!s1.empty())
        {
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while (!s2.empty())
		{
            s1.push(s2.top());
			s2.pop();
		}
	}
	int deq()
	{
		if (s1.empty())
        {
			cout << "Q is Empty";
			exit(0);
		}
		int x = s1.top();
		s1.pop();
		return x;
	}
};
int main()
{
	Queue q;
	q.enq(10);
	q.enq(20);
	q.enq(30);
	cout << q.deq() << '\n';
	cout << q.deq() << '\n';
	cout << q.deq() << '\n';
	return 0;
}
