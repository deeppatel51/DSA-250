class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= haystack.size();
        int m= needle.size();
        if(n==1)
        {
            if(haystack==needle) return 0;
            else return -1;
        }
        bool flag=true;
        for(int i=0; i<n-m+1;i++)
        {
            for(int j=0; j<m; j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    flag = false;
                }
            }
            if(flag==true) return i;
            flag=true;
        }
        return -1;
    }
};
