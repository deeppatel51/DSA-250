#include<bits/stdc++.h>
using namespace std;
void printit(vector<int> ans)
{
    for(int i=0; i<ans.size(); i++)
    {
        cout<< ans[i] << endl; 
    }
}
void solve(int* arr, int n, int k)
{
    deque<int> dq;
    vector<int> ans;
    
    for(int i=0; i<k; i++)
    {
        if(arr[i]<0)
        {
            dq.push_back(i);
        }
    }
    if(dq.size()>0)
    {
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    for(int i=k; i<n; i++)
    {
        if(!dq.empty() &&  i-dq.front() >= k)
        {
            dq.pop_front();
        }

        if(arr[i]<0)
        {
            dq.push_back(i);
        }

        if(dq.size()>0)
        {
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    printit(ans);
}
int main()
{
    int arr[5]={-1,-2,-3,-4,-5};
    int k =3;
    int n =5;
    solve(arr, n , k);
    return -1;
}
