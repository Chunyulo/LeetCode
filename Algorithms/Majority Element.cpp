class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int curNum;
        for (int i = 0; i < nums.size(); i++){
            if (count == 0) {
                curNum = nums[i];
                count = 1;
            } else {
               if(curNum == nums[i]) count++; 
               else count--;
            }
        }
        return curNum;
    }
};