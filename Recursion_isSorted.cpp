#include<bits/stdc++.h> 
using namespace std;

bool isSorted(int *arr, int n)
{
    if(n==0 || n==1) return true;
    if(arr[0]>arr[1]) return false;
    else return isSorted(arr+1, n-1);
}
int main()
{
    int arr[5]={10,20,1000,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr, n)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}
