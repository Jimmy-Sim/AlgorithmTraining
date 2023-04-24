#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        // 1 ... 9 --> 1, 3, 5, 7, 9 --> 5
        // 1 ... 8 --> 1, 3, 5, 7 --> 4
        // 1 ... 10 --> 1, 3, 5, 7, 9 --> 5
        // 2 ... 9 --> 3, 5, 7, 9 --> 4
        // 2 ... 8 --> 3, 5, 7 --> 3
        // 2 ... 10 --> 3, 5, 7, 9 --> 4

        if (low % 2 == 1) {
            return (high - low) / 2 + 1;
        }
        else {
            if (high % 2 == 1) return (high - low) / 2 + 1;
            return (high - low) / 2;
        }
    }
};