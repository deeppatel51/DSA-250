#include<bits/stdc++.h> 
using namespace std;

queue<int> reverse (queue<int>& q)
{
    stack<int> s;
    while(!q.empty())
    {
        int a = q.front();
        q.pop();
        s.push(a);
    }
    while(!s.empty())
    {
        int a = s.top();
        s.pop();
        q.push(a);
    }
    return q;
};

int main ()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    reverse(q);

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
