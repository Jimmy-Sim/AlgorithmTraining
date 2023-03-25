#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum1 = 0, sum2 = 0, sum3 = 0;
    while (n--) {
        int force1, force2, force3;
        cin >> force1 >> force2 >> force3;

        sum1 += force1, sum2 += force2, sum3 += force3;
    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}