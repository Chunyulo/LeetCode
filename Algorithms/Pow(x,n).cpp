class Solution {
    //Here O(n) will TLE, and attention n may negative
public:
    double pow(double x, int n) {
        double ret=1.0,t=x;
        int num=n>0?n:-n;
        while(num){
            if(num&1) ret*=t;
            t *=t;
            num = num/2;
            //why num = num>>1 is TLE
        }
        if(n<0) ret = 1.0/ret;
        return ret;
    }
};