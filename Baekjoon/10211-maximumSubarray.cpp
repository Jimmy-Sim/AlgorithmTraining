#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
        
        int arr[1005], sum[1005];
		for (int i = 0; i < N; i++) sum[i] = -987654321;
		for (int i = 0; i < N; i++) cin >> arr[i];
		
		int mx = -987654321;
		for (int i = 0; i < N; i++) {
			int temp = 0;
			for (int j = i; j < N; j++) {
				temp += arr[j];
				if (sum[i] < temp) sum[i] = temp;
			}

			if (mx < sum[i]) mx = sum[i];
		}
        
		cout << mx << '\n';
	}
    
    return 0;
}
