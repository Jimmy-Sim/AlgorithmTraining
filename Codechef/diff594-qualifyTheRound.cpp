#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (b + 2 * c >= a) cout << "Qualify\n";
	    else cout << "NotQualify\n";
	}
	
	return 0;
}