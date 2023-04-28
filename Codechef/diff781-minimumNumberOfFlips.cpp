#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int posCnt = 0, negCnt = 0;
	    for (int i = 0; i < n; i++) {
	        int a;
	        cin >> a;
	        
	        if (a > 0) posCnt++;
	        else negCnt++;
	    }
	    
	    if (n % 2 != 0) cout << -1 << '\n';
	    else cout << abs(posCnt - negCnt) / 2 << '\n';
	}
	
	return 0;
}