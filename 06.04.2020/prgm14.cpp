//STL - multi-map practicing program3 on 06/04/2020.
//Program to find lower and upper bound of  multi-map.
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
    //lower bound and upper bound for multimap mm key = 4
    cout << "mm.lower_bound(4) : " << "\tKEY = ";
    cout << mm.lower_bound(4)->first << '\t';
    cout << "\tELEMENT = " << mm.lower_bound(4)->second << endl;
    cout << "mm.upper_bound(4) : " << "\tKEY = ";
    cout << mm.upper_bound(4)->first << '\t';
    cout << "\tELEMENT = " << mm.upper_bound(4)->second << endl;
    return 0;
}
