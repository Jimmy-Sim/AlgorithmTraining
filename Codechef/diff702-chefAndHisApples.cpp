#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (a - (b + c) >= d) cout << 0 << '\n';
	    else if (a - b >= d || a - c >= d) cout << 1 << '\n';
	    else cout << 2 << '\n';
	}
	
	return 0;
}