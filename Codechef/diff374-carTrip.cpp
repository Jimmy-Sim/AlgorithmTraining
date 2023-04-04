#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n - 300 > 0) cout << 3000 + 10 * (n - 300) << '\n';
	    else cout << 3000 << '\n';
	}
	
	return 0;
}