#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int minutes;
	    cin >> minutes;
	    
	    if (minutes >= 30) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}