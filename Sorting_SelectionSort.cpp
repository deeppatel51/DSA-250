#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min], arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
};
int main() 
{
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    insertionSort(arr, n);
    return 0;
}
