#include <iostream>

using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
    cin >> N; 
	
    int numbers[205];
	for (int i = 0; i < N; i++) cin >> numbers[i];
    
	int result = 0, dp[205];
    for (int i = 0; i < 200; i++) dp[i] = 1;
    
	for (int i = 1; i < N; i++) {
		int maxCnt = 1; 
		for (int j = i - 1; j >= 0; j--) {
			if (numbers[i] > numbers[j]) maxCnt = max(maxCnt, dp[j] + 1);
		}
		dp[i] = maxCnt;
		result = max(result, dp[i]); 
	}
    
	cout << N - result << '\n'; 

    return 0;
}
