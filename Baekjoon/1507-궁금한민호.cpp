#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
	cin >> N;
    
    int map[25][25], ansMap[25][25];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			ansMap[i][j] = map[i][j];
		}
	}
    
    int sum = 0;
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            for (int k = 0; k < N; k++) {
                if (i != k && j != k) {
                    if (map[j][k] == map[j][i] + map[i][k]) ansMap[j][k] = 0;
                    else if (map[j][k] > map[j][i] + map[i][k]) {
                        cout << "-1\n";
                    
                        return 0;
                    }
                }
            }
        }
    }
    
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) sum += ansMap[i][j];
	}
    
	cout << sum / 2 << '\n';
    
	return 0;
}
