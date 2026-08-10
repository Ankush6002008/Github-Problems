class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int> square;
        // for(int num : nums){
        //     square.push_back(num * num);
        // }
        // sort(square.begin(), square.end());

        // return square;

        int n = nums.size();

        vector<int> ans(n);

        int* left = &nums[0];
        int* right = &nums[n - 1];

        for(int i = n - 1; i >= 0; i--) {

            if(abs(*left) > abs(*right)) {
                ans[i] = (*left) * (*left);
                left++;
            }
            else {
                ans[i] = (*right) * (*right);
                right--;
            }
        }

        return ans;
    }
};