#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (a < b) cout << "REPAIR\n";
	    else if (a == b) cout << "ANY\n";
	    else cout << "NEW PHONE\n";
	}
	
	return 0;
}