#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n < 51) cout << "LEFT\n";
	    else cout << "RIGHT\n";
	}
	
	return 0;
}