#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int sunnyCnt = 0, rainyCnt = 0;
	    for (int i = 0; i < 7; i++) {
	        int n;
	        cin >> n;
	        
	        if (n == 1) sunnyCnt++;
	        else rainyCnt++;
	    }
	    
	    if (sunnyCnt > rainyCnt) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}