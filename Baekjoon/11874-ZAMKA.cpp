#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int L, D, X;
    cin >> L >> D >> X;

    for (int i = L; i <= D; i++) {
        int num = i, sum = 0;
        while (num > 0) {
            sum += (num % 10);
            num /= 10;
        }

        if (sum == X) {
            cout << i << '\n';
            break;
        }
    }
    for (int i = D; i >= L; i--) {
        int num = i, sum = 0;
        while (num > 0) {
            sum += (num % 10);
            num /= 10;
        }

        if (sum == X) {
            cout << i << '\n';
            break;
        }
    }
    
    return 0;
}
