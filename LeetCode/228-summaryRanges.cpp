class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty()) return {};

        vector<string> ranges;
        int start = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1]) ranges.push_back(to_string(start));
                else ranges.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                start = nums[i];
            }
        }

        if (start == nums.back()) ranges.push_back(to_string(start));
        else ranges.push_back(to_string(start) + "->" + to_string(nums.back())); 

        return ranges;
    }
};
