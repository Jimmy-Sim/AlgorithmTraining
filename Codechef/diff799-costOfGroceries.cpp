#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    
	    int frsh[105], cost[105];
	    for (int i = 0; i < n; i++) cin >> frsh[i];
	    for (int i = 0; i < n; i++) cin >> cost[i];
	    
	    int total = 0;
	    for (int i = 0; i < n; i++) {
	        if (frsh[i] >= k) total += cost[i];
	    }
	    
	    cout << total << '\n';
	}
	
	return 0;
}