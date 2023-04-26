#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int mx = 0;
	    while (n--) {
	        int a;
	        cin >> a;
	        
	        mx = a > mx ? a : mx;
	    }
	    
	    cout << mx << '\n';
	}
	
	return 0;
}