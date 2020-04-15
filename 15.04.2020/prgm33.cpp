//STL - vector practicing program1 on 15/04/2020.
//Program to illustrate the iterators in vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);
	cout << "Output of begin and end: ";
	for (auto j = v.begin(); j != v.end(); ++j)
		cout << *j << " ";
	cout << "\nOutput of cbegin and cend: ";
	for (auto k = v.cbegin(); k != v.cend(); ++k)
		cout << *k << " ";
	cout << "\nOutput of rbegin and rend: ";
	for (auto itr = v.rbegin(); itr != v.rend(); ++itr)
		cout << *itr << " ";
	cout << "\nOutput of crbegin and crend : ";
	for (auto itr1 = v.crbegin(); itr1 != v.crend(); ++itr1)
		cout << *itr1 << " ";
	return 0;
}
