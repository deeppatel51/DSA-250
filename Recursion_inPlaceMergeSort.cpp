#include<iostream>
using namespace std;

void merge2Arrays(int* arr, int s, int e)
{
    int mid = s +(e-s)/2;
    int s2 = mid+1;

    if(arr[mid]<=arr[mid+1]) return;

    while(s<=mid && s2<=e)
    {
        if(arr[s]<=arr[s2]) s++;
        else
        {
            int temp1 = arr[s2];
            int temp2 = s2;
            while(temp2>s)
            {
                arr[temp2]=arr[temp2-1];         
                temp2--;
            }
            arr[temp2]=temp1;
        }
        s++;
        s2++;
        mid++;
    }
}
void mergeSort(int* arr, int s, int e)
{
    //basecase
    if(s>=e) return;

    int mid = s +(e-s)/2;

    //recursion
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge2Arrays(arr, s, e);
}
int main()
{
    int arr[11]={7,6,5,4,3,4,6,9,12,56,43};
    int mainLen=11;
    mergeSort(arr, 0, mainLen-1);

    for(int i=0; i<11; i++)
    {
        cout << arr[i] << "   ";
    }
    return 0;
}
