#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (abs(a - b) % c != 0) cout << abs(a - b) / c + 1 << '\n';
	    else cout << abs(a - b) / c << '\n';
	}
	
	return 0;
}