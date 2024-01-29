class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size(), left = 0;
        int maxCount = 1, currentCount = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) continue;

            while (nums[i] - nums[left] > n - 1) {
                if (left < n && nums[left + 1] == nums[left]) currentCount++;
                left++;
                currentCount--;
            }

            currentCount++;

            maxCount = max(maxCount, currentCount);
        }

        int minOps = n - maxCount;

        return minOps;
    }
};
