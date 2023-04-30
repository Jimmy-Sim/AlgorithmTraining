#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n == 1) {
	        cout << "no\n";
	        continue;
	    }
	    else if (n == 2) {
	        cout << "yes\n";
	        continue;
	    }
	    
	    bool isPrime = true;
	    for (int i = 2; i < n / 2; i++) {
	        if (n % i == 0) {
	            isPrime = false;
	            break;
	        }
	    }
	    
	    if (isPrime) cout << "yes\n";
	    else cout << "no\n";
	}
	
	return 0;
}