class Solution {
public:
    int countPrimes(int n) {
        vector<bool> flag(n+1, 1);
        int count=0;
        flag[0]=flag[1]=0;
        for(int i=2; i<n; i++)
        {
            if(flag[i]) 
            {
                count++;
            }
                for(int j=i*2; j<n; j=j+i)
                {
                    flag[j]=0;
                }
        }
        return count;
    }
};
