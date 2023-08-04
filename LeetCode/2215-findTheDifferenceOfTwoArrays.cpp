class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1, set2;
        for (int i = 0; i < nums1.size(); i++) set1.insert(nums1[i]);
        for (int i = 0; i < nums2.size(); i++) set2.insert(nums2[i]);

        vector<int> distinct1, distinct2;
        for (int num : set1) {
            if (!set2.count(num)) distinct1.push_back(num);
        }
        for (int num : set2) {
            if (!set1.count(num)) distinct2.push_back(num);
        }

        return {distinct1, distinct2};
    }
};
