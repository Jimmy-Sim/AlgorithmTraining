#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (0.9 * a < b) cout << "ONLINE\n";
	    else if (0.9 * a == b) cout << "EITHER\n";
	    else cout << "DINING\n";
	}
	
	return 0;
}