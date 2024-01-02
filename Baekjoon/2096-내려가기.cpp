#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
    cin >> N;
	
    int maxArr[5][5] = {}, minArr[5][5] = {};
    int K = 0, maxAns, minAns;
	for (int i = 0; i < N; i++) {		
		int a, b, c;
        cin >> a >> b >> c;
		
		maxArr[K][0] = max(maxArr[1 - K][0], maxArr[1 - K][1]) + a;
		maxArr[K][1] = max(max(maxArr[1 - K][0], maxArr[1 - K][1]), maxArr[1 - K][2]) + b;
		maxArr[K][2] = max(maxArr[1 - K][1], maxArr[1 - K][2]) + c;
		
		minArr[K][0] = min(minArr[1 - K][0], minArr[1 - K][1]) + a;
		minArr[K][1] = min(min(minArr[1 - K][0], minArr[1 - K][1]), minArr[1 - K][2]) + b;
		minArr[K][2] = min(minArr[1 - K][1], minArr[1 - K][2]) + c;
		
		K = 1 - K;
	}
	
	maxAns = max(max(maxArr[1 - K][0], maxArr[1 - K][1]), maxArr[1 - K][2]);
	minAns = min(min(minArr[1 - K][0], minArr[1 - K][1]), minArr[1 - K][2]);
	
	cout << maxAns << ' ' << minAns << '\n';
	
	return 0;
}
