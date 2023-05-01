#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    int mn = min(a, min(b, c));
	    
	    if (a == mn) cout << "Draw\n";
	    else if (b == mn) cout << "Bob\n";
	    else cout << "Alice\n";
	}
	
	return 0;
}