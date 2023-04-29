#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    
	    int cnt = 0;
	    while (n--) {
	        int a;
	        cin >> a;
	        
	        if ((a + k) % 7 == 0) cnt++;
	    }
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}