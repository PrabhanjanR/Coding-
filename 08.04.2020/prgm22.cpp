//STL - Pair practicing program5 on 08/04/2020.
//Program for swapping the pairs p1 and p2.
#include <iostream>
#include<utility>
using namespace std;
int main()
{
	pair<char, int>p1 = make_pair('P', 69);
	pair<char, int>p2 = make_pair('K', 70);
	cout << "Before swapping\n" ;
	cout << "Contents of p1 = " << p1.first << " " << p1.second ;
	cout << "\nContents of p2 = " << p2.first << " " << p2.second ;
	swap(p1,p2);
	cout << "\nAfter swapping ";
	cout << "\nContents of p1 = " << p1.first << " " << p1.second ;
	cout << "\nContents of p2 = " << p2.first << " " << p2.second ;
	return 0;
}
