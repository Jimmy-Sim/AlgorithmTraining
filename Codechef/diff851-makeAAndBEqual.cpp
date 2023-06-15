#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (a == b) cout << "YES\n";
	    else if (a < b) {
	        while (a < b) a *= 2;
	        if (a == b) cout << "YES\n";
	        else cout << "NO\n";
	    }
	    else {
	        while (a > b) b *= 2;
	        if (a == b) cout << "YES\n";
	        else cout << "NO\n";
	    }
	}
	
	return 0;
}