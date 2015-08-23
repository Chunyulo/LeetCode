class Solution {
public:
    int addDigits(int num) {
        if  (num < 10) return num;
        else {
            int t = num, ans = 0;
            while(t) {
                ans += t % 10;
                t /= 10;
             }
             return addDigits(ans);
        }
    }
};