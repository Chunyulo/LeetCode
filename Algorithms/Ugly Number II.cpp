class Solution {
public:
    int nthUglyNumber(int n) {
        if(n < 1 ) return 0;
        vector<int> vec(n);
        int s2=0,s3=0, s5=0;
        vec[0] = 1;
        for(int i = 1;i<n;i++){
            vec[i] = min3(vec[s2] * 2, vec[s3]*3, vec[s5]*5);
            if(vec[s2]*2<=vec[i]) s2++;
            if(vec[s3]*3<=vec[i]) s3++;
            if(vec[s5]*5<=vec[i]) s5++;
        }
        return vec[n-1];
    }
    
    int min3(int a, int b, int c){
        if(a<b) return a<c?a:c;
        return b<c?b:c;
    }
};