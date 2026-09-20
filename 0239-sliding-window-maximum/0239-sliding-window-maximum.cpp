class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>freq;
        set<int>unq;
        vector<int>ans;
        for(int i=0; i<k;i++){
            freq[nums[i]]++;
            unq.insert(nums[i]);
        }
        auto it1 = unq.rbegin();
        int val1 = *it1;
        ans.push_back(val1);

        for(int i=k; i<n; i++){
            freq[nums[i]]++;
            unq.insert(nums[i]);
            freq[nums[i-k]]--;
            // unq.erase(nums[i-k]);
            if(freq[nums[i-k]] == 0){
                unq.erase(nums[i-k]);
            }
            auto it2 = unq.rbegin();
            int val2 = *it2;
            ans.push_back(val2);
        }

        return ans;
    }
};