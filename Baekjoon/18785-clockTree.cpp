#include <iostream>
#include <vector>

using namespace std;

int settings[100000];
vector<int> adj[100000];
int sum0, sum1, nodes0, nodes1;

void dfs(int curr, int color, int par) {
	if (color == 0) {
		nodes0++;
		sum0 += settings[curr];
	}
    else {
		nodes1++;
		sum1 += settings[curr];
	}

    for (int j : adj[curr]) {
		if (j != par) dfs(j, 1 - color, curr);
	}
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N;
	cin >> N;

	for (int i = 0; i < N; i++) cin >> settings[i];

	for (int i = 1; i < N; i++) {
		int a, b;
		cin >> a >> b;
		
        a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	dfs(0, 0, -1);

	if ((sum0 % 12) == (sum1 % 12)) cout << N << '\n';
	else if ((sum0 + 1) % 12 == (sum1 % 12)) cout << nodes1 << '\n';
	else if ((sum0 % 12) == ((sum1 + 1) % 12)) cout << nodes0 << '\n';
	else cout << "0\n";
    
    return 0;
}
