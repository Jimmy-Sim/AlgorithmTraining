#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (2 * a > 5 * b) cout << "Chocolate\n";
	    else if (2 * a == 5 * b) cout << "Either\n";
	    else cout << "Candy\n";
	}
	
	return 0;
}