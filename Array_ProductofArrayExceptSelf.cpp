class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x=1;
        int n = nums.size();
        vector<int> product(n,1);
        for(int i=0; i<n;i++)
        {
            product[i]=x;
            x*=nums[i];
        }
        x=1;
        for(int i=n-1; i>=0;i--)
        {
            product[i]*=x;
            x*=nums[i];
        }
        return product;
    }
};
