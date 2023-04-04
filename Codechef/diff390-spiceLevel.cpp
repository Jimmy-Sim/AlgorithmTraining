#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n < 4) cout << "MILD\n";
	    else if (n < 7) cout << "MEDIUM\n";
	    else cout << "HOT\n";
	}
	
	return 0;
}