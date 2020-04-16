//STL - Stack practicing program1 on 16/04/2020.
//Program to demonstrate working of STL stack
#include <bits/stdc++.h>
using namespace std;
void showstack(stack <int> s)
{
	while (!s.empty())
	{
		cout << '\t' << s.top();
		s.pop();
	}
	cout << '\n';
}
int main ()
{
	stack <int> st;
	st.push(10);
	st.push(30);
	st.push(20);
	st.push(5);
	st.push(1);
	cout << "The stack is : ";
	showstack(st);
	cout << "stack size() : " << st.size();
	cout << "\nstack top() : " << st.top();
	cout << "\nstack pop() : ";
	st.pop();
	showstack(st);
	return 0;
}
