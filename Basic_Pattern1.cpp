#include<iostream>
using namespace std;

void printPattern(int n)
{
    int row = 1;
    while(row <= n)
    {
        int space = n - row;
        while(space)
        {
            cout << "*";
            space--;
        }
        int j=1;
        while(j<=row)
        {
            cout << j;
            j++;
        }
        j=1;
        while(j<=row-1)
        {
            cout << j;
            j++;
        }
        space = n - row;
        while(space)
        {
            cout << "*";
            space--;
        }
        cout << endl;
        row++;
    }
};

int main()
{
    int n=4;
    printPattern(n);
    return 0;
}
