//STL - multi set emplace practicing program2 on 24/04/2020.
//Program to illustrate implementation of emplace() function -integer example.
#include <iostream>
#include <set>
using namespace std;
int main()
{
	multiset<int> ms{};
	int sum = 0;
	ms.emplace(10);
	ms.emplace(20);
	ms.emplace(30);
	ms.emplace(40);
	ms.emplace(50);
	ms.emplace(60);
    //iterator declaration
    set<int>::iterator itr;
    //printing the multiset
    cout << "Multi set is: " ;
	for (itr = ms.begin(); itr != ms.end(); ++itr)
        cout<< *itr << ' ';
    cout << endl;
    //finding sum of elements
    while (!ms.empty())
    {
        itr = ms.begin();
        sum = sum + *itr;
        ms.erase(itr);
    }
    cout << "Sum = " << sum << endl;
	return 0;
}
