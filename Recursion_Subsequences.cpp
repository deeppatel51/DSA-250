#include<bits/stdc++.h> 
using namespace std;

void solve(string s, string temp, vector<string> &ans, int index)
{
    if(index==s.length())
    {
        ans.push_back(temp);
        return;
    }
    solve(s, temp, ans, index+1);
    char element = s[index];
    temp += element;
    solve(s, temp, ans, index+1);
}
int main()
{
    string s = "abc";
    vector<string> ans;
    string temp;
    int index=0;
    solve(s, temp, ans, index);
    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
