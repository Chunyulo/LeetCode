class Solution {
public:
    int findMin(vector<int>& nums) { 
        int left = 0, right = nums.size() - 1, mid;
        while(left < right) {
            if(nums[left] < nums[right]) return nums[left];
            mid = (left + right) / 2;
            if(mid == left) return nums[right];
            else if(nums[mid] > nums[left]) left = mid;
            else right = mid;
        }
        return nums[right];
    }
};