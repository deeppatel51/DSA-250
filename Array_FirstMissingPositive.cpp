class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        sort(v.begin(),v.end());
        set<int> s;
        for(auto it: v) s.insert(it);
        vector<int> ans;
        for(auto it: s) ans.push_back(it);
        int k=1, temp=0;
        for(int i=0; i<ans.size(); i++)
        {
            temp =i;
            if(ans[i]>0) break;
        }
        if(ans[temp]!=1) return 1;
        for(int i=temp; i<ans.size(); i++)
        {

            if(ans[i]==k)
            {
                k++;
            }
            else break;
        }
        return k;
    }
};
