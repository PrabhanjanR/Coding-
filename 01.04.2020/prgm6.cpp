//STL - multiset program 1 practiced on 01/04/2020
//Program to initialize and print elements using multiset.
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    multiset <int, greater <int> > ms; //Creating empty multiset as ms
    //Inserting elements to multiset ms.
    ms.insert(20);
    ms.insert(60);
    ms.insert(50);
    ms.insert(10);
    ms.insert(40);
    ms.insert(30);
    ms.insert(40);

    multiset <int, int > :: iterator itr;
    cout << "\nThe multiset ms in decreasing order is ";
    for (itr = ms.begin(); itr != ms.end(); ++itr)
    {
        cout << '\t' << *itr;   //Printing multiset ms elements as inserted
    }
    cout << endl;
    
    multiset <int> ms1(ms.begin(), ms.end());
    cout << "\nThe multiset in increasing order is : ";
    for (itr = ms1.begin(); itr != ms1.end(); ++itr)
    {
        cout << '\t' << *itr;  //Printing multiset ms elements in increasing order.
    }
    cout << endl;
}
