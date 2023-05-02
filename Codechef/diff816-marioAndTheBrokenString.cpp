#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    string phrase;
	    cin >> n >> phrase;
	    
	    bool canJoin = true;
	    for (int i = 0; i < n / 2; i++) {
	        if (phrase[i] != phrase[i + n / 2]) {
	            canJoin = false;
	            break;
	        }
	    }
	    
	    if (canJoin) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}