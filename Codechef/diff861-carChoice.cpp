#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    double a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (c / a < d / b) cout << -1 << '\n';
	    else if (c / a == d / b) cout << 0 << '\n';
	    else cout << 1 << '\n';
	}
	
	return 0;
}