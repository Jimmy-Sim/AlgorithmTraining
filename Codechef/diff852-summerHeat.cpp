#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    int total = c / a + d / b;
	    if (c % a != 0) total += 1;
	    if (d % b != 0) total += 1;
	    
	    cout << total << '\n';
	}
	
	return 0;
}