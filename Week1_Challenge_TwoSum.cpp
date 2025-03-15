class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // iterate over each ellement 
        for (int i = 0; i < nums.size(); i++) {
            // for each iteration, iterate for the next element to end
            for (int j = i + 1; j < nums.size(); j++) {
                // then, check if nums[i]+nums[j] equals target, if yes print [i,j] if not continue 
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
