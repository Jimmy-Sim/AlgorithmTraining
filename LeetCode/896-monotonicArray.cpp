class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int change[100005];
        for (int i = 1; i < nums.size(); i++) change[i] = nums[i] - nums[i - 1];

        int positiveChangeCount = 0, negativeChangeCount = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (change[i] > 0) positiveChangeCount++;
            else if (change[i] < 0) negativeChangeCount++;
        }

        if (!positiveChangeCount || !negativeChangeCount) return true;

        return false;
    }
};
