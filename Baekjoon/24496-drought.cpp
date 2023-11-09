#include <iostream>

using namespace std;

void solve() {
    int N;
    cin >> N;
    
    int cows[100005];
    for (int i = 1; i <= N; i++) cin >> cows[i];
    
    long long cnt = 0;
    for (int i = 1; i < N; i++) {
        if (cows[i + 1] > cows[i]) {
            if (i + 2 > N) {
                cout << -1 << '\n';
                
                return;
            }

            long long diff = cows[i + 1] - cows[i];
            cows[i + 1] -= diff, cows[i + 2] -= diff;

            if (cows[i + 2] < 0) {
                cout << -1 << '\n';
                
                return;
            }

            cnt += 2 * diff;
        }
        else if (cows[i] > cows[i + 1]) {
            if (i % 2 == 1) {
                cout << -1 << '\n';
                
                return;
            }

            long long diff = cows[i] - cows[i + 1];
            cnt += i * diff;
        }
    }
    
    cout << cnt << '\n';
    
    return;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int T;
	cin >> T;
    
	for (int i = 0; i < T; i++) solve();
}
