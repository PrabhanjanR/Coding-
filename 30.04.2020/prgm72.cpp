//STL - Vector of vector practicing program2 on 29/04/2020.
//Program to demonstrate removal from a vector of vectors
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//Initializing 2D vector "v" with sample values
	vector<vector<int> > v{ { 1, 2, 3 },
							{ 4, 5, 6 },
							{ 7, 8, 9 } };
	//Removing elements from the last row of the vector
	v[2].pop_back();
	v[1].pop_back();
	//Displaying the 2D vector
	for (int i = 0; i < 3; i++) {
		for (auto itr = v[i].begin(); itr != v[i].end(); itr++)
			cout << *itr << " ";
		cout << endl;
	}
	return 0;
}
