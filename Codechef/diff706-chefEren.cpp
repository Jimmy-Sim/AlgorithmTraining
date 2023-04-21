#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a % 2 == 0) cout << (a / 2) * b + (a / 2) * c << '\n';
	    else cout << (a / 2) * b + (a / 2 + 1) * c << '\n';
	}
	
	return 0;
}