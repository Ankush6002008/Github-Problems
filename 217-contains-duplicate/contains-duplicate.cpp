class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        for(int num : nums){
            if(set.count(num)){
                return true;
            }
            set.insert(num);
        }
        return false;
    }

};

//         unordered_map<int, int> mp;

//         int n = nums.size();

//         for(int i =0; i<n ; i++){
//             if(mp.count(nums[i])){
//                 return true;
//             }
            
//             mp[nums[i]] = i;
//         }
//         return false;
//     }
// };

