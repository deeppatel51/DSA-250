#include<iostream>
using namespace std;

void merge2Arrays(int* arr, int s, int e)
{
    int mid = s +(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int* first = new int[len1];
    int* second = new int[len2];
    int k=s;

    for(int i=0; i<len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid+1;
    for(int i=0; i<len2; i++)
    {
        second[i] = arr[k++];
    }

    int index1 = 0;
    int index2 = 0;
    int mainIndex = s;
    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainIndex++]=first[index1++];
        }
        else
        {
            arr[mainIndex++]=second[index2++];
        }
    }
    while(index1<len1) arr[mainIndex++]=first[index1++];
    while(index2<len2) arr[mainIndex++]=second[index2++];

    delete[] first;
    delete[] second;
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
    int arr[5]={7,6,5,4,3};
    int mainLen=5;
    mergeSort(arr, 0, mainLen-1);

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << "   ";
    }
    return 0;
}
