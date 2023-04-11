#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (c % a == 0 && c % b == 0) cout << "ANY\n";
	    else if (c % a == 0) cout << "CHICKEN\n";
	    else if (c % b == 0) cout << "DUCK\n";
	    else cout << "NONE\n";
	}
	
	return 0;
}