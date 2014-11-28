class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> ret(digits.size());
        int c=1,i;
        
        for(i = digits.size()-1;i >=0; i--){
            ret[i] = (c+digits[i])%10;
            c =  (c+digits[i])/10;
        }
        if(c>0)
            ret.insert(ret.begin(),c);
        return ret;
    }
};