#include <iostream>

using namespace std;

int N;
int oddCount, evenCount;
int cow;
int ans;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cow;

        if (cow % 2 == 0) evenCount++;
        else oddCount++;
    }

    while (oddCount > evenCount) {
        oddCount -= 2;
        evenCount++;
    }

    if (evenCount > oddCount + 1) evenCount = oddCount + 1;

    ans = evenCount + oddCount;

    cout << ans << '\n';

    return 0;
}