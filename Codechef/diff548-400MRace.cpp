#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a == min(a, min(b, c))) cout << "ALICE\n";
	    else if (b == min(a, min(b, c))) cout << "BOB\n";
	    else cout << "CHARLIE\n";
	}
	
	return 0;
}