#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if ((b - a) % 2 == 0) cout << a + ((b - a) / 2) << '\n';
	    else cout << -1 << '\n';
	}
	
	return 0;
}