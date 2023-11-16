#include <iostream>

using namespace std;

int N, ans;
int arr[100001];
bool vis[100001], finished[100001];

void dfs(int cur) {
	vis[cur] = true;
	int next = arr[cur];

	if (!vis[next]) dfs(next);
	else if (!finished[next]) {
		for (int i = next; i != cur; i = arr[i]) ans++;
		ans++;
	}
	finished[cur] = true;
    
	return;
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	
    int M;
	cin >> M;

	while (M--) {
		ans = 0;
		cin >> N;
		for (int i = 1; i <= N; i++) {
			cin >> arr[i];
			vis[i] = false;
			finished[i] = false;
		}
		for (int i = 1; i <= N; i++) {
			if (!vis[i]) dfs(i);
		}

		cout << N - ans << '\n';
	}

	return 0;
}
