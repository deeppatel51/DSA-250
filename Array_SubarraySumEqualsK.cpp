class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        m[0]=1;
        int presum=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            presum = presum + nums[i];
            int remove = presum - k;
            count = count + m[remove];
            m[presum] = m[presum] + 1;
        }
        
        return count;
    }
};
