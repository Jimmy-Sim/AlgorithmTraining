class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch(nums, target, true), right = binarySearch(nums, target, false);
        
        if (left <= right) return {left, right};

        else return {-1, -1};
    }

private:
    int binarySearch(vector<int>& nums, int target, bool findLeft) {
        int low = 0, high = nums.size() - 1, index = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                index = mid;
                if (findLeft) high = mid - 1;
                else low = mid + 1;
            }
            else if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        
        return index;
    }
};
