class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int alp[500] = {0};
        for(int i = 0; i< s.length(); i++)
            alp[s[i] - 'a'] ++;
        for(int i = 0; i< s.length(); i++){
            if(alp[t[i] - 'a'] == 0 ) {
                return false;
            }
            alp[t[i] - 'a'] --;
            
        }
        return true;
    }
};