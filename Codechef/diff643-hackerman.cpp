#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    bool isPrime = true;
	    for (int i = 2; i < a + b; i++) {
	        if ((a + b) % i == 0) {
	            isPrime = false;
	            break;
	        }
	    }
	    
	    if (isPrime) cout << "Alice\n";
	    else cout << "Bob\n";
	}
	
	return 0;
}