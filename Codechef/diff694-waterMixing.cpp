#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (a < b) {
	        if (b - a <= c) cout << "YES\n";
	        else cout << "NO\n";
	    }
	    else {
	        if (a - b <= d) cout << "YES\n";
	        else cout << "NO\n";
	    }
	}
	
	return 0;
}