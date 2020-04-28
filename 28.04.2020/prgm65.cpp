//STL - unordered set emplace practicing program1 on 28/04/2020.
//Program to illustrate the unordered_set::emplace() function
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	unordered_set<int> s;
	// Inserting elements
	s.emplace(50);
	s.emplace(10);
	s.emplace(15);
	s.emplace(20);
	s.emplace(25);
	// displaying all elements of sampleSet
	cout << "Set contains: ";
	for (auto itr = s.begin(); itr != s.end(); itr++)
    {
		cout << *itr << " ";
	}
	cout << endl;
    return 0;
}
