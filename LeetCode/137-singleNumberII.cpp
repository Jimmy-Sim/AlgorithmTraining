class Solution {
public:
    int singleNumber(vector<int>& nums) {
        multiset<int> cnt;
        for (int i = 0; i < nums.size(); i++) cnt.insert(nums[i]);

        for (int num : cnt) {
            if (cnt.count(num) == 1) return num;
        }

        return 0;
    }
};
