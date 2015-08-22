class Solution {
    //attention when there exist space after last word
public:
    int lengthOfLastWord(const char *s) {
        int ret=0,i,len=strlen(s);
        
        i=len-1;
        while(i>=0 && s[i]==' ') i--;
        while(i>=0 && s[i]!=' ') i--,ret++;
        return ret;
    }
};