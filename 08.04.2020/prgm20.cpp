//STL - Pair practicing program3 on 08/04/2020.
//Program to assign value using make_pair utility.
#include <iostream>
#include <utility>
using namespace std;
int main()
{
	pair <int, char> p1 ; //Creating an empty pair p1.
	pair <string, double> p2 ("GeeksForGeeks", 1.23) ; //Creating and assigning the pair p2.
	pair <string, double> p3 ; //Creating an empty pair p2
	p1.first = 100;
	p1.second = 'G' ;
	p3 = make_pair ("GeeksForGeeks is Best",4.56); //Assigning the value to the pair p3 using make_pair utility.
	cout << "P1) " << p1.first << " " ;
	cout << p1.second << endl ;
	cout << "P2) " << p2.first << " " ;
	cout << p2.second << endl ;
	cout << "P3) " << p3.first << " " ;
	cout << p3.second << endl ;
	return 0;
}
