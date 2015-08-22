class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        //return find(num,0,num.size()-1);
        int left = 0,right = num.size()-1;
        while(left<right){
            if(num[left]>num[left+1]) return left;
            else left++;
            if(num[right] > num[right - 1]) return right;
            else right--;
        }
        return left;
    }
    
    int find(const vector<int> &num,int left,int right){
        if(right == left ) return left;
        if(num[left] > num[left+1]){
            return left;
        }else{
            return find(num,left+1,right);
        }
        if(num[right]>num[right-1]){
            return right;
        }else
            return find(num,left,right-1);
    }
};