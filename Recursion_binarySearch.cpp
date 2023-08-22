#include<bits/stdc++.h> 
using namespace std;

bool binarySearch(int *arr, int n, int s, int e, int target)
{
    if(s>e) return false;
    int mid = s+(e-s)/2;
    if(arr[mid]==target) return true;
    if(arr[mid]>target)
    {
        return binarySearch(arr, n, s, mid-1, target);
    }
    else
    {
        return binarySearch(arr, n, mid+1, e, target);
    }
};
int main()
{
    int arr[5]={10,20,30,40,50};
    int s = 0, e = 50;
    int target = 30;
    if(binarySearch(arr, 5, 0, 4, 40)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}
