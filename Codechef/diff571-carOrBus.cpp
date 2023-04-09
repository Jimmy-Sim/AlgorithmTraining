#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (a < b) cout << "BIKE\n";
	    else if (a == b) cout << "SAME\n";
	    else cout << "CAR\n";
	}
	
	return 0;
}