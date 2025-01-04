#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	
	int T;
	cin >> T;

	while (T--) {
        int N, K;
		cin >> N >> K;

        int x[300005], l[300005], r[300005], num[300005], er[300005];

		for (int i = 1; i <= N; i++) cin >> x[i];
		sort (x + 1, x + N + 1);

		for (int i = 1; i <= K; i++) er[i] = 0;
		vector <array <int, 3>> v;

		for (int i = 1; i <= K; i++) {
			cin >> l[i] >> r[i] >> num[i];
			num[i] = upper_bound(x + 1, x + N + 1, r[i]) - lower_bound(x + 1, x + N + 1, l[i]) - num[i];
			v.push_back({l[i], num[i], -i}), v.push_back({r[i], num[i], i});
		}

		for (int i = 1; i <= N; i++) v.push_back({x[i], -1, 0});

		sort (v.begin(), v.end(), [] (array <int, 3> x, array <int, 3> y) {
			if (x[0] != y[0]) return x[0] < y[0];

			return x[2] < y[2];
		});

		priority_queue <pair <int, int>, vector <pair <int, int>>, greater <pair <int, int>>> pq;
		int cnt = 0;

		for (auto x : v) {
			while (pq.size()) {
				int id = pq.top().second;
				if (er[id]) pq.pop();
				else break;
			}

			if (x[2] < 0) pq.push({x[1] + cnt, -x[2]});
			else if (x[2] > 0) er[x[2]] = 1;
			else {
				cnt++;
				if (pq.size() && pq.top().first < cnt) cnt--;
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}
