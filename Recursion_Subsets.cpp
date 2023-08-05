class Solution {
public:
    void solve(vector<int> nums, vector<int> temp, vector<vector<int>>& ans, int index)
    {
        if(index>=nums.size())
        {
            ans.push_back(temp);
            return;
        }
        solve(nums, temp, ans, index+1);
        int element = nums[index];
        temp.push_back(element);
        solve(nums, temp, ans, index+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> temp;
        int index =0;
        solve(nums, temp, ans, index);
        return ans;
    }
};
