//STL - map practicing program 2 on 02/04/2020
//Program tp erase elements using erase keyword.
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
    // remove all elements up to
    // element with key=2 in m
    cout << "\nm after removal of"
            " elements less than key=2 : \n";
    cout << "\tKEY\tELEMENT\n";
    m.erase(m.begin(), m.find(2));
    for (itr = m.begin(); itr != m.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    // removing the elements with key = 4
    int num;
    num = m.erase(4);
    cout << "\nm.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = m.begin(); itr != m.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
}
