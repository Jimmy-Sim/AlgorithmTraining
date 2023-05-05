#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    string n;
	    cin >> n;
	    
	    string reverse = "";
	    for (int i = n.size() - 1; i >= 0; i--) reverse += n[i];
	    
	    if (n == reverse) cout << "wins\n";
	    else cout << "loses\n";
	}
	
	return 0;
}