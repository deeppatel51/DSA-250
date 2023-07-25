class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
    vector<int>ans;
    unordered_map<int,int>mapp;
    for(int i=0;i<n;i++)
    {
        if(mapp.count(target-nums[i])){
            ans.push_back(mapp[target-nums[i]]);
            ans.push_back(i);
        }
        mapp[nums[i]]=i;
    }
    return ans;
  }
};
