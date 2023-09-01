class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n = obstacles.size(), length = 0;
        vector<int> result(n), increasingSubseq(n);
        for (int i = 0; i < n; i++) {
            int left = 0, right = length;
            while (left < right) {
                int mid = (left + right) / 2;
                if (increasingSubseq[mid] <= obstacles[i]) left = mid + 1;
                else right = mid;
            }
            result[i] = left + 1;
            if (length == left) length++;
            increasingSubseq[left] = obstacles[i];
        }

        return result;
    }
};
