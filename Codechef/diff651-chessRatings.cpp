#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if ((b - a) % 8 != 0) cout << ((b - a) / 8) + 1 << '\n';
	    else cout << (b - a) / 8 << '\n';
	}
	
	return 0;
}