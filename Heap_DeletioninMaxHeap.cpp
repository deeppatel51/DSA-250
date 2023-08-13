#include<bits/stdc++.h> 
using namespace std;

class Heap
{
    public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    };

    void insert(int value)
    {
        size++;
        int index = size;
        arr[index] = value;

        while(true)
        {
            if(arr[index]>arr[size/2])
            {
                swap(arr[index],arr[size/2]);
            }
            else return;
        }
    };

    void deletefromheap()
    {
        if(size==0) return;
        arr[1]=arr[size-1];
        size--;

        int i=1;
        while(i<size)
        {
            int left = i*2;
            int right = i*2 + 1;
            if(arr[i]<arr[left] && left<size)
            {
                swap(arr[i], arr[left]);
                i=left;
            }
            else if(arr[i]>arr[right] && right<size)
            {
               swap(arr[i], arr[right]);
               i=right;
            }
            else return;
        }
    };

    void print()
    {
        for(int i=0; i<size; i++)
        {
            cout << arr[i] << endl;
        }
    };
};

int main()
{
    Heap h;
    h.insert(20);
    h.insert(30);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(60);
    h.insert(70);
    h.print();
    cout << endl << endl;
    h.deletefromheap();
    h.print();
    return 0;
}
