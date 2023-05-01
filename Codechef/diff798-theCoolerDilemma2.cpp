#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (b % a == 0) cout << b / a - 1 << '\n';
	    else cout << b / a << '\n';
	}
	
	return 0;
}