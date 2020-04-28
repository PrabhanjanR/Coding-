//STL - unordered set emplace practicing program3 on 28/04/2020.
//Program to illustrate the unordered_set::emplace() function
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	unordered_set<string> s;
	int c=0;
	// Inserting elements
	s.emplace("a");
    s.emplace("s");
	s.emplace("d");
    s.emplace("a");
	s.emplace("a");
	s.emplace("d");
    s.emplace("c");
	s.emplace("s");
    // displaying all elements of sampleSet
	cout << "Set contains: ";
	for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        c++;
		cout << *itr << " ";
	}
    cout << endl;
	cout << "Count = " << c << endl;
	return 0;
}
