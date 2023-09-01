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
bool knows(int m[3][3], int a, int b, int n)
{
    if(m[a][b]==1)  return true;
    else return false;
}
int find(int m[3][3], int n)
{
    stack<int> st;
    for(int i=0; i<n; i++)
    {
        st.push(i);
    }
    while(st.size()>1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        if(knows(m, a, b, n))
        {
            st.push(b);
        }
        else st.push(a);
    }

    int candidate = st.top();
    bool rowcheck = false;
    int count =0;
    for(int i=0; i<n; i++)
    {
        if(m[candidate][i]==0) count++;
    }
    if(count==n) rowcheck = true;

    bool colcheck = false;
    count =0;
    for(int i=0; i<n; i++)
    {
        if(m[i][candidate]==1) count++;
    }
    if(count==n-1) colcheck = true;  
    if(rowcheck == true && colcheck == true) return candidate;    
}
int main()
{
    int n =3;
    int m[3][3]={{0,1,0}, {0,0,0}, {0,1,0}};
    int ans = find(m, n); 
    cout << ans << endl << endl;
    return -1;
}
