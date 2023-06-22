#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n <= 3) cout << "BRONZE\n";
	    else if (n <= 6) cout << "SILVER\n";
	    else cout << "GOLD\n";
	}
	
	return 0;
}