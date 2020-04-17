//STL - Deque emplace practicing program1 on 17/04/2020.
//Program to push elements using emplace.
#include <deque>
#include <iostream>
using namespace std;
int main()
{
	// initialization of deque named d
	deque<int> d = { 20, 30, 40, 50 };
	// initializing an iterator
	deque<int>::iterator itr;

	d.emplace(d.begin(), 10);

	for (itr = d.begin(); itr != d.end(); ++itr)
		cout << *itr << " ";
	cout << endl;
	return 0;
}
