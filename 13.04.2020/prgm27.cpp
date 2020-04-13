//STL - unordered map practicing program1 on 13/04/2020.
//Program to demonstrate functionality of unordered map
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
	// Declaring unordered map
	unordered_map<string, int> um;
	// inserting values by using [] operator
	um["LGSI"] = 10;
	um["Prabhanjan"] = 20;
	um["Company"] = 30;
	// Traversing an unordered map
	for (auto x : um)
	cout << x.first << " " << x.second << endl;
}
