// Brute forcing:
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1000005;

int N, K;
int haybales[MAX];
int ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N >> K;
    
    for (int i = 0; i < K; i++) {
        int start, end;
        cin >> start >> end;

        for (int j = start - 1; j < end; j++) haybales[j]++;
    }
    
    sort(&haybales[0], &haybales[N]);

    ans = haybales[N / 2];

    cout << ans << '\n';

    return 0;
}