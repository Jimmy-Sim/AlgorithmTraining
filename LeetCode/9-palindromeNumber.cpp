#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long digits = 10;
        while (x / digits > 0) {
            digits *= 10;
        }
        digits /= 10;

        long long newNum = 0, div = 1;
        for (int i = digits; i >= 1; i /= 10) {
            newNum += i * ((x % (div * 10)) / div);
            div *= 10;
        }

        if (x == newNum) return true;
        else return false;
    }
};