//STL - SET program3 practiced on 31/03/2020
//Program to know lower and upper bound elements of some element.
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
	//Creating empty set s1
	set <int, greater <int> > s1;
	
	//Inserting elements to set s1
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);
	s1.insert(50);
    	s1.insert(10);

	set <int, greater <int> > :: iterator itr;
	cout << "\nThe set s1 is : ";
	for (itr = s1.begin(); itr != s1.end(); ++itr)
	{
		cout << '\t' << *itr;  //Printing the s1 elements
	}
	cout << endl;
	
	cout << "s1.lower_bound(50) : "
		<< *s1.lower_bound(50) << endl; //Tracing the lower bound element of 50.
	cout << "s1.upper_bound(50) : "
		<< *s1.upper_bound(50) << endl; //Tracing the upper bound element of 50.
	return 0;
}
