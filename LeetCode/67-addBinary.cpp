#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a = "1010", b = "1011";
    int aSize = a.size(), bSize = b.size();

    stack<int> aBits, bBits;
    for (int i = 0; i < aSize; i++) aBits.push(a[i] - 48);
    for (int i = 0; i < bSize; i++) bBits.push(b[i] - 48);

    stack<int> sum;
    for (int i = 0; i < min(aSize, bSize); i++) {
        sum.push(aBits.top() + bBits.top());
        aBits.pop(), bBits.pop();
    }
    int remainingSize = max(aSize, bSize) - min(aSize, bSize);
    if (aSize - bSize == remainingSize) {
        for (int i = 0; i < aSize; i++) {
            sum.push(aBits.top());
            aBits.pop();
        }
    }
    else if (bSize - aSize == remainingSize) {
        for (int i = 0; i < bSize; i++) {
            sum.push(bBits.top());
            bBits.pop();
        }
    }

    int sumSize = sum.size();
    int newBits[10000], idx = 0;
    while (sum.size()) {
        newBits[idx] = sum.top();
        sum.pop();
        idx++;
    }
    for (int i = 0; i < sumSize; i++) {
        newBits[i + 1] += newBits[i] / 2;
        newBits[i] %= 2;
    }

    for (int i = 0; i <= sumSize; i++) cout << newBits[i] << ' ';
    cout << '\n';

    return 0;
}