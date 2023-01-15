#include <iostream>
#include <vector>

using namespace std;

int N, M;
int visited[1005];
vector<int> connections[1005];
int ans;

void dfs(int cur) {
    visited[cur] = 1;

    for (int i = 0; i < connections[cur].size(); i++) {
        int nxt = connections[cur][i];

        if (!visited[nxt]) dfs(nxt);
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        connections[a].push_back(b);
        connections[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        if (connections[i].size() == 0) {ans++;
            continue;
        }
        for (int j = 0; j < connections[i].size(); j++) {
            int node = connections[i][j];

            if (!visited[node]) {
                ans++;
                dfs(node);
            }
        }
    }

    cout << ans << '\n';

    return 0;
}