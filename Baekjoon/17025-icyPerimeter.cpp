#include <iostream>

using namespace std;

int N;
char grid[1005][1005];
bool visited[1005][1005];
int currentArea, currentPerimeter;

void dfs(int r, int c) {
	if ((r < 0 || r >= N || c < 0 || c >= N) || grid[r][c] == '.') {
		currentPerimeter++;
        
		return;
	}
    
	if (visited[r][c]) return;
    
    visited[r][c] = true;
    currentArea++;

    dfs(r, c + 1);
    dfs(r, c - 1);
    dfs(r - 1, c);
    dfs(r + 1, c);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) cin >> grid[i][j];
	}
    
    int area = 0, perimeter = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (grid[i][j] == '#' && !visited[i][j]) {
				dfs(i, j);
                
				if (area == currentArea) perimeter = min(perimeter, currentPerimeter);
				else if (currentArea > area) {
					area = currentArea;
					perimeter = currentPerimeter;
				}
                
				currentArea = 0, currentPerimeter = 0;
			}
		}
	}
    
	cout << area << ' ' << perimeter << '\n';
    
	return 0;
}
