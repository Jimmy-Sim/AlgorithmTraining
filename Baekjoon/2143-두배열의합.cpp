#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int T, N;
	cin >> T >> N;
    
    int A[1005];
	for (int i = 0; i < N; i++) cin >> A[i];
	
    int M;
    cin >> M;
    
    int B[1005];
	for (int i = 0; i < M; i++) cin >> B[i];

	vector<int> aSum, bSum;
	
	for (int i = 0; i < N; i++) {
		int sum = A[i];
		aSum.push_back(sum);
        
		for (int j = i + 1; j < N; j++) {
			sum += A[j];
			aSum.push_back(sum);
		}
	}

	for (int i = 0; i < M; i++) {
		int sum = B[i];
		bSum.push_back(sum);
        
		for (int j = i + 1; j < M; j++) {
			sum += B[j];
			bSum.push_back(sum);
		}
	}

	sort(bSum.begin(), bSum.end());
	long long ans = 0;
	for (int i = 0; i < aSum.size(); i++) {
		int x = T - aSum[i];
		int low = lower_bound(bSum.begin(), bSum.end(), x) - bSum.begin(), high = upper_bound(bSum.begin(), bSum.end(), x) - bSum.begin();
		
        ans += (high - low);
	}

	cout << ans << '\n';

	return 0;
}
