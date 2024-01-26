#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[100005];

int dfs(int start, int parent) {
	int ans = 0, cnt = adj[start].size();
	if (parent == -1) cnt++;

	int cows = 1, days = 0;
	while (cows < cnt) {
		days++;
		cows *= 2;
	}
	ans += days;

    for (auto next : adj[start]) {
		if (next != parent) ans += dfs(next, start) + 1;
	}
    
	return ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N;
	cin >> N;
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
        
		adj[a - 1].push_back(b - 1);
		adj[b - 1].push_back(a - 1);
	}
    
	cout << dfs(0, -1) << '\n';
    
	return 0;
}
