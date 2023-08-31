#include<bits/stdc++.h> 
using namespace std;

class makeStack 
{
    public:
        int *arr;
        int top;
        int size;   

    makeStack(int size)
    {
        this ->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int a)
    {
        if(size-top > 1)
        {
            top++;
            arr[top]=a;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }   
    void pop()
    {
        if(top>=0)
        {
            arr[top]=-1;
            top--;
        }
        else{
            cout << "stack underflow" << endl;
        }
    } 
    int peak()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else{
            cout << "stack underflow" << endl;
            return 0;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else return false;
    }
};

int main()
{
    makeStack st(5);
    st.push(25);
    st.push(26);
    st.peak();
    st.isEmpty();
    st.pop();
    st.peak();
    st.isEmpty();
    return 0;
}
