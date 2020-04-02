//STL-List c++ Program practiced on 30/03/2020
//Program to pushing on poing of elements to list.

#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void showlist(list <int> g)
{
	list <int> :: iterator it;
	for(it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}
int main()
{
	list <int> list1, list2; //Creating list
	for (int i = 0; i < 5; ++i)   //Initializing elements to list1 and list2
	{
		list1.push_back(i * 3);
		list2.push_front(i * 4);
	}
	cout << "\nList 1 (list1) is : ";
	showlist(list1);  //Printing list1 elememnts
	cout << "\nList 2 (list2) is : ";
	showlist(list2);  //Printing list1 elememnts

	cout << "\nlist1.front() : " << list1.front();
	cout << "\nlist1.back() : " << list1.back();
	cout << "\nlist1.pop_front() : ";  
	list1.pop_front();
	showlist(list1); //Poping first element from the list1

	cout << "\nlist2.pop_back() : ";
	list2.pop_back();
	showlist(list2); //Poping last element from the list2

	cout << "\nlist1.reverse() : ";
	list1.reverse();
	showlist(list1); //Reversing list1 elements

	cout << "\nlist2.sort(): ";
	list2.sort();
	showlist(list2); //Sorting list2 elements
	return 0;
}
