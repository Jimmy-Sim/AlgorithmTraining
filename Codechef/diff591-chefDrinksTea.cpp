#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a % b != 0) cout << (a / b + 1) * c << '\n';
	    else cout << (a / b) * c << '\n';
	}
	
	return 0;
}