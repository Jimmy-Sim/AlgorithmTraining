#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        if (b - a > 0) cout << b - a << '\n';
        else cout << 0 << '\n';
    }
	
	return 0;
}