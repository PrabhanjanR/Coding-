//STL - multi map practicing program1 on 06/04/2020.
//Program to print multi-map elements.
#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    multimap <int, int> mm; // Creating empty multi-map container
    // inserting elements in random order
    mm.insert(pair <int, int> (1, 20));
    mm.insert(pair <int, int> (2, 60));
    mm.insert(pair <int, int> (3, 10));
    mm.insert(pair <int, int> (4, 40));
    mm.insert(pair <int, int> (5, 30));
    mm.insert(pair <int, int> (6, 50));
    mm.insert(pair <int, int> (6, 50));
    multimap <int, int> :: iterator itr;
    cout << "\nThe multimap mm is : \n";
    cout << "\tKEY\tELEMENT\n";
    // printing multimap elements
    for (itr = mm.begin(); itr != mm.end(); ++itr)
    {
        cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }
    cout << endl;
}
