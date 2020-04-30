//STL - Vector of vector practicing program1 on 30/04/2020.
//Program to demonstrate insertion into a vector of vectors.
#include <iostream>
#include <vector>
using namespace std;
//Defining the rows and columns of vector of vectors
#define ROW 4
#define COL 5
int main()
{
	//Initializing the vector of vectors
	vector<vector<int> > v1;
	//Elements to insert in column
	int n = 5;
	//Inserting elements into vector
	for (int i = 0; i < ROW; i++)
	{
		//Vector to store column elements
		vector<int> v2;
		for (int j = 0; j < COL; j++)
		 {
			v2.push_back(n);
			n += 5;
		}
		//Pushing back above 1D vector to create the 2D vector
		v1.push_back(v2);
	}
	//Displaying the 2D vector
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < v1[i].size(); j++)
			cout << v1[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	return 0;
}
