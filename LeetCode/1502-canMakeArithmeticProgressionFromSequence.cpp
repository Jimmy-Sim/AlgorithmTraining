class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(&arr[0], &arr[arr.size()]);

        int diff;
        for (int i = 1; i < arr.size(); i++) {
            if (i == 1) diff = arr[i] - arr[i - 1];
            else if (arr[i] - arr[i - 1] != diff) return false;
        }

        return true;
    }
};
