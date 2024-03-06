#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
	cin >> N;
    
    int pasture[1005][1005];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) cin >> pasture[i][j];
	}
	
    int rows = 0, columns = 0;

	for (int i = 0; i < N; i++) {
		int sum[2] = {};
		for (int j = 0; j < N; j++) sum[j % 2] += pasture[i][j];
		rows += max(sum[0], sum[1]);
	}

	for (int i = 0; i < N; i++) {
		int sum[2] = {};
		for (int j = 0; j < N; j++) sum[j % 2] += pasture[j][i];
		columns += max(sum[0], sum[1]);
	}

	cout << max(rows, columns) << '\n';
    
    return 0;
}
