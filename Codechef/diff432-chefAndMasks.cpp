#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (100 * a < 10 * b) cout << "Disposable\n";
	    else cout << "Cloth\n";
	}
	
	return 0;
}