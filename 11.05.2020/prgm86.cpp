//STL - Stacks in an array practicing program1 on 11/05/2020.
//Program to implement two stacks in an array.
#include<iostream>
#include<stdlib.h>
using namespace std;
class Stacks
{
	int *arr;
	int size;
	int top1, top2;
public:Stacks(int n)
    {
	size = n;
	arr = new int[n];
	top1 = -1;
	top2 = size;
    }
void push1(int x)
{
	if (top1 < top2 - 1)
	{
		top1++;
		arr[top1] = x;
	}
	else
	{
		cout << "Stack Overflow";
		exit(1);
	}
}
void push2(int x)
{
	if (top1 < top2 - 1)
	{
		top2--;
		arr[top2] = x;
	}
	else
	{
		cout << "Stack Overflow";
		exit(1);
	}
}
int pop1()
{
	if (top1 >= 0 )
	{
		int x = arr[top1];
		top1--;
		return x;
	}
	else
	{
		cout << "Stack UnderFlow";
		exit(1);
	}
}
int pop2()
{
	if (top2 < size)
	{
		int x = arr[top2];
		top2++;
		return x;
	}
	else
	{
		cout << "Stack UnderFlow";
		exit(1);
	}
}
};
int main()
{
	Stacks s(5);
	s.push1(10);
	s.push2(20);
	s.push2(30);
	s.push1(40);
	s.push2(50);
	cout << "Popped element from stack1 is " << s.pop1();
	s.push2(40);
	cout << "\nPopped element from stack2 is " << s.pop2();
	cout << endl;
	return 0;
}
