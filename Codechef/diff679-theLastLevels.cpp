#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a > 3) {
	        if (a % 3 == 0) cout << a * b + (a / 3 - 1) * c << '\n';
	        else cout << a * b + (a / 3) * c << '\n';
	    }
	    else cout << a * b << '\n';
	}
	
	return 0;
}