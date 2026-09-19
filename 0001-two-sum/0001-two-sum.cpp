class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        map<int, int>mp;
        for(int i=0;i<n; i++){
            int y = target - arr[i];
            if (mp.find(y) != mp.end()){
                return {mp[y],i};
            }

            mp[arr[i]]=i;
        }

        return {};
    }
};