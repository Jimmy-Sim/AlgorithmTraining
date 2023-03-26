#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int prices[100005] = {};
    for (int i = 1; i <= n; i++) cin >> prices[i];

    sort(&prices[0], &prices[n]);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int budget;
        cin >> budget;

        int left = 1, right = n, mid;
        while (left < right) {
            mid = left + (right - left) / 2;

            if (budget == prices[mid]) break;
            else if (budget > prices[mid]) left = mid + 1;
            else right = mid - 1;
        }
        if (budget < prices[1]) mid = 0;
        else if (budget >= prices[n]) mid = n;

        cout << mid << '\n';
    }

    return 0;
}