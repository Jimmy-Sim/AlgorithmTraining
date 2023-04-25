#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    int aDist = (0 - a) * (0 - a) + (0 - b) * (0 - b), bDist = (0 - c) * (0 - c) + (0 - d) * (0 - d);
	    if (aDist > bDist) cout << "ALEX\n";
	    else if (aDist == bDist) cout << "EQUAL\n";
	    else cout << "BOB\n";
	}
	
	return 0;
}