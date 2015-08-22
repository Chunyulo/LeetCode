class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int cp = 0, i , j;
        
        for(i=0;i<n;){
            for(j=i+1;j<n;j++)
                if(A[i] != A[j])
                    break;
            A[cp++] = A[i];
            i = j;
        }
        n = cp;
        return n;
    }
};