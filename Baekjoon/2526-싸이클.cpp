#include <iostream>

using namespace std;

int N, M;
int overlap[1005];
int ans;

int main()
{
    cin >> N >> M;

    int num = N;

    while (1) {
        num = (num * N) % M;

        overlap[num]++;
        if (overlap[num] > 1) break;

        ans++;
        cout << num << " ";
    }

    cout << ans << "\n";

    return 0;
}