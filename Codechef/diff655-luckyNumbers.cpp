#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    bool isLucky = false;
	    while (n > 0) {
	        if (n % 10 == 7) {
	            isLucky = true;
	            break;
	        }
	        n /= 10;
	    }
	    
	    if (isLucky) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}