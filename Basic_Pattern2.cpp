#include<iostream>
using namespace std;

void printPattern(int n)
{
    int row = 1;
    while(row <= n)
    {
        int j = 1;
        while(j<=n-row)
        {
            cout << j;
            j++;
        }
        int star = row-1;
        while(star)
        {
            cout << "**";
            star--;
        }
        j=n-row;
        while(j)
        {
            cout << j;
            j--;
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
