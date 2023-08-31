#include<bits/stdc++.h> 
using namespace std;
void print(stack<int> &st, int &size)
{
    stack<int> temp = st;
    while(!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }
}
void deleteMid(stack<int> &st, int &size, int count)
{
    if(count==size/2)
    {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    deleteMid(st, size, count+1);
    st.push(temp);
}
int main()
{
    stack<int> st;
    
    int count=0;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int size = st.size();
    print(st, size);
    deleteMid(st, size, count);
    cout << endl;
    print(st, size);
    return -1;
}
