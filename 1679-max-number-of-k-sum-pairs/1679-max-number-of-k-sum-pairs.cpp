class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int, int> mp;
        int count = 0;

        for (int num : nums) {
            int y = k - num;

            if (mp[y] > 0) {
                count++;
                mp[y]--;
            } else {
                mp[num]++;
            }
        }

        return count;
    }
};