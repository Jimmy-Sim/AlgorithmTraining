#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a + b <= c) cout << 2 << '\n';
	    else if (a <= c) cout << 1 << '\n';
	    else cout << 0 << '\n';
	}
	
	return 0;
}