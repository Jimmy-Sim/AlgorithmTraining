#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (c <= d) cout << a * c << '\n';
	    else cout << b * c + (a - b) * d << '\n';
	}
	
	return 0;
}