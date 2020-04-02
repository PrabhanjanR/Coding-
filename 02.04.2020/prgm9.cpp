//STL - map practicing program 1 on 02/04/2020.
//Program to insert and Print elements using map.
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    // inserting elements
    m.insert(pair<int, int>(1, 30));
    m.insert(pair<int, int>(2, 40));
    m.insert(pair<int, int>(3, 50));
    m.insert(pair<int, int>(4, 10));
    m.insert(pair<int, int>(5, 20));
    m.insert(pair<int, int>(6, 30));
    m.insert(pair<int, int>(7, 10));
    // printing elements using iteraator
    map<int, int>::iterator itr;
    cout << "The map is : \n";
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
}
