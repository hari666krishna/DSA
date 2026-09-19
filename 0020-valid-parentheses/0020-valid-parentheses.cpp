class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        while(true) {
            bool found = false;
            for(int i = 0; i < n-1; i++) {
                if((s[i] == '(' && s[i+1] == ')') ||
                   (s[i] == '{' && s[i+1] == '}') ||
                   (s[i] == '[' && s[i+1] == ']')) {
                    s.erase(i, 2);
                    found = true;
                    break;
                }
            }
            if(found == false)
                break;
        }
        if(s.size() == 0)
            return true;
        else
            return false;
    }
};