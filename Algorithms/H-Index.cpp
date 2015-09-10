//O(n^2) brute force to try test --> 836 ms
class Solution {
public:
    int hIndex(vector<int>& citations) {
        if (citations.size() == 0) return 0;
        int st = 1;
        while(1) {
            int cnt = 0;
            for (int i = 0; i < citations.size(); i++) {
                if (citations[i] >= st) cnt++;
            }
            if( cnt == st ) return st;
            else if( cnt < st ) return st - 1;
            else st++;
        }
    }
};

//O(n*log(n)) sort --> 12ms
class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size() == 0 ) return 0;
        sort(citations.begin(), citations.end());
        int left = 0, right = citations.size() - 1, mid;
        while(left <= right) {
            mid = (left + right) / 2;
            if (citations[mid] > (citations.size() - mid)) {
                right = mid - 1;
            } else if (citations[mid] < (citations.size() - mid)) {
                left = mid + 1;
            } else return citations.size() - mid;
        }
        return citations.size() - left;
    }
};

//O(n) --> 8ms, if use C, time cost may less
class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int> cit(citations.size() + 1, 0);
        for(int i = 0; i < citations.size(); i++){
            if(citations[i] >= citations.size())
                cit[citations.size()]++;
            else
                cit[citations[i]]++;
        }
        
        if(cit[citations.size()] == citations.size()) return citations.size();
        for(int i = citations.size() - 1; i>=0;i--){
            cit[i] += cit[i+1];
            if(cit[i] >= i) return i;
        }
    }
};