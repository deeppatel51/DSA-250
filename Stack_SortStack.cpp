#include<bits/stdc++.h> 
using namespace std;
void print(stack<int> &st)
{
    stack<int> temp = st;
    while(!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }
}
void insertSorted(stack<int> &st, int temp)
{
    if((!st.empty() && st.top()<=temp) || st.empty())
    {
        st.push(temp);
        return;
    }

    int num = st.top();
    st.pop();
    insertSorted(st, temp);
    st.push(num);
}
void sortStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int temp = st.top();
    st.pop();

    sortStack(st);

    insertSorted(st, temp);
}
int main()
{
    stack<int> st;
    st.push(7);
    st.push(8);
    st.push(3);
    st.push(2);
    st.push(11);
    int size = st.size();
    print(st);
    sortStack(st);
    cout << endl;
    print(st);
    return -1;
}
