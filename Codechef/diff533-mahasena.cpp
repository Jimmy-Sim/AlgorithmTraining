#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	int evenCount = 0, oddCount = 0;
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n % 2 == 0) evenCount++;
	    else oddCount++;
	}
	
	if (evenCount > oddCount) cout << "READY FOR BATTLE\n";
	else cout << "NOT READY\n";
	
	return 0;
}