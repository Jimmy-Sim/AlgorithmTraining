#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (max(a, b) - min(a, b) <= c) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}