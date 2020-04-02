//STL - map practicing program 3 on 02/04/2020
//Program to know lower and upper bound of map
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    // inserting elements
    m.insert(pair<int, int>(1, 20));
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 40));
    m.insert(pair<int, int>(4, 60));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 10));
    m.insert(pair<int, int>(7, 70));
    // printing elements using iteraator
    map<int, int>::iterator itr;
    cout << "The map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    // lower bound and upper bound for map m, key = 5
    cout << "m.lower_bound(6) : "
         << "\tKEY = ";
    cout << m.lower_bound(6)->first << '\t';
    cout << "\tELEMENT = "
         << m.lower_bound(6)->second << endl;
    cout << "m.upper_bound(5) : "
         << "\tKEY = ";
    cout << m.upper_bound(6)->first << '\t';
    cout << "\tELEMENT = "
         << m.upper_bound(6)->second << endl;

    return 0;
}
