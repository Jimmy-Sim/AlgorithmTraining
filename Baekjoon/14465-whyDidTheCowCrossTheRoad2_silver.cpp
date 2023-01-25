#include <iostream>

using namespace std;

const int MAX = 100005;

int N, K, B;
int crossWalks[MAX], prefSum[MAX];
int ans;

int main()
{
    cin >> N >> K >> B;
    for (int i = 1; i <= N; i++) crossWalks[i] = 1;
    for (int i = 0; i < B; i++) {
        int brokenID;
        cin >> brokenID;

        crossWalks[brokenID] = 0;
    }

    for (int i = 2; i <= N; i++) {
        prefSum[i] = prefSum[i - 1] + crossWalks[i];
    }

    int maxID = 0;

    for (int i = 1; i <= N; i++) maxID = prefSum[i] > maxID ? prefSum[i] : maxID;

    ans = K - maxID;

    cout << ans << '\n';

    return 0;
}