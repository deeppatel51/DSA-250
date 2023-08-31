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
void insertAtBottom(stack<int> &st, int temp)
{
    if(st.empty())
    {
        st.push(temp);
        return;
    }

    int num = st.top();
    st.pop();
    insertAtBottom(st, temp);
    st.push(num);
}
void reverseStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, temp);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int size = st.size();
    print(st);
    reverseStack(st);
    cout << endl;
    print(st);
    return -1;
}
