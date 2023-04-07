#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if ((a * b) % 4 != 0) cout << (a * b) / 4 + 1 << '\n';
	    else cout << (a * b) / 4 << '\n';
	}
	
	return 0;
}