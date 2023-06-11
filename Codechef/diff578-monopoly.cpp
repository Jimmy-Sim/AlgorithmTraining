#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if ((a > b + c + d) || (b > a + c + d) || (c > a + b + d) || (d > a + b + c)) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}