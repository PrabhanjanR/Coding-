//STL - Stack practicing program2 on 16/04/2020.
//Program to illustrate implementation of empty() function
#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<int> st;
	st.push(1);
	if (st.empty()) // Stack becomes 1
    {
		cout << "True\n";
	}
	else {
		cout << "False\n";
	}
	return 0;
}
