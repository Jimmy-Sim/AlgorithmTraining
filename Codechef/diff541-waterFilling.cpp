#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if ((a == 0 && b == 0 && c == 0) || (a == 1 && b == 0 && c == 0) || (a == 0 && b == 1 && c == 0) || (a == 0 && b == 0 && c == 1)) cout << "Water filling time\n";
	    else cout << "Not now\n";
	}
	
	return 0;
}