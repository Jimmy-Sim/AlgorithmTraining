#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int mx = max(a, max(b, c));
        
        if (a == mx) cout << "Alice\n";
        else if (b == mx) cout << "Bob\n";
        else cout << "Charlie\n";
    }
    
	return 0;
}