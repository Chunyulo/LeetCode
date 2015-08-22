class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        vector<int> ans(nums.size() + 1, 0);
        ans[1] = nums[0];
        for(int i = 1; i < nums.size(); i++)
            ans[i + 1] = max(nums[i] + ans[i - 1], ans [i]);
        return ans[nums.size()];
    }
    
    int max( int a, int b) {
        return a > b ? a : b;
    }
};