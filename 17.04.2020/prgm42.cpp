//STL - Deque emplace practicing program2 on 17/04/2020.
//Program to push character using emplace.
#include <deque>
#include <iostream>
using namespace std;
int main()
{
	// initialization of deque named dq
	deque<char> dq = { 'P', 'A', 'B', 'H', 'U'};
	// initialising an iterator
	deque<char>::iterator itr = dq.begin();
	++itr;

	dq.emplace(itr, 'R');

	for (itr = dq.begin(); itr != dq.end(); ++itr)
		cout << *itr;
	cout << endl;
	return 0;
}
