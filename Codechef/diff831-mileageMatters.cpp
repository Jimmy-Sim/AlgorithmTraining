#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    double a, b, c, d, e;
	    cin >> a >> b >> c >> d >> e;
	    
	    if ((a / c) * b < (a / e) * d) cout << "PETROL\n";
	    else if ((a / c) * b == (a / e) * d) cout << "ANY\n";
	    else cout << "DIESEL\n";
	}
	
	return 0;
}