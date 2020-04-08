//STL - Pair practicing program2 on 08/04/2020.
//Program of pairing of two data types.
#include <iostream>
#include <utility>
using namespace std;
int main()
{
	pair <int, char> p1 ; //pairing one integer and one character.
	p1.first = 100;
	p1.second = 'G';
	cout << p1.first << " " ;
	cout << p1.second << endl ; //Printing the pair.
	return 0;
}
