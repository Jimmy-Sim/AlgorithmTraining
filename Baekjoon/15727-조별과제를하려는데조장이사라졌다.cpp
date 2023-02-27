#include <iostream>

using namespace std;

int L;
int ans;

int main()
{
    cin >> L;

    if (L % 5 == 0) ans = L / 5;
    else ans = L / 5 + 1;

    cout << ans << '\n';

    return 0;
}