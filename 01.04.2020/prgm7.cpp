//STL - Multiset program 2 practiced on 01/04/2020
//Program to erase some elements of multiset
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    multiset <int, greater <int> > ms;
    //Inserting elements to multiset ms
    ms.insert(40);
    ms.insert(30);
    ms.insert(60);
    ms.insert(20);
    ms.insert(50);
    ms.insert(50);
    ms.insert(10);

    multiset <int, int > :: iterator itr;
    cout << "\nThe multiset ms in increasing order is : ";
    for (itr = ms.begin(); itr != ms.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;

    multiset <int> ms1(ms.begin(), ms.end());
    cout << "\nThe multiset ms in increasing order is : ";
    for (itr = ms1.begin(); itr != ms1.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;

    cout << "\nms1 after removal of elements less than 30 : ";
    ms1.erase(ms1.begin(), ms1.find(30)); //Removing the elements less than 30
    for (itr = ms1.begin(); itr != ms1.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    int num;

    num = ms1.erase(50); //Erasing the element 50
    cout << "\nms1.erase(50) : ";
    cout << num << " removed \t" ;
    for (itr = ms1.begin(); itr != ms1.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;
    return 0;
}
