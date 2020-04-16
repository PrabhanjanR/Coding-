//STL - Stack practicing program3 on 16/04/2020.
//Program to illustrate application of size() function
#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int sum = 0;
	stack<int> st;
	st.push(1);
	st.push(8);
	st.push(3);
	st.push(6);
	st.push(2);
	// Stack becomes 1, 8, 3, 6, 2
	while (st.size() > 0)
    {
		sum = sum + st.top();
		st.pop();
	}
	cout << sum << endl;
	return 0;
}
