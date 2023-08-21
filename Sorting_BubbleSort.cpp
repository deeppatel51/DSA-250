#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
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
    bubbleSort(arr, n);
    return 0;
}
