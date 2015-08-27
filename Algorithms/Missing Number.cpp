class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ret = (nums.size() + 1) * nums.size() / 2;
        for(int i = 0; i < nums.size() ; i++ ) {
            ret -= nums[i];
        }
        return ret;
    }
};