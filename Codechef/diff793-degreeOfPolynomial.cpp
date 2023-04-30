#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int dgr;
	    for (int i = 0; i < n; i++) {
	        int term;
	        cin >> term;
	        
	        if (term != 0) dgr = i;
	    }
	    
	    cout << dgr << '\n';
	}
	
	return 0;
}