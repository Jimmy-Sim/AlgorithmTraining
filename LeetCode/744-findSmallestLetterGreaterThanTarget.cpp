class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        int left = 0, right = letters.size() - 1;
        while (left <= right) {
            int mid = (right - left) / 2 + left;

            if (letters[mid] > target) {
                ans = letters[mid];
                right = mid - 1;
            }
            else left = mid + 1;
        }

        return ans;
    }
};
