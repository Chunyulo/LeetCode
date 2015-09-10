class Solution {
public:
    int numSquares(int n) {
        int sqt = sqrt(n);
        for(int i = 0; i <= sqt ; i++) {
            for(int j = i; j <= sqt ; j++){
                int k = sqrt(n - i*i - j*j);
                if (n == (k*k + j*j + i*i)){
                    return !!k + !!j + !!i;
                }
            }
        }
        return 4;
    }
};

//https://leetcode.com/discuss/56982/o-sqrt-n-in-ruby-and-c