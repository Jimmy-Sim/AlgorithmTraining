#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    int mn = min(a, min(b, c));
	    if (a == mn) cout << b + c << '\n';
	    else if (b == mn) cout << a + c << '\n';
	    else cout << a + b << '\n';
	}
	
	return 0;
}