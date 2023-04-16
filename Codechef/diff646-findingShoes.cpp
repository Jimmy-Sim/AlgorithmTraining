#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (a >= b) cout << a - b + a << '\n';
	    else cout << a << '\n';
	}
	
	return 0;
}