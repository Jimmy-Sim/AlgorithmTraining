#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (100 - a < 200 - 2 * b) cout << "FIRST\n";
	    else if (100 - a == 200 - 2 * b) cout << "BOTH\n";
	    else cout << "SECOND\n";
	}
	
	return 0;
}