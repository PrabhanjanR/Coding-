//STL - Stack practicing program4 on 16/04/2020.
//Program to illustrate implementation of emplace() function
#include <iostream>
#include <stack>
using namespace std;
int main()
{
stack<int> st;
st.emplace(10);
st.emplace(20);
st.emplace(30);
st.emplace(40);
st.emplace(50);
st.emplace(60);
// printing the stack
cout << "Stack = ";
while (!st.empty())
{
	cout << st.top() << " ";
	st.pop();
}
cout << endl;
return 0;
}
