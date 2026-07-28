class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        int n = nums.size();

        int i = 0;
        for(auto num: nums){
            int complement = target - num;
            if(mp.count(complement)){
                return {i, mp[complement]};
            }
            mp[num] = i;
            i++;
        }
        return {};
    }
};
