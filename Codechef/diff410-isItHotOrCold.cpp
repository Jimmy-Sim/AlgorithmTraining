#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n > 20) cout << "HOT\n";
	    else cout << "COLD\n";
	}
	
	return 0;
}