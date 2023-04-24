#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    double a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (a / b < c / d) cout << "Chef\n";
	    else if (a / b == c / d) cout << "Both\n";
	    else cout << "Chefina\n";
	}
	
	return 0;
}