//STL - Deque practicing program1 on 08/04/2020.
//Program for pushing and poping of Deque.
#include <iostream>
#include <deque>
using namespace std;
void print(deque <int> dq1)
{
	deque <int> :: iterator it;
	for (it = dq1.begin(); it != dq1.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}
int main()
{
	deque <int> dq;
	//pushing elements into deque container.
	dq.push_back(10);
	dq.push_front(20);
	dq.push_back(30);
	dq.push_front(15);
	cout << "The deque dq is : ";
	print(dq);
	cout << "dq.size() : " << dq.size();
	cout << "\ndq.at(2) : " << dq.at(2);
	cout << "\ndq.front() : " << dq.front();
	cout << "\ndq.back() : " << dq.back();
	cout << "\ndq.pop_front() : ";
	dq.pop_front();
	print(dq);
	cout << "dq.pop_back() : ";
	dq.pop_back();
	print(dq);
	return 0;
}
