#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int M, N, K;
bool map[105][105], visited[105][105];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
vector<int> areas;

int dfs(int r, int c){
	visited[r][c] = true;
	int area = 1;
	
	for (int i = 0; i < 4; i++){
		int nr = r + dy[i], nc = c + dx[i];
        if ((nr >= 0 && nr < M && nc >= 0 && nc < N) && !visited[nr][nc] && !map[nr][nc]) area += dfs(nr, nc);
	}
	
	return area;
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	
	cin >> M >> N >> K;
	
	for (int i = 0; i < K; i++) {
        int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		for (int j = x1; j < x2; j++){
			for (int k = y1; k < y2; k++) map[k][j] = true;
		}
	}
    
	int idx = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] != 1 && visited[i][j] == 0) {
                areas.push_back(dfs(i, j));
                idx++;
            }
		}
	}
	
	sort(areas.begin(), areas.end());
    
	cout << areas.size() << '\n';
	for (int i = 0; i < areas.size(); i++) cout << areas[i] << ' ';
    cout << '\n';
	
    return 0;
}
