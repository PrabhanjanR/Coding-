//STL-Forward list c++ program practiced on 30/03/2020
//Program to add and printing elements to forward list

#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    	forward_list <int> flist1;
	forward_list<int> flist2;

	flist1.assign({1, 2, 3}); //Assigning 1,2,3 to flist1.
	flist2.assign(5, 10);  //Assigning 5,10 to flist2.

	cout << "The elements of first forward list are : ";
	for (int&a : flist1)
	cout << a << " "; //Printing flist1 elements.
	cout << endl;

	cout << "The elements of second forward list are : ";
	for (int&b : flist2)
	cout << b << " "; //Printing flist2 elements.
	cout << endl;
	return 0;
}
