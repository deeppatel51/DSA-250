#include<iostream>
using namespace std;

int partition(int* arr, int s, int e)
{
    int pivot = arr[s];
    int count=0;
    for(int i = s+1; i <= e; i++)
    {
        if(arr[i] <= pivot) count++;
    }
    swap(arr[s], arr[s+count]);
    int i=0, j=e-1;
    while(i < count, j>count)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(arr[i] > pivot && arr[j] < pivot) 
        {
            swap(arr[i], arr[j]);
            i++; 
            j--;
        } 
    }
    return count;
}
void quickSort(int* arr, int s, int e)
{
    //basecase
    if(s>=e) return;
    //partition
    int p = partition(arr, s, e);
    //recursion
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);

}
int main()
{
    int arr[5]={7,6,5,4,3};
    int mainLen=5;
    quickSort(arr, 0, mainLen-1);

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << "   ";
    }
    return 0;
}
