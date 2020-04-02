//STL - multiset program 3 practiced on 02/04/2020
//Program to know lower and upper bound of any element using multiset.
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    multiset <int, greater <int> > ms;
    //Inserting multiset elements
    ms.insert(40);
    ms.insert(30);
    ms.insert(60);
    ms.insert(20);
    ms.insert(50);
    ms.insert(50);
    ms.insert(10);

    multiset <int, int > :: iterator itr;
    cout << "The multiset ms in increasing order is : ";
    for (itr = ms.begin(); itr != ms.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;

    multiset <int> ms1(ms.begin(), ms.end());
    cout << "The multiset ms in increasing order is : ";
    for (itr = ms1.begin(); itr != ms1.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;

    cout << "ms.lower_bound(20) : "
         << *ms.lower_bound(20) << endl; //Knowing lower bound of multiset ms
    cout << "ms.upper_bound(20) : "
         << *ms.upper_bound(20) << endl; //Knowing upper bound of multiset ms
    cout << "ms1.lower_bound(20) : "
         << *ms1.lower_bound(20) << endl; //Knowing lower bound of multiset ms1
    cout << "ms1.upper_bound(20) : "
         << *ms1.upper_bound(20) << endl; //Knowing upper bound of multiset ms1
    return 0;
}
