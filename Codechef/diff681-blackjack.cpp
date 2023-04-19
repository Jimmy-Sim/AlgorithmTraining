#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (21 - (a + b) > 10) cout << -1 << '\n';
	    else cout << 21 - (a + b) << '\n';
	}
	
	return 0;
}