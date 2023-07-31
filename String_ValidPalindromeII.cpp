class Solution {
public:
    bool solve(string &s, int cnt, int i, int j){
        if(i>=j) return true;
        

        if(s[i] == s[j]) return solve(s, cnt, i+1, j-1);

        if(cnt == 0){
            return (solve(s, cnt+1, i+1, j) || solve(s, cnt+1, i, j-1));
        }

        return false;
    }
    bool validPalindrome(string s) {
        return solve(s, 0, 0, s.size()-1);
    }
};
