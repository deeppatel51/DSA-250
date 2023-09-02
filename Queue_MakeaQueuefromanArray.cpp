#include<bits/stdc++.h> 
using namespace std;

class makeQueue
{
    public:
        int* arr;
        int size;
        int front;
        int rear;

    makeQueue()
    {
        size = 100001;
        arr = new int[size];
        front=0;
        rear=0;
    }

    void push(int data)
    {
        if(rear==size) cout << "queue is full" << endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if(front==rear) cout  << "queue is empty" << endl;
        else{
            arr[front]= -1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
    }

    bool isempty()
    {
        if(front==rear) return true;
        else return false;
    }

    int givefront()
    {
        if(front==rear) return -1;
        else return arr[front];
    }
};

int main()
{
    makeQueue q;
    q.isempty();

    q.push(12);
    q.push(13);
    q.pop();
    q.givefront();
    cout << "success" << endl;

    return -1;
}
