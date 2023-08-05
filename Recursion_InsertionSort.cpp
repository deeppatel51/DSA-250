#include<iostream>
using namespace std;

void solve(int arr[], int n)
{
    if(n==0 || n==1) 
    {
        return ;
    }
    for(int i=0; i<n;i++)
    {
        if(arr[0]>arr[i]) swap(arr[0],arr[i]);
    }
    solve(arr+1, n-1);

}
int main()
{
    int arr[5]={1,10,3,44,35};
    
    solve(arr, 5);

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << "   ";
    }
}
