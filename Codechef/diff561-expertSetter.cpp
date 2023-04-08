#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    double a, b;
	    cin >> a >> b;
	    
	    if (b / a >= 0.5) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}