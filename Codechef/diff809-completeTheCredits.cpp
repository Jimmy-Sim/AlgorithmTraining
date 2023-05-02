#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n > 65) cout << "Overload\n";
	    else if (n < 35) cout << "Underload\n";
	    else cout << "Normal\n";
	}
	
	return 0;
}