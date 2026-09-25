class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>freq,first,last;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;

            if(first.find(nums[i])==first.end()){
                first[nums[i]]=i;
            }
            last[nums[i]]=i;
        }
        int result=0;
        for(auto &p:freq){
            int x=p.first;
            int size=last[x] - first[x]+1;
            if(freq[x]==size){
                result++;
            }
        }
        return result;
        
    }
};