#include<bits/stdc++.h> 
using namespace std;

bool ispossible(int arr[], int n, int m, int mid, int& ans)
{
    int count =1;
    int paintedArea = 0;
    for(int i = 0; i<n; i++)
    {
        if(paintedArea + arr[i] <= mid)
        {
            paintedArea = paintedArea + arr[i];
        }
        else
        {
            count++;
            if(count>m || arr[i]>mid)
            {
                return false;
            }
            paintedArea = arr[i];
        } 
    if(count > m) return false;
    }
    return true;
};
int distribute(int arr[], int n, int m, int& ans)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    int s=0,e=sum;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(ispossible(arr,n,m,mid,ans))
        {
            ans=mid;
            e = mid-1;
        }
        else
        {
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
};
int main()
{
    int arr[5]={5,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m =3;
    int ans=-1;
    distribute(arr, n, m, ans);
    cout << ans;
    return 0;
}
