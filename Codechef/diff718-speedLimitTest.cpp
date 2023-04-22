#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    double a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (a / b > c / d) cout << "Alice\n";
	    else if (a / b == c / d) cout << "Equal\n";
	    else cout << "Bob\n";
	}
	
	return 0;
}