class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    
        int n1=s1.length(), n2=s2.length();
        if(n1>n2) return false;
        unordered_map<char, int> m1, m2;
        for(int i=0; i<n1; i++){
            m1[s1[i]]++;
        }
        for(int i=0; i<n2; i++)
        {
            for(int j = i; j<i + n1 && j<n2; j++)
            {
                m2[s2[j]]++;
            }
            if(m1==m2) return true;
            else
            {
                m2.clear();
            }
        }
        return false;
    }
};
