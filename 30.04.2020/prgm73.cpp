//STL - Vector of vector practicing program3 on 29/04/2020.
//Program to demonstrate traversal of a 2D vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//Initializing 2D vector "v" with sample values
	vector<vector<int> > v{ { 1, 2, 3 },
                            { 4, 5, 6 },
                            { 7, 8, 9 } };
	//Displaying the 2D vector
	for (int i = 0; i < 3; i++)
    {
		for (auto itr = v[i].begin(); itr != v[i].end(); itr++)
			cout << *itr << " ";
		cout << endl;
	}
	return 0;
}
