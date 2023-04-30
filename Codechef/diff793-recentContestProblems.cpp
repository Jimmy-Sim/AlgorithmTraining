#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int cnt1 = 0, cnt2 = 0;
	    while (n--) {
	        string code;
	        cin >> code;
	        
	        if (code == "START38") cnt1++;
	        else cnt2++;
	    }
	    
	    cout << cnt1 << ' ' << cnt2 << '\n';
	}
	
	return 0;
}