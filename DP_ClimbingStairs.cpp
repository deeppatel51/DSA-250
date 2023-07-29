class Solution {
public:
    int solve(int n, unordered_map<int, int>& memo)
    {
        if (n == 0 || n == 1) {
            return 1;
        }
        if(memo.find(n)==memo.end())
        {
            memo[n]=solve(n-1, memo) + solve(n-2, memo);
        }
        return memo[n];
    }
    int climbStairs(int n) {
        if(n==1) return 1;
        unordered_map<int, int> memo;
        solve(n , memo);
        return memo[n];
    }
};

//bottom up approach

/* 
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
*/
