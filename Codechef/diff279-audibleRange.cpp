#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int frequency;
	    cin >> frequency;
	    
	    if (frequency >= 67 && frequency <= 45000) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}