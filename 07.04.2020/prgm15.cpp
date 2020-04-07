//STL - priority queue practicing program1 on 07/04/2020.
//Program for pushing and poping of priority queue.
#include <iostream>
#include <iostream>
#include <queue>
using namespace std;
void show(priority_queue <int> g)
{
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop(); //poping the element
    }
    cout << '\n';
}
int main ()
{
    priority_queue <int> pq;
    //pushing the elements into queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);
    cout << "The priority queue pq is : ";
    show(pq);
    cout << "pq.size() : " << pq.size();
    cout << "\npq.top() : " << pq.top();
    cout << "\npq.pop() : ";
    pq.pop();
    show(pq);
    return 0;
}
