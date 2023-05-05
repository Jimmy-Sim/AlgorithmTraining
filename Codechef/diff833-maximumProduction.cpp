#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    cout << max(7 * b, a * c + (7 - a) * d) << '\n';
	}
	
	return 0;
}