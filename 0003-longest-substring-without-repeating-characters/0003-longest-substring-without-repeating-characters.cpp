class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, mx = 0;
        int ssize = s.size();
        map<char,int> freq;
        for(int i=0; i<ssize; i++){
            freq[s[i]]++;
            while(freq[s[i]] > 1){
                freq[s[start]]--;
                start++;
            }
            int len = i-start+1;
            mx = max(mx,len);
        }
        return mx;
    }
};