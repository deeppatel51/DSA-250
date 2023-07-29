class Solution {
public:
    int helper(int n){
        if(n==1) return 0;
        else{
            for(int i=1;i<n;i++){
                if(n%i==0)
                    if(helper(n-i)==0) return 1;
            }
            return 0;
        }
    }
    bool divisorGame(int n) {
        return helper(n);
    }
};
