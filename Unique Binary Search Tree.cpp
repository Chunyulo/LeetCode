class Solution {
public:
    int numTrees(int n) {
        //catalan number
        //c0 = 1 and c(n+1) = sum(0->n)(c(i)*c(n-i))
        //c0 = 1 and c(n+1) = ((2(2n+1))/(n+2))*c(n)
        if(n==0) return 1;
        int i,ret=0;
        for(i=0;i<n;i++)
            ret+=numTrees(i)*numTrees(n-i-1);
        return ret;
        //return 2*(2*n-1)*numTrees(n-1)/(n+1);
    }
};