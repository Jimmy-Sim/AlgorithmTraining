#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
        if (a % b == 0 && (a / b) % 2 == 0) cout << "Yes\n";
        else cout << "No\n";
	}
	
	return 0;
}