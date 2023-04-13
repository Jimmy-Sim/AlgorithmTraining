#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (max(a, b) < max(c, d)) cout << "P\n";
	    else if (max(a, b) == max(c, d)) cout << "TIE\n";
	    else cout << "Q\n";
	}
	
	return 0;
}