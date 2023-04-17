#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (c - (b / a) < 0) cout << 0 << '\n';
	    else cout << c - (b / a) << '\n';
	}
	
	return 0;
}