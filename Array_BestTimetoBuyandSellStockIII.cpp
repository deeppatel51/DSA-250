class Solution {
public:
    int c(int buy,int m,vector<int>&p,int i,vector<vector<vector<int>>>&dp){
        if(i>=p.size() || m<=0){
            return 0;
        }
        if(dp[i][buy][m]!=-1)return dp[i][buy][m];
        int ans=c(buy,m,p,i+1,dp);
        if(buy){
            ans = max (ans , -p[i] + c(1-buy,m,p,i+1,dp));
        }
        else{
            ans = max(ans, p[i] + c(1-buy,m-1,p,i+1,dp));
        }
        return dp[i][buy][m]=ans;
    }
    int maxProfit(vector<int>& p) {
        vector<vector<vector<int>>>dp(p.size(),vector<vector<int>>(2,vector<int>(3,-1)));
     return c(1,2,p,0,dp);   
    }
};
