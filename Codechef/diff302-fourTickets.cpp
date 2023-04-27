#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (4 * n <= 1000) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}