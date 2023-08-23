#include<bits/stdc++.h> 
using namespace std;
bool isSafe(int ix, int jx, int n, int v[4][4], int m[4][4])
{
    if(m[ix][jx] == 1 && v[ix][jx] == 0 && (ix>=0 && ix<n) && (jx>=0 && jx<n))
    {
        return true;
    }
    else return false;
};
void solve(int m[4][4], int v[4][4], int n, int &count, int i, int j) 
{
    if(i==n-1 && j==n-1)
    {
        count++;
        return;
    }

    v[i][j]=1;

    //down
    int ix = i+1;
    int jx = j;
    if(isSafe(ix, jx, n, v, m))
    {
        solve(m, v, n, count, ix, jx);
    }

    //left
    ix = i;
    jx = j-1;
    if(isSafe(ix, jx, n, v, m))
    {
        solve(m, v, n, count, ix, jx);
    }

    //right
    ix = i;
    jx = j+1;
    if(isSafe(ix, jx, n, v, m))
    {
        solve(m, v, n, count, ix, jx);
    }

    //up
    ix = i-1;
    jx = j;
    if(isSafe(ix, jx, n, v, m))
    {
        solve(m, v, n, count, ix, jx);
    }
    v[i][j]=0;
};
int main()
{
    int m[4][4]={{1,1,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
    int v[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int n=4;
    int count=0;
    int i=0; 
    int j=0;
    solve(m, v, n, count, i, j);
    cout << count << endl;
    return 0;
}
