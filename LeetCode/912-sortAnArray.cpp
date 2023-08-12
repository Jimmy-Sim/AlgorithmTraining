class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(&nums[0], &nums[nums.size()]);

        return nums;
    }
};
