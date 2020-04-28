//STL - unordered set emplace practicing program2 on 28/04/2020.
//Program to illustrate the unordered_set::emplace() function
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	unordered_set<string> s;
	// Inserting elements
	s.emplace("LGSI");
    s.emplace("in");
	s.emplace("working");
    s.emplace("is");
	s.emplace("Prabhanjan");
    // displaying all elements of sampleSet
	cout << "Set contains: ";
	for (auto itr = s.begin(); itr != s.end(); itr++)
    {
		cout << *itr << " ";
	}
	cout << endl;
	return 0;
}
