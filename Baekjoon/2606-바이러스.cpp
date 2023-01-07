#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, V;
int visit[1005];
vector<int> connections[1005];

void dfs(int cur) {
    cout << cur << ' ';

    visit[cur] = 1;

    for (int i = 0; i < connections[cur].size(); i++) {
        int nxt = connections[cur][i];
        if (!visit[nxt]) dfs(nxt);
    }
}

void bfs(int cur) {

}

int main()
{
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        connections[a].push_back(b);
        connections[b].push_back(a);
    }

    for (int i = 0; i < N; i++) sort(&connections[i][0], &connections[i][connections[i].size()]);

    dfs(V);

    return 0;
}