#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    cout << (5 * a + 10 * b) / c << '\n';
	}
	
	return 0;
}