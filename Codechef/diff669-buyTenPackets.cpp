#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (2 * a <= b) cout << 5 * a << '\n';
	    else cout << a + 2 * b << '\n';
	}
	
	return 0;
}