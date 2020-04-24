//STL - multi set emplace practicing program3 on 24/04/2020.
//Program to illustrate implementation of emplace() function - string example.
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
	multiset<string> ms;
	ms.emplace("working");
	ms.emplace("in");
	ms.emplace("company");
	ms.emplace("lgsi");
	ms.emplace("is");
	ms.emplace("prabhanjan");
	// printing the multi set
	for (auto itr = ms.begin();itr != ms.end();++itr)
		cout<< *itr << ' ' ;
    cout << endl;
	return 0;
}
