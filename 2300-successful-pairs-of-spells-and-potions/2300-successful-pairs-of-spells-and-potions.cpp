class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> pairs;
        sort(potions.begin(), potions.end());
        for (int i = 0; i < n; i++) {
            int start = 0, end = m - 1, idx = m;
            while (start <= end) {
                int mid = (start + end) / 2;
                if (1LL * spells[i] * potions[mid] >= success) {
                    idx = mid;
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            pairs.push_back(m - idx);
        }
        return pairs;
    }
};