#include <iostream>

using namespace std;

int N;
bool visited[205], connected[205][205];

void init() {
    for (int i = 0; i < N; i++) visited[i] = false;
}

int dfs(int cur) {
	visited[cur] = true;

    int cnt = 1;
	for (int i = 0; i < N; i++) {
		if (!visited[i] && connected[cur][i]) {
			visited[i] = true;
			cnt += dfs(i);
		}
	}
    
	return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	cin >> N;
    
	int x[205], y[205], power[205];
	for (int i = 0; i < N; i++) cin >> x[i] >> y[i] >> power[i];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int distance = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
			connected[i][j] = distance <= (power[i] * power[i]);
		}
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		init();
        
		ans = max(ans, dfs(i));
	}

	cout << ans << '\n';
    
    return 0;
}
