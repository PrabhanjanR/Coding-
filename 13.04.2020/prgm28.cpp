//STL - unordered map practicing program2 on 13/04/2020.
//Program to demonstrate functionality of unordered map.
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
	// Declaring unordered map
	unordered_map<string, double> um;
	// inserting values by using [] operator
	um["Prabhanjan"] = 1.414;
	um["Saravana"] = 1.0;
	um["Manohar"] = 2.302;
	um["Sitharthan"] = 1.732;
	um["Sachin"] = 3.14;
	// inserting value by insert function
	um.insert(make_pair("LG", 2.718));
	string key = "Prabhanjan";
	// If key not found in map iterator to end is returned
	if (um.find(key) == um.end())
		cout << key << " not found\n\n";
	else
		cout << key << " Found" << "\n\n";
	key = "LGSI";
	if (um.find(key) == um.end())
		cout << key << " not found\n";
	else
		cout << "Found " << key << endl;
	// iterating over all value of umap
	unordered_map<string, double>:: iterator itr;
	cout << "\nAll Elements : \n";
	for (itr = um.begin(); itr != um.end(); itr++)
	{
		cout << itr->first << " " << itr->second << endl;
	}
}
