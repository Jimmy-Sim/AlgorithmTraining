#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (a < b) cout << b - a << '\n';
	    else if (a > b) {
	        if ((a - b) % 2 == 1) cout << (a - b) / 2 + 2 << '\n';
	        else cout << (a - b) / 2 << '\n';
	    }
	    else cout << 0 << '\n';
	}
	
	return 0;
}