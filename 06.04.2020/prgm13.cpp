//STL - multi-map practicing program2 on 06/04/2020.
//Program to remove elements in  multi-map.
#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    multimap <int, int> mm; //empty multi-map container
    //inserting elements in random order
    mm.insert(pair <int, int> (1, 20));
    mm.insert(pair <int, int> (2, 10));
    mm.insert(pair <int, int> (3, 60));
    mm.insert(pair <int, int> (4, 30));
    mm.insert(pair <int, int> (5, 50));
    mm.insert(pair <int, int> (6, 50));
    mm.insert(pair <int, int> (6, 40));
    //printing multimap mm
    multimap <int, int> :: iterator itr;
    cout << "\nThe multimap mm is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mm.begin(); itr != mm.end(); ++itr)
    {
        cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }
    cout << endl;
    //remove all elements up to element with value 30 in mm
    cout << "\nmm after removal of elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    mm.erase(mm.begin(), mm.find(3));
    for (itr = mm.begin(); itr != mm.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    //remove all elements with key = 5
    int num;
    num = mm.erase(5);
    cout << "\nmm.erase(5) : ";
    cout << num << " removed \n" ;
    cout << "\tKEY\tELEMENT\n";
    for (itr = mm.begin(); itr != mm.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
}
