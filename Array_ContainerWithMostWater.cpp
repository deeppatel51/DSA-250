class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1;
        int width =n;
        int ans = 0, tempsum=0, tempheight=0;
        for(int i=0,j=n; i<j; )
        {
            tempheight = min(height[i], height[j]);
            tempsum = tempheight*width;
            ans = max(ans, tempsum);
            width--;
            if(height[i]<height[j])
            {
                i++;
            }
            else j--;
        }
        return ans;
    }
};
