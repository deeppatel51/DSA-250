class Solution {
public:
    int reverse(int x) {
        long y = long(x);
        long ans = 0;
        while(y)
        {
            ans = ans*10 + y%10;
            y=y/10;
        }
        if(ans>INT_MAX || ans<INT_MIN) return 0;
        return int(ans);
    }
};
