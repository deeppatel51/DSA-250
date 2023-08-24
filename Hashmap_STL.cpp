#include<bits/stdc++.h> 
using namespace std;

int main()
{
    unordered_map<int, int> m;
    m.insert(make_pair(2,2));
    m.insert(make_pair(1,1));
    m.insert(make_pair(3,3));
    m.insert(make_pair(-1,-1));
    // for(auto i: m)
    // {
    //     cout << i.second << endl;
    // }

    unordered_map<int, int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout << it->second << endl;
        it++;
    }
    return 0;
}
