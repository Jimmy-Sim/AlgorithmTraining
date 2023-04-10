#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n % 3 != 0) cout << (n / 3 + 1) * 3 - n << '\n';
	    else cout << 0 << '\n';
	}
	
	return 0;
}