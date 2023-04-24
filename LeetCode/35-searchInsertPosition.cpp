#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                ans = mid;
                break;
            }

            if (left == right) {
                if (nums[left] < target) ans = left + 1;
                else if (nums[left] > target) ans = left;

                break;
            }

            
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }

        if (left > right) ans = left;

        return ans;
    }
};