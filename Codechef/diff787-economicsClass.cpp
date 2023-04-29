#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int supplies[105], demands[105];
	    for (int i = 0; i < n; i++) cin >> supplies[i];
	    for (int i = 0; i < n; i++) cin >> demands[i];
	    
	    int cnt = 0;
	    for (int i = 0; i < n; i++) {
	        if (supplies[i] == demands[i]) cnt++;
	    }
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}