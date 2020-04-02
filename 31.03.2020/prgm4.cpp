//STL - SET programs2 practiced on 31/03/2020
//Program to remove elements from set.

#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{	
	//Creating empty set s
	set <int, greater <int> > s;

	//Insering elements to set s.
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
		cout << '\t' << *itr;  //Printing set s elements
	}
	cout << endl;
	
	set <int> s2(s.begin(), s.end());
	cout << "\nThe set s2 after assign from s is : ";
	for (itr = s2.begin(); itr != s2.end(); ++itr)
	{
		cout << '\t' << *itr;
	}
	cout << endl;
	
	cout << "\ns2 after removal of elements less than 30 : ";
	s2.erase(s2.begin(), s2.find(30)); //Removing all the elements less than 30.
	for (itr = s2.begin(); itr != s2.end(); ++itr)
	{
		cout << '\t' << *itr;
	}
    	
	int num;
	num = s2.erase (50); //Erasing 50 from the set s
	cout << "\ns2.erase(50) : ";
	cout << num << " removed \t" ;
	for (itr = s2.begin(); itr != s2.end(); ++itr)
	{
		cout << '\t' << *itr;
	}
	cout << endl;
	return 1;
}
