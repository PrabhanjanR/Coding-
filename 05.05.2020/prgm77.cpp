//STL - Array of vectors practicing program1 on 05/05/2020.
//Program to illustrate array of vectors
#include <iostream>
#include <vector>
using namespace std;
vector<int> v[5];
//Function for inserting elements in array of vectors
void inserting()
{
	for (int i = 0; i < 5; i++)
    {
		// Inserting elements at every row i
		for (int j = i + 1; j < 5; j++)
        {
			v[i].push_back(j);
		}
	}
}
//Function to print elements in array of vectors
void print()
{
	//Traversing of vectors v to print elements stored in it
	for (int i = 0; i < 5; i++)
    {
		cout << "Elements at index " << i << ": ";
		// Displaying element at each column
		for (auto itr = v[i].begin(); itr != v[i].end(); itr++)
        {
			//(*itr) is used to get the value at iterator is pointing
			cout << *itr << ' ';
		}
		cout << endl;
	}
}
// Function to illustrate array of vectors
void array()
{
	//Inserting elements in array of vectors
	inserting();
	//Print elements stored in array of vectors
	print();
}
int main()
{
	array();
	return 0;
}
