#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (10 * a > 5 * b) cout << "FIRST\n";
	    else if (10 * a == 5 * b) cout << "ANY\n";
	    else cout << "SECOND\n";
	}
	
	return 0;
}