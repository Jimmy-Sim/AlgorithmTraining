#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int cnt = 0;
	    for (int i = 0; i < n; i++) {
	        int x;
	        cin >> x;
	        
	        if (x >= 1000) cnt++;
	    }
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}