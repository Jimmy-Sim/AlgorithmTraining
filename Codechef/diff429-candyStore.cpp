#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (b > a) cout << a + 2 * (b - a) << '\n';
	    else cout << b << '\n';
	}
	
	return 0;
}