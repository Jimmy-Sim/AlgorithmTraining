#include <bits/stdc++.h>

using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // 1 2 3 4 5 6 7 8 9 10 
            // check 5 --> bad --> 1, 2, 3, 4
        
        int ans;
        int left = 1, right = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                ans = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }

        return ans;
    }
};