#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (a + (c * d) > b) cout << "Overflow\n";
	    else if (a + (c * d) == b) cout << "Filled\n";
	    else cout << "Unfilled\n";
	}
	
	return 0;
}