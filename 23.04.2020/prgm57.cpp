//STL - queue emplace practicing program4 on 23/04/2020.
//Program to illustrate application Of emplace() function
#include <queue>
#include <iostream>
using namespace std;
int main()
{
	//variable declaration
	int s = 0;
	//queue declaration
	queue<int> q{};
	//adding elements to the queue
	q.emplace(70);
	q.emplace(65);
	q.emplace(44);
	q.emplace(29);
	q.emplace(77);
	q.emplace(65);
	// queue becomes 70, 65, 43, 22, 77, 58
	// calculating the sum
	while (!q.empty())
    {
		s = s + q.front();
		q.pop();
	}
	cout << s << endl;
}
