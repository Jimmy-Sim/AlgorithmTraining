#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> instructions[105];
    int inventory[105] = {};
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        instructions[a].push_back({b, c});
        inventory[b]++;
    }
    
    int cnt[105] = {};
    cnt[N] = 1;
    
    vector<int> ans;
    queue<int> q;
    q.push(N);
    
    while (!q.empty()) {
        int idx = q.front();
        q.pop();
        
        if (instructions[idx].empty()) ans.push_back(idx);
        for (auto pair : instructions[idx]) {
            int x = pair.first, y = pair.second;
            cnt[x] += cnt[idx] * y;
            if (--inventory[x] == 0) q.push(x);
        }
    }
    
    sort(ans.begin(), ans.end());
    
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ' << cnt[ans[i]] << '\n';
    
    return 0;
}
