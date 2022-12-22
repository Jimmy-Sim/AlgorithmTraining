#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int scores[1005];
int cutoff;

int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> scores[i];
    sort(&scores[0], &scores[N]);

    cutoff = scores[N - K];

    cout << cutoff << "\n";

    return 0;
}