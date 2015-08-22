class Solution {
public:
    int trailingZeroes(int n) {
        int ret = 0, t = n;
        while(t){
            ret += (t/5);
            t /= 5;
        }
        return ret;
    }
};