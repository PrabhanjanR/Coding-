//STL - Pair practicing program4 on 08/04/2020.
//Program to illustrate operators in pair.
#include <iostream>
#include<utility>
using namespace std;
int main()
{
	pair<int, int>p1 = make_pair(1, 12);
	pair<int, int>p2 = make_pair(5, 12);
	cout << "(p1 == p2)-->" << (p1 == p2) << endl;
	cout << "(p1 != p2)-->" << (p1 != p2) << endl;
	cout << "(p1 >= p2)-->" << (p1 >= p2) << endl;
	cout << "(p1 <= p2)-->" << (p1 <= p2) << endl;
	cout << "(p1 > p2)-->" << (p1 > p2) << endl;
	cout << "(p1 < p2)-->" << (p1 < p2) << endl;
	return 0;
}
