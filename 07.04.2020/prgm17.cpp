//STL - Queue practicing program3 on 07/04/2020.
//Program for pushing and poping of queue.
#include <iostream>
#include <queue>
using namespace std;
void print(queue <int> gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "The queue q is : ";
    print(q);
    cout << "q.size() : " << q.size();
    cout << "\nq.front() : " << q.front();
    cout << "\nq.back() : " << q.back();
    cout << "\nq.pop() : ";
    q.pop();
    print(q);
    return 0;
}
