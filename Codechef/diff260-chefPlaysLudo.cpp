#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	while (N--) {
	    int roll;
	    cin >> roll;
	    
	    if (roll == 6) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}