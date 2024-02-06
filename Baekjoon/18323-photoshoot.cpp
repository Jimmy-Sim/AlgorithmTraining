#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
	cin >> N;
	
    int cows[1005];
	for (int i = 1; i < N; i++) cin >> cows[i];

    int cnt = 1, ans[1000];
	ans[0] = cnt;

	while (true) {
		for (int i = 1; i < N; i++) ans[i] = cows[i] - ans[i - 1];

		bool flag = false;
		for (int i = 0; i < N; i++) {
			if (ans[i] <= 0 || ans[i] > N) {
				flag = true;
				break;
			}
		}

		if (unique(begin(ans), begin(ans) + N) != begin(ans) + N || flag) {
			fill_n(begin(ans), N, 0);
			cnt++;
			ans[0] = cnt;
		}
        else {
			for (int i = 0; i < N; i++) {
				if (i != N - 1) cout << ans[i] << ' ';
                else cout << ans[i] << '\n';
			}
			break;
		}
	}
}
