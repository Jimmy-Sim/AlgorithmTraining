class Solution {
public:
    int reverse(int num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        return rev;
    }

    int countNicePairs(vector<int>& nums) {
        const int mod = 1000000007;

        int len = nums.size();
        for (int i = 0; i < len; i++) nums[i] = nums[i] - reverse(nums[i]);

        sort(nums.begin(), nums.end());

        long res = 0;
        for (int i = 0; i < len - 1; ++i) {
            long cnt = 1;
            while (i < len - 1 && nums[i] == nums[i + 1]) {
                cnt++;
                i++;
            }
            res = (res % mod + (cnt * (cnt - 1)) / 2) % mod;
        }

        return static_cast<int>(res % mod);
    }
};
