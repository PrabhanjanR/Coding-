//STL - SET programs practiced on 31/03/2020
//Program to insert and print elements using set
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{	
	//Creating set s container which is empty.
	set <int, greater <int> > s;

	//Insering elements to s.
	s.insert(30);
	s.insert(50);
	s.insert(10);
	s.insert(40);
	s.insert(70);
	s.insert(60);
	s.insert(20);

	set <int, greater <int> > :: iterator itr;

	cout << "\nThe set s is : ";
	for (itr = s.begin(); itr != s.end(); ++itr)
	{
		cout << '\t' << *itr;  //Printing set s elements using iterator
	}
	cout << endl;
}
