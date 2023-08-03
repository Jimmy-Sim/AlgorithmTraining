class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) nums[i] += nums[i - 1];

        for (int i = 0; i < nums.size(); i++) {
            int left, right;
            if (i == 0) left = 0;
            else left = nums[i - 1];
            right = nums[nums.size() - 1] - nums[i];

            if (left == right) return i;
        }

        return -1;
    }
};
