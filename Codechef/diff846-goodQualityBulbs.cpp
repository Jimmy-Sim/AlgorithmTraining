#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    
	    int sum = 0;
	    for (int i = 0; i < n - 1; i++) {
	        int num;
	        cin >> num;
	        
	        sum += num;
	    }
	    
	    if (sum < n * x) cout << n * x - sum << '\n';
	    else cout << 0 << '\n';
	}
	
	return 0;
}