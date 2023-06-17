#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a + b > c) cout << "TRAIN\n";
	    else if (a + b == c) cout << "EQUAL\n";
	    else cout << "PLANEBUS\n";
	}
	
	return 0;
}