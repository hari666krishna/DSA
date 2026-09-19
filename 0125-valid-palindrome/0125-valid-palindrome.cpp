class Solution {
public:
    bool isPalindrome(string s) {
        int ssize = s.size();
        string str = "";
        for(int i=0; i<ssize; i++){
            if(isalnum(s[i])){
                str += tolower(s[i]);
            }
        }
        int start = 0;
        int end = str.size() - 1;
        while(start < end){
            if(str[start] != str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};