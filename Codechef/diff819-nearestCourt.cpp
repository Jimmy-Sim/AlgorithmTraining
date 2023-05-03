#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (abs(a - b) % 2 != 0) cout << abs(a - b) / 2 + 1 << '\n';
	    else cout << abs(a - b) / 2 << '\n';
	}
	
	return 0;
}