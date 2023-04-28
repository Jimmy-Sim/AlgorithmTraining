#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if ((a - c) % b != 0) cout << (a - c) / b + 2 << '\n';
	    else cout << (a - c) / b + 1 << '\n';
	}
	
	return 0;
}